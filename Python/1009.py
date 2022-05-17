nome = str(input())
sFixo = float(input())
vendas = float(input())

sBonus = float((0.15*vendas)+sFixo)

print(f'TOTAL = R$ {sBonus:.2f}')