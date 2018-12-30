n = int(input())
s = input().rstrip()

first_c = s[0]
first_n = 0
last_c = s[-1]
last_n = 0

for i in range(n):
    if s[i] == first_c:
        first_n += 1
    else:
        break

for i in reversed(range(n)):
    if s[i] == last_c:
        last_n += 1
    else:
        break

if first_c == last_c:
    ans = (first_n + 1) * (last_n + 1)
else:
    ans = (first_n + 1) + (last_n + 1) - 1

print(ans % 998244353)
