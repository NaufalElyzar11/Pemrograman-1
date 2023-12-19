    n = int(input())

    A = []
    print("Matriks A")
    for i in range(n):
        row = list(map(int, input().split()))
        A.append(row)

    B = []
    print("Matriks B")
    for i in range(n):
        row = list(map(int, input().split()))
        B.append(row)

    hasil = []
    for i in range(n):
        row = []
        for j in range(n):
            total = 0
            for k in range(n):
                total += A[i][k] * B[k][j]
            row.append(total)
        hasil.append(row)

    print("Matriks A x B:")
    for row in hasil:
        print(*row)
