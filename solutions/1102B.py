from collections import defaultdict
import sys

n, k = map(int, input().split())
l = list(map(int, input().split()))

d = defaultdict(int)

ans = 'YES'

if n < k:
    ans = 'NO'
    sys.exit(0)

for c in l:
    d[c] += 1
    if d[c] > k:
        ans = 'NO'
        break

if ans == 'YES':
    print(ans)
    arr = []
    color = 1
    used = {}
    for c in l:
        if color <= k:
            arr.append(color)
            used[c] = used.get(c, [False for _ in range(k + 2)])
            used[c][color] = True
            color += 1
        else:
            used[c] = used.get(c, [False for _ in range(k + 2)])
            for i in range(1, k + 1):
                if used[c][i] == False:
                    arr.append(i)
                    used[c][i] = True
                    break
    print(' '.join(map(str, arr)))
else:
    print(ans)
