def count_digits_optimized(A, B):
    digit_count = [0] * 10

    while A <= B:
        str_A = str(A)
        for digit in str_A:
            digit_count[int(digit)] += 1
        A += 1

    return digit_count

T = int(input())

for _ in range(T):
    A, B = map(int, input().split())
    result = count_digits_optimized(A, B)
    print(*result)