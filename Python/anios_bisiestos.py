# calcular anios bisiestos en python
print("Años bisiestos en Python")
# Solicitar año al usuario
anios = int(input("Ingrese el año: "))
if anios < 1582: # Verificar si el año es anterior a 1582 
    print("El calendario gregoriano no existía antes de 1582.")
else:
    if (anios % 4 == 0 and anios % 100 != 0) or (anios % 400 == 0): #condicionales para determinar si es bisiesto
        # Si el año es divisible por 4 y no por 100, o si es divisible por 400, es bisiesto
        print(f"{anios} es un año bisiesto.")
    else:
        print(f"{anios} no es un año bisiesto.")