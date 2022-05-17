cd1, nP1, vP1 = input().split()
cd2, nP2, vP2 = input().split()

total = (float(vP1)*int(nP1)) + (float(vP2)*int(nP2))

print(f'VALOR A PAGAR: R$ {total:.2f}')