import math

a = float(input("a: "))
b = float(input("b: "))
c = float(input("c: "))

print("\n")

delta = (b**2) - 4 * (a*c)
print(f"Delta: {delta}")
if (delta==0):
    x1 = (-b + math.sqrt(delta)) / (2 * a)
    print(f"X1: {x1}")
else:
    x1 = (-b + math.sqrt(delta)) / (2 * a)
    x2 = (-b - math.sqrt(delta)) / (2 * a)
    print(f"x1: {x1}")
    print(f"x2: {x2}")

