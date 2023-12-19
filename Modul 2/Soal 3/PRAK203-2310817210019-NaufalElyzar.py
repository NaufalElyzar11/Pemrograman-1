input_str = input("Masukkan nilai a, b, i, j, x, dan y (dipisahkan oleh spasi): ")
a, b, i, j, x, y = map(float, input_str.split())

hasilnya = a - (b * i / j) - x + y

print(f"Hasilnya adalah {hasilnya:.3f}")
