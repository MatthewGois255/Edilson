a = int(input("1.\nPrimeiro número: "))
b = int(input("Segundo número: "))
maior = a
if b > a:
    maior = b
print(maior)

a = int(input("\n2.\nDigite um número: "))
if a % 2 == 0:
    print("É par")
else:
    print("É impar")

a = input("\n3.\nDigite a sigla do seu sexo: ")
if a == 'm':
    print("Masculino")
elif a == 'f':
    print("Feminino")
else:
    print("Inválido")

a = input("\n4.\nDigite uma letra: ")
match a:
    case 'a':
        print("vogal")
    case 'e':
        print("vogal")
    case 'i':
        print("vogal")
    case 'o':
        print("vogal")
    case 'u':
        print("vogal")
    case _:
        print("consoante")

a = int(input("\n5.\nPrimeiro número: "))
b = int(input("Segundo número: "))
c = int(input("Terceiro número: "))
maior = a
if b > a:
    maior = b
    if c > b:
        maior = c
        print(maior)
    else:
        print(maior)
else:
    print(maior)

a = input("\n6.\nDigite a sigla do seu período:\nMatutino (m)\nVespertino (v)\nNoturno (n)\n\n: ")
if a == 'm':
    print("Bom dia!")
elif a == 'v':
    print("Boa Tarde!")
elif a == 'n':
    print("Boa noite!")
else:
    print("Inválido")

a = int(input("\n7.\nDigite seu salário: "))
if a <= 280:
    b = 0.2
    c = a * b
    d = c + a
    print(f"\nSalário anterior: R${a},00\nPercentual de reajuste: {int(b*100)}%\nValor do Aumento: R${int(c)},00\nNovo salário: R${int(d)},00\n")
elif a > 280 & a <= 700:
    b = 0.15
    c = a * b
    d = c + a
    print(f"\nSalário anterior: R${a},00\nPercentual de reajuste: {int(b*100)}%\nValor do Aumento: R${int(c)},00\nNovo salário: R${int(d)},00\n")
elif a > 700 & a <= 1500:
    b = 0.1
    c = a * b
    d = c + a
    print(f"\nSalário anterior: R${a},00\nPercentual de reajuste: {int(b*100)}%\nValor do Aumento: R${int(c)},00\nNovo salário: R${int(d)},00\n")
elif a > 1500:
    b = 0.05
    c = a * b
    d = c + a
    print(f"\nSalário anterior: R${a},00\nPercentual de reajuste: {int(b*100)}%\nValor do Aumento: R${int(c)},00\nNovo salário: R${int(d)},00\n")