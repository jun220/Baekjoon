import os
import urllib.parse

HEADER = "여기에 README 파일의 상단 텍스트를 넣으세요\n\n"
BAEKJOON_DIR = "백준"

def create_markdown_table(directory, problems):
    content = "## 🚀 {}\n".format(directory)
    content += "| 문제번호 | 링크 |\n"
    content += "| --------- | ---- |\n"
    for problem in problems:
        problem_name = os.path.basename(problem)
        link = urllib.parse.quote(problem)
        content += "| {} | [링크]({}) |\n".format(problem_name, link)
    return content

def main():
    content = HEADER
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
