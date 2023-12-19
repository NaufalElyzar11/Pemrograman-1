baris,kolom = map(int,(input().split()))
matriks = []
x = 0
dalam = list(map(int, input().split()))
print("\n")
for i in range(baris):          
    matriks.append(dalam[x : x + kolom])
    x = x + kolom
for baris in matriks:
    for dalam in baris:
        print(dalam, end = " ")
    print( )