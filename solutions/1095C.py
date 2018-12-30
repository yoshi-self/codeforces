n, k = map(int, input().split())
b = bin(n)[2:]
min1 = b.count('1')

if n < k:
    print('NO')
elif min1 > k:
    print('NO')
else:
    print('YES')
    i = 0
    pows = []
    while i < len(b):
        idx = len(b) - 1 - i
        if b[idx] == '1':
            pows.append(2 ** i)
        i += 1
    while len(pows) != k:
        i = len(pows) - 1
        while pows[i] == 1 or pows[i] == 0:
            i -= 1
        while pows[i] != 1 and len(pows) != k:
            pows.append(pows[i] // 2)
            pows[i] //= 2
    ans = ' '.join(map(str, pows))
    print(ans)
