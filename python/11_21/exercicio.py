n = []
for x in range(1, 21):
    print(x)
    n.append(x)

for y in n:
    print(y, end=" - ")
    if y == 20:
        print(y)
        break