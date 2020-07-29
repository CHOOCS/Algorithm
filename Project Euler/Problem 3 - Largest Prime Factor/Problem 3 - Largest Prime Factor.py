def prime_factor_cal(num):
    prime_factor = 1
    i = 2
    while i < num:
        if num % i == 0:
            num = num / i
        else:
            i = i + 1

    if i > prime_factor:
        prime_factor = i

    print(prime_factor)


prime_factor_cal(600851475143)