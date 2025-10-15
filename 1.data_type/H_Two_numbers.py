import math
a,b = map(int,(input()).split())

f = math.floor(a/b)
c = math.ceil(a/b)
r = round(a/b)
print(f"floor {a} / {b} = {f}")
print(f"ceil {a} / {b} = {c}")
print(f"round {a} / {b} = {r}")