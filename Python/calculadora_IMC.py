# calcular el IMC en Python
c1 = 0  # infrapeso
c2 = 0  # peso normal
c3 = 0  # sobrepeso
c4 = 0  # obesidad
c5 = 0  # obesidad mórbida

while True:
    print("Calculadora de IMC en Python")
    # Solicitar peso y altura al usuario
    peso = float(input("Ingrese su peso en kg: "))
    altura = float(input("Ingrese su altura en metros: "))
    # Calcular el IMC
    imc = peso / (altura ** 2)
    # Mostrar el resultado
    print(f"Su IMC es: {imc:.2f}")
    # Clasificar el IMC
    if imc < 18.5:
        print("Usted está bajo de peso.")
        c1 += 1
    elif 18.5 <= imc < 24.9:
        print("Usted tiene un peso normal.")
        c2 += 1
    elif 25 <= imc < 29.9:
        print("Usted tiene sobrepeso.")
        c3 += 1
    elif 30 <= imc < 39.9:
        print("Usted tiene obesidad.")
        c4 += 1
    elif imc >= 40:
        print("Usted tiene obesidad mórbida.")
        c5 += 1
    reiniciar = input("\n¿Desea calcular otro IMC? Presione 's' para continuar o cualquier otra tecla para salir: ")
    if reiniciar.lower() != 's':
        break

print(f"\nHubieron {c1} personas con infrapeso.")
print(f"Hubieron {c2} personas con peso normal.")
print(f"Hubieron {c3} personas con sobrepeso.")
print(f"Hubieron {c4} personas con obesidad.")
print(f"Hubieron {c5} personas con obesidad morbida.")

