r = float(input())
t = float(input())

# π = 22 / 7

V = 22 * ((r ** 2) / 7) * t
L = (2 * 22 * (r / 7) * t) + (2 * 22 * ((r ** 2) / 7))
K = 2 * 22 * (r / 7)

print(f"Volume bejana adalah {V:.2f}")
print(f"Luas permukaan bejana adalah {L:.2f}")
print(f"Keliling alas bejana adalah {K:.2f}")
