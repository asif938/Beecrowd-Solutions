import math
string = input().strip()
while string != '0':
    l = len(string)
    print(math.factorial(l))
    string = input().strip()
    