HargaA = 400000
HargaB = 350000

DiskonA = 0.13  
DiskonB = 0.21  

TotalA = HargaA - (HargaA * DiskonA)
TotalB = HargaB - (HargaB * DiskonB)

print(f"Harga sepatu A adalah {HargaA}")
print(f"Harga sepatu B adalah {HargaB}")
print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {TotalA:.0f}")
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {TotalB:.0f}")
