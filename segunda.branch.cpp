#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float celsius;
	printf("Digite uma temperatura em Celsius: ");
	scanf("%f",&celsius);
	printf("\nConversão de celsius para Fahrenheit: %.2f",(celsius +273));
}
