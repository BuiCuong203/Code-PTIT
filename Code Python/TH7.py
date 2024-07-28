def find_smallest_B(N, A):
    B = [1] * N  # Khởi tạo dãy B ban đầu với tất cả các phần tử bằng 1

    for i in range(N - 2, -1, -1):  # Duyệt từ N-2 đến 0
        B[i] = (A[i + 1] * B[i + 1]) // A[i]  # Tính giá trị của B[i] dựa trên tính chất phân số

    return sum(B)  # Tính tổng các phần tử của dãy B

# Đọc số lượng phần tử N
N = int(input())

# Đọc dãy số nguyên A
A = list(map(int, input().split()))

# Tìm và in ra tổng của dãy B
result = find_smallest_B(N, A)
print(result)