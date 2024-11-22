# import core as modulo

# palavra = "subinoonibus"
# print(f'De frente pra trás:\n{palavra}\n\nDe trás pra frente:\n{modulo.inverter(palavra)}')
# modulo.palindromo(palavra)

from core import inverter, somalista

v = [1,5,34,67,3,5,56,7]
qtd = len(v)
print(qtd)
palavra=[]
for i in range(0, qtd):
    if v[i] < 61:
        x = v[i] + 65
        y = chr(x)
        palavra.append(x)
    elif v[i] >= 65 and v[i] <= 126:
        palavra.append(v[i])
    elif v[i] > 126 and v[i] < 191:
        x = v[i] - 65
        palavra.append(x)
print(palavra)
i = 65
print(chr(i))