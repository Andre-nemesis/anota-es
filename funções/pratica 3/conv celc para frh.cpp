#include <stdio.h>
#include <locale.h>

float Conv_CelsP_Frh (float C) {
	/*
	pode fazer assim
	
	float calc;
	calc = (C * 9 / 5) + 32;
	return calc;
	*/
	return (C * 9 / 5) + 32;
}

float Conv_FrhP_Cels(float F) {
	/*
	float calc;
	calc = (F - 32 ) * 5/9;
	return calc;
	*/
	return (F - 32 ) * 5/9;
}

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int opc;
	float temp,armtemp;
	
	printf("Conversor de temperatura Celsius e Fahrenheit.\n");
	printf("Digite o que você quer tipo de converção você quer fazer: \n");
	printf("1 - Celsius para Fahrenheit\n2 - Fahrenheit para Celsius\n");
	scanf("%d",&opc);
	
	while (opc != 1 && opc != 2) {
		printf("Valor inválido. Tente novamente.\n");
		printf("Digite o que você quer converter: \n");
		printf("1 - Converter Celsius para Fahrenheit\n2 - Fahrenheit para Celsius\n");
		scanf("%d",&opc);	
	}
		
	printf("Digite a temperatura: ");
	scanf("%f",&temp);
	
	if (opc == 1) {
		armtemp = Conv_CelsP_Frh(temp);
		printf("Esse é a temperatura em Fahrenheit: %.2f °F.\n",armtemp); 
	}
	else if(opc == 2) {
		armtemp = Conv_FrhP_Cels(temp);
		printf("Essa é a temperatura em Celsius: %.2f °C.\n",armtemp); 
	}
	
	return 0;
}
