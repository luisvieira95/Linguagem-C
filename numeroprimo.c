#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a;
	printf("Digite um numero: ");
	scanf("%d", &a);


//o numero dois é primo, entao exclui ele no laço


	while (a!=2){

		if (a>=1 && a%a==0 && a%2!=0 && a%3!=0){

			printf("O numero eh primo.\n");

	break;
											}
		else{

		printf("O numero nao eh primo.\n");	
				}									
	break;
											
		}


// um numero é primo se for apenas divisivel por ele mesmo ou por um. Exceto o numero dois


	

// o numero dois é primo, entao criei uma condição para ele

	if (a==2){

		printf("O numero eh primo\n");
	}

	return 0;
}
