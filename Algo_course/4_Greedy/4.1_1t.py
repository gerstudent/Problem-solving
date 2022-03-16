# Creating and filling an array (name = segments) with input, swap start and
# end point of the segments
segment = list()
for i in range(int (input())):
    a, b = map(int, input().split())
    segment.append([b, a])

segment.sort()

# Creating a new temporary array that adds the minimum right point (ans[-1])
# of the segments.
ans = list()
ans.append(segment[0][0])

# We are looking for one among the segments such that its right
# border is larger than minimal right point (ans[-1]).
for k in range(len(segment)):
    if segment[k][1] > ans[-1]:
        ans.append(segment[k][0])
print (len(ans))
print(*ans)
