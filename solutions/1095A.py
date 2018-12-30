n = int(input())
s = input().rstrip()

i = 1
c = 0
ans = ''
while c < n:
    ans += s[c]
    c += i
    i += 1

print(ans)
