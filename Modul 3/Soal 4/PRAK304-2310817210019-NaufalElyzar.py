n = int(input())

if 0 < n < 10:
    print("Satuan")
elif 10 <= n < 20:
    print("Belasan")
elif 20 <= n < 100:
    print("Puluhan")
elif n == 0:
    print("Nol")
elif n > 99:
    print("Anda Menginput Melebihi Limit Bilangan")
