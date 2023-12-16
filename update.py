import os
import urllib.parse
import subprocess
from datetime import datetime

HEADER = "## 🎯백준 하루에 한 문제씩 꼭 풀어보자!\n#### 🔥현재 스트릭 : "
BAEKJOON_DIR = "백준"

def get_commit_dates():
    # Git 로그에서 날짜를 가져오는 명령어
    cmd = ["git", "log", "--format=%cd", "--date=iso"]
    result = subprocess.run(cmd, stdout=subprocess.PIPE)
    dates = result.stdout.decode('utf-8').split('\n')
    return [datetime.datetime.strptime(date.split(' ')[0], '%Y-%m-%d').date() for date in dates if date]


def get_last_commit_info():
    # 마지막 커밋의 날짜와 메시지를 가져오는 Git 명령
    cmd_date = ["git", "log", "-1", "--format=%cd", "--date=iso"]
    cmd_message = ["git", "log", "-1", "--format=%B"]

    last_commit_date = subprocess.run(cmd_date, stdout=subprocess.PIPE).stdout.decode('utf-8').strip()
    last_commit_message = subprocess.run(cmd_message, stdout=subprocess.PIPE).stdout.decode('utf-8').strip()

    # 날짜 문자열을 날짜 객체로 변환
    last_commit_date = datetime.strptime(last_commit_date, '%Y-%m-%d %H:%M:%S %z').date()

    return last_commit_date, last_commit_message

def create_markdown_table(directory, problems):
    icons = {"Bronze": "🥉", "Silver": "🥈", "Gold": "🥇"}
    icon = icons.get(directory, "🏆")  # 디폴트 아이콘은 트로피로 설정

    content = "### {} {}\n".format(icon, directory)
    content += "| 문제번호 | 링크 |\n"
    content += "| --------- | ---- |\n"
    for problem in problems:
        problem_name = os.path.basename(problem)
        link = urllib.parse.quote(problem)
        content += "| {} | [링크]({}) |\n".format(problem_name, link)
    return content

def parse_commit_info(file_path):
    last_commit_date = None
    consecutive_days = 0

    with open(file_path, 'r') as file:
        lines = file.readlines()
        for line in lines:
            if line.startswith('Last Commit Date:'):
                date_str = line.strip().split(': ')[1]
                last_commit_date = datetime.strptime(date_str, '%Y-%m-%d').date()
            elif line.startswith('Consecutive Days:'):
                consecutive_days = int(line.strip().split(': ')[1])

    return last_commit_date, consecutive_days





def update_streak():

    last_commit_date, consecutive_days = parse_commit_info('commit_info.txt')
    print("기존 커밋 날짜:", last_commit_date, "연속 일수:", consecutive_days)

    # 파일 경로 예시: 'path/to/commit_info.txt'
    new_commit_date, new_commit_message = get_last_commit_info()
    print("새로운 커밋 날짜:", new_commit_date, "새로운 커밋 메시지:", new_commit_message)
    
    #날짜 비교
    date_difference = (new_commit_date - last_commit_date).days

    if date_difference == 0:
        # 날짜가 같으면 아무 것도 하지 않음
        pass
    elif date_difference == 1:
        # 날짜가 1일 차이날 때
        consecutive_days += 1
    else:
        # 날짜가 2일 이상 차이날 때
        consecutive_days = 0

    # commit_info.txt 파일 업데이트
    with open('commit_info.txt', 'w') as file:
        file.write(f"Last Commit Date: {new_commit_date}\n")
        file.write(f"Last Commit Message: {new_commit_message}\n")
        file.write(f"Consecutive Days: {consecutive_days}\n")
    
    return new_commit_date, consecutive_days

    


def main():
    content = HEADER
    new_commit_date, streak_days = update_streak()
    content += f"{streak_days}일 ({new_commit_date-streak_days}~{new_commit_date})\n\n"

    baekjoon_path = os.path.join(".", BAEKJOON_DIR)

    if not os.path.isdir(baekjoon_path):
        print(f"'{BAEKJOON_DIR}' 디렉토리를 찾을 수 없습니다.")
        return

    for difficulty in sorted(os.listdir(baekjoon_path)):
        difficulty_path = os.path.join(baekjoon_path, difficulty)
        if os.path.isdir(difficulty_path):
            problems = [os.path.join(difficulty_path, problem) for problem in sorted(os.listdir(difficulty_path))]
            content += create_markdown_table(difficulty, problems)

    with open("README.md", "w") as fd:
        fd.write(content)

if __name__ == "__main__":
    main()
