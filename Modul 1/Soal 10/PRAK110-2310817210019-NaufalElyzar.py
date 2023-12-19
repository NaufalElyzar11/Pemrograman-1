alas = 5.0  
tinggi = 12.0  

sisi_a = tinggi
sisi_b = alas

sisi_c = (sisi_a ** 2 + sisi_b ** 2) ** 0.5

keliling = sisi_a + sisi_b + sisi_c

luas = 0.5 * alas * tinggi

print("Diketahui :")
print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print("Jawab :")
print(f"Sisi A = {sisi_a:.0f} cm")
print(f"Sisi B = {sisi_b:.0f} cm")
print(f"Sisi C = {sisi_c:.0f} cm")  
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm")
