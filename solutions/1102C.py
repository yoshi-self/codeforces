n, x, y = map(int, input().split())
l = list(map(int, input().split()))

ans = 0
if x <= y:
    able = 0
    for t in l:
        if t <= x:
            able += 1
    ans = able // 2 + able % 2
else:
    ans = n

print(ans)
