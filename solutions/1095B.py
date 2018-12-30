n = int(input())
l = list(map(int, input().split()))
l.sort()

if len(l) == 2:
    ans = 0
elif l[1] - l[0] > l[-1] - l[-2]:
    ans = l[-1] - l[1]
else:
    ans = l[-2] - l[0]

print(ans)
