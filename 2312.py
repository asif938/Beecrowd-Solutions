n = int(input())
medal_table = []

for _ in range(n):
    country, gold, silver, bronze = input().split()
    gold, silver, bronze = int(gold), int(silver), int(bronze)
    medal_table.append((country, gold, silver, bronze))

medal_table.sort(key=lambda x: (-x[1], -x[2], -x[3], x[0]))

for country in medal_table:
    print(country[0], country[1], country[2], country[3])
    