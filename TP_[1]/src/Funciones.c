#include "Funciones.h"

float PedirUnNumero(char*mensaje){
	float numero;
	printf("%s",mensaje);
	scanf("%f",&numero);
	return numero;
}

float HacerDescuento(float numero, float porcentaje){
	float descuento;
	descuento= numero-(numero*(porcentaje/100));
	return descuento;
}

float HacerAumento(float numero, float porcentaje){
	float aumento;
	aumento= numero+(numero*(porcentaje/100));
	return aumento;
}

float ConversorPesosArgentinaAbitcoin(float pesos){
	float resultado;
	resultado= (pesos*1)/4606954.55;
	return resultado;
}

float PrecioUnitario(float UnNumero, float OtroNumero){
	float resultado;
	resultado= UnNumero/OtroNumero;
	return resultado;
}

float diferenciasDeValores(float UnNumero, float OtroNumero){
	float resultado;

	if(UnNumero>OtroNumero){
		resultado=UnNumero-OtroNumero;
	}else{
		if(OtroNumero>UnNumero){
			resultado=OtroNumero-UnNumero;
		}else {
			resultado=0;
		}
	}
	return resultado;
}
