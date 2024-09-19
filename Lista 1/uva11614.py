import math
n = int(input())

for i in range(n):
    x = int(input())
    print(math.floor((math.sqrt(1+(8*x))-1)/2))