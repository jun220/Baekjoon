#!/usr/bin/env python

import os
from urllib import parse

HEADER="""# 
# 백준 & 프로그래머스 문제 풀이 목록

프로그래머스의 경우, 푼 문제 목록에 대한 마이그레이션이 필요합니다.

"""

def main():
    content = ""
    content += HEADER

    with open("README.md", "w") as fd:
        fd.write(content)

if __name__ == "__main__":
    main()
