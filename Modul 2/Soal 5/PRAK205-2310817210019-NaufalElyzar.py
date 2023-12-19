import math

A = float(input())
B = float(input())

C = math.sqrt((B ** 2) - (A ** 2))
K = A + B + C
L = 0.5 * A * C

print(f"Alas     : {C:.0f}")
print(f"Tinggi   : {A:.0f}")
print(f"Keliling : {K:.0f}")
print(f"Luas     : {L:.0f} cm^2")