n = int(input())
while n != 0:
    n -= 1
    words = input().split()
    words.sort(key=len, reverse=True)
    for i in range(len(words)):
        print(words[i], end='')
        if i != len(words):
            print(' ',end='')
    print()
