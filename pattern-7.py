h = int(input())
for x in range(h//2):
    print(" " * (h - x), "*" * (2*x + 1))
for x in range((h - 1)//2, -1//2, -1//2):
    print(" " * (h - x), "*" * (2*x + 1))
