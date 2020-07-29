t1 = 0
t2 = 1
totalSum = 0

while t1 < 4000000:
    temp = t1 + t2
    t1 = t2
    t2 = temp

    if t2 % 2 == 0:
        totalSum = totalSum + t2

print(totalSum)
