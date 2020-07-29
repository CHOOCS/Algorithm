def palindrome(i):
    return str(i) == str(i)[::-1]


largest = 0

for a in range(1, 100):
    for b in range(1, 100):
        num = a * b
        if palindrome(num) and num > largest:
            largest = num

print(largest)
