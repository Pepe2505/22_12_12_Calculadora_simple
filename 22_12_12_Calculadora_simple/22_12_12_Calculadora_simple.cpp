// 22_10_24_005_calculadora_simple.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Antonio Ochoa Lopez
// en esta pratica vamos hacer una calculadora

#include <iostream>
#include <string>

int main()
{
	// declarar las variantes
	int operacion;
	int numero_1_a_sumar = 0;
	int numero_2_a_sumar = 0;
	int numero_1_a_restar = 0;
	int numero_2_a_restar = 0;
	int numero_1_a_multiplipar = 0;
	int numero_2_a_multiplicar = 0;
	int numero_1_a_dividir = 0;
	int numero_2_a_dividir = 0;
	int resultado_de_la_suma = 0;
	int resultado_de_la_resta = 0;
	int resultado_de_la_multiplicacion = 0;
	int resultado_de_la_division = 0;

	// preguntarle al usuario que operacion quieres hacer
	std::cout << "cual es la operacion que deseas hacer\n";
	std::cout << "para eligir la operacion que desea tendras que escoger entre el 1-4 (1 es la suma), (2 es la resta), (3 es la mutiplicacion) y (4 es divsion)\n";
	std::cin >> operacion;

	//pedir al usuario que ingrese la cantidad
	switch (operacion)
	{
	case 1:
		std::cout << "ingrese los 2 numeros que quiere sumar\n";
		std::cin >> numero_1_a_sumar;
		std::cin >> numero_2_a_sumar;
		resultado_de_la_suma = numero_1_a_sumar + numero_2_a_sumar;
		std::cout << "el resultado de la suma es " << resultado_de_la_suma << std::endl;
		break;

	case 2:
		std::cout << "ingrese las 2 cantidades que quiere resta\n";
		std::cin >> numero_1_a_restar;
		std::cin >> numero_2_a_restar;
		resultado_de_la_resta = numero_1_a_restar - numero_2_a_restar;
		std::cout << "el resultado de la resta es " << resultado_de_la_resta << std::endl;
		break;

	case 3:
		std::cout << "que cantidades quieres multiplicar\n";
		std::cin >> numero_1_a_multiplipar;
		std::cin >> numero_2_a_multiplicar;
		resultado_de_la_multiplicacion = numero_1_a_multiplipar * numero_2_a_multiplicar,
			std::cout << "el resultado de la multiplicacion es " << resultado_de_la_multiplicacion << std::endl;
		break;

	case 4:
		std::cout << "cual es el numero que quieres dividir\n";
		std::cin >> numero_1_a_dividir;
		std::cout << "entre que lo quieres dividir\n";
		std::cin >> numero_2_a_dividir;
		resultado_de_la_division = numero_1_a_dividir / numero_2_a_dividir;
		std::cout << "el resultado de la division " << resultado_de_la_division << std::endl;
		break;
	}
}