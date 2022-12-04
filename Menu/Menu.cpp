#include <stdio.h>
#include <conio.h>

void valores(int& valor1, int& valor2);
int main() {
	char opcion;
	int valor1 = 0, valor2 = 0;
	int caracter = 0;

	while (true)
	{
		printf("1. Suma\n");
		printf("2. Resta\n");
		printf("3. Multiplicacion\n");
		printf("4. Division\n");
		printf("<<Esc=Salir>>\n\n");
		printf("Elige una opcion: ");
		opcion = getch();
		printf("\n\n");
		caracter = opcion;
		if (opcion == 27)
		{
			printf("Saliste del programa");
			break;
		}
		switch (opcion) {
		case '1':
			valores(valor1, valor2);
			printf("La suma de %i+%i = %i\n\n", valor1, valor2, valor1 + valor2);
			break;
			getch();

		case'2':
			valores(valor1, valor2);
			printf("La resta de %i-%i = %i\n\n", valor1, valor2, valor1 - valor2);
			break;
			getch();

		case'3':
			valores(valor1, valor2);
			printf("La multiplicacion de %i*%i = %i\n\n", valor1, valor2, valor1 * valor2);
			break;
			getch();

		case'4':
			valores(valor1, valor2);
			printf("La division de %i/%i = %i\n\n", valor1, valor2, valor1 / valor2);
			break;
			getch();

		default:
			printf("elegiste una opcion incorrecta\n\n");
			getch();
		}
	}
}

void valores(int& valor1, int& valor2) {
	printf("Escribe un valor numerico: ", 130);
	scanf("%i", &valor1);
	printf("Escribe otro valor numerico: ", 130);
	scanf("%i", &valor2);
}
