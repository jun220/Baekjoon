import subprocess
import datetime

def get_commit_dates():
    # Git 로그에서 날짜를 가져오는 명령어
    cmd = ["git", "log", "--format=%cd", "--date=iso"]
    result = subprocess.run(cmd, stdout=subprocess.PIPE)
    dates = result.stdout.decode('utf-8').split('\n')
    return [datetime.datetime.strptime(date.split(' ')[0], '%Y-%m-%d').date() for date in dates if date]

def count_consecutive_days(dates):
    if not dates:
        return 0

    count = 1
    current_date = dates[0]

    for date in dates[1:]:
        if date == current_date - datetime.timedelta(days=1):
            count += 1
            current_date = date
        else:
            break

    return count

commit_dates = get_commit_dates()
consecutive_days = count_consecutive_days(commit_dates)

print(f"연속 커밋 일수: {consecutive_days}일")

# import subprocess
# import datetime

# def get_all_commit_dates():
#     # Git 로그에서 날짜를 가져오는 명령어
#     cmd = ["git", "log", "--format=%cd", "--date=iso"]
#     result = subprocess.run(cmd, stdout=subprocess.PIPE)
#     dates = result.stdout.decode('utf-8').split('\n')
#     return [datetime.datetime.strptime(date.split(' ')[0], '%Y-%m-%d').date() for date in dates if date]

# # 함수 사용 예시
# commit_dates = get_all_commit_dates()
# for date in commit_dates:
#     print(date)