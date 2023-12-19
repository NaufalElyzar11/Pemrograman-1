a,b = map(int, input().split())
matrix = [];matrix2 = []
if a == b:
    a1 = list(map(int, input().split()))
    a2 = list(map(int, input().split()))
    for i in range(a):
        matrix.append(a1[i])
    for i in range(b):
        matrix2.append(a2[i])
    for i in range(a) :
        hasil = matrix[i]*matrix2[i]
        print(hasil, end = " ")
    print()
else :
    print('Jumlah Tidak Sama')