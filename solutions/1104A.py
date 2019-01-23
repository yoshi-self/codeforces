k = int(input())

d = 1
for i in range(1, min(k, 10)):
    if k % i == 0:
        d = i

num = k // d
print(num)
arr = [d for _ in range(num)]
print(' '.join(map(str, arr)))
