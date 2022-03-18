cnt, sum, sum_num, n = 0, 0, 0, 1000
fib = [i for i in range(n)]
fib[0], fib[1] = 0, 1

for i in range(2, n):
    fib[i] = fib[i - 1] + fib[i - 2]
    if fib[i] % 3 == 0 and cnt < 10:
        cnt += 1
        sum += fib[i]
print(sum)
for i in range(len(str(sum))):
    sum_num,sum = sum_num + sum % 10, sum // 10

print(sum_num)