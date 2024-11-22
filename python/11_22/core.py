def somalista(valores=[]):
    """
    Recebe uma lista de números e faz a soma de todos os números da lista e retorna o resultado da soma de todos os números da soma

    Parameters
    -----------------------------
    valores: int[]
        lista de números para a soma

    Returns
    -----------------------------
        Retorna a soma de uma lista
    """

    resultado = 0
    for i in valores:
        resultado+=i
    
    return resultado

def maiorValor(lista=[]):
    """
    ...
    """
    m = lista[0]
    for i in lista:
        if i > m:
            m = i
    
    return m

def inverter(palavra = ""):
    """
    Recebe uma palavra de qualquer tamanho e retorna ela de trás para frente
    """
    qtd = len(palavra) - 1
    invertida=""
    for i in range(qtd,-1,-1):
        invertida+=palavra[i]
    return invertida

def palindromo(plv = ""):
    if plv.lower() == inverter(plv).lower():
        print("é palindromo")
    else:
        print("Não é palindromo")