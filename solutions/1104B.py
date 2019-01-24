s = input().rstrip()

ans = 'No'

st = []
num = 0
#for i in range(len(s) - 1):
for i in range(len(s)):
    c = s[i]
    if len(st) == 0:
        st.append(c)
    elif st[-1] == c:
        st.pop()
        num += 1
    else:
        st.append(c)

ans = 'No' if num % 2 == 0 else 'Yes'
print(ans)
