n = int(input())
ans = []
cur = 1
while n - cur > cur:
    ans.append(cur)
    n -= cur
    cur += 1

ans.append(n)
print(len(ans))
print(*ans)
