import math
n = int(input())
cont = 0
while n>0:
    largest_factorial = 1
    while math.factorial(largest_factorial) <= n:
        largest_factorial += 1
    largest_factorial -= 1
    cont += 1
    n -= math.factorial(largest_factorial)
print(cont)
