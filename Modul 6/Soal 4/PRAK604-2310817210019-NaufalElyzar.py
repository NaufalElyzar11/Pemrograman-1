i=0;j=0
Rill = input();Fek = input()
kode = len(Rill);pesan = len(Fek)
if kode != pesan :
    print('panjang Kalimat Berbeda, Pesan Palsu')
else :
    for x in range(kode):
        if(Rill[x]==Fek[x]):
            if (Rill[x] == ' '):
                print(" ", end = " ")
            else:
                print("*", end = " ")
                i += 1
        else :
            print("#",end=" ")
            j += 1
    print("\n* = ",i)
    print("# = ",j)
    if(i > j):
        print("Pesan Asli")
    else:
        print("Pesan Palsu")