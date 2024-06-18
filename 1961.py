n,m = [int(x) for x in input().split()]
l = [int(i) for i in input().split()]
win = True
for i in range(1,m):
    dif = l[i] - l[i-1]
    if abs(dif) > n:
        win = False
        break
if win == True:
    print("YOU WIN")
else:
    print("GAME OVER")
