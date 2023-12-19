JumlahRuangan = int(input())

BanyaknyaZetsu = list(map(int, input().split()))
hasil = []

for i in range(JumlahRuangan):
    hasil.append(BanyaknyaZetsu[i] * (i + 1))

print(*hasil)
