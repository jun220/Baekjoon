def count_words(s):
    count = 0
    flag = True

    for letter in s:
        if letter == ' ':
            flag = True
            continue
        if flag:
            count += 1
            flag = False
    
    return count

a = input()
print(count_words(a))