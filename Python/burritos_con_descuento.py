# Burritos con descuento en Python

def main():
    # Precios de cada tipo de burrito
    rojo = 25.75
    verde = 30.25
    chicharron = 35.5
    picadillo = 25.5

    # Mostrar menú
    print("\tHall's Burriteria")
    print("Rojo $25")
    print("Verde $30")
    print("Chicharron $35")
    print("Picadillo $25\n")
    print("Si compras de 10 a 19 burritos te haremos un 5% de descuento")
    print("A partir de los 20 burritos seria el 10%\n")
    print("Ingresa la cantidad de cada burrito que desees")

    # Solicitar cantidades
    contar_rojos = float(input("Rojo: "))
    contar_verdes = float(input("Verde: "))
    contar_chicharron = float(input("Chicharron: "))
    contar_picadillo = float(input("Picadillo: "))

    # Calcular precios por tipo
    ptotal_rojo = contar_rojos * rojo
    ptotal_verde = contar_verdes * verde
    ptotal_chicharron = contar_chicharron * chicharron
    ptotal_picadillo = contar_picadillo * picadillo

    # Confirmar cantidades
    print(f"\nSon {contar_rojos} de rojo")
    print(f"Son {contar_verdes} de verde")
    print(f"Son {contar_chicharron} de chicharron")
    print(f"Son {contar_picadillo} de picadillo")

    # Calcular totales
    suma_burritos = contar_rojos + contar_verdes + contar_chicharron + contar_picadillo
    total_burritos = ptotal_rojo + ptotal_verde + ptotal_chicharron + ptotal_picadillo
    total_con_descuento = total_burritos

    # Aplicar descuentos
    if suma_burritos > 10 and suma_burritos < 20:
        total_con_descuento = total_burritos - (total_burritos * 0.05)
        print(f"\tCon el 5% de descuento serian: ${total_con_descuento:.2f}")
    elif suma_burritos > 20:
        total_con_descuento = total_burritos - (total_burritos * 0.10)
        print(f"\tCon el 10% de descuento serian: ${total_con_descuento:.2f}")
    else:
        print(f"\tEntonces serian : ${total_burritos:.2f}")

    # Extra: Redondear
    opc = input("\n¿Gusta redondear?\nSi: 1  No: Presione cualquier otra tecla: ")
    if opc == '1':
        if suma_burritos > 10 and suma_burritos < 20:
            total_redondeado = int(total_con_descuento)
            print(f"Entonces serian: ${total_redondeado}")
        elif suma_burritos > 20:
            total_redondeado = int(total_con_descuento)
            print(f"Entonces serian: ${total_redondeado}")
        else:
            total_redondeado = int(total_burritos)
            print(f"Entonces serian: ${total_redondeado}")
    print("Muchas gracias por su compra, que tenga un excelente dia")

if __name__ == "__main__":
    main()
