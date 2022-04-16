


#include "Menu.h"
#include "Funciones.h"
#include <stdio.h>
#include <stdlib.h>


int Menu(void){

	float aerolineas;  //aerolineas
		  aerolineas=0;
		  float latam;   //latam
		  latam=0;
		  float kilometros; //km
	      kilometros=0;
	int opciones;
	int subMenu;
	float tarjetaDeDebitoAerolineas;
	float tarjetaDeCreditoAerolineas;
	float monedaArgentinaAbitcoinAerolineas;
	float precioUnitarioAerolineas;

	float diferencia;

	float tarjetaDeDebitoLatam;
	float tarjetaDeCreditoLatam;
	float monedaArgentinaAbitcoinLatam;
	float precioUnitarioLatam;

	do{

		printf("\n1. Ingresar Kilómetros:");
		printf("\n2. Ingresar Precio de Vuelos:");
		printf("\n3. Calcular todos los costos:");
		printf("\n4. Informar Resultados");
		printf("\n5. Carga forzada de datos");
		printf("\n6. Salir");
		printf("\n\nElija una opcion :");
		scanf("%d",&opciones);

		switch(opciones){
			case 1:
				kilometros=PedirUnNumero("\nIngrese los kilometros:");
				break;
			case 2:
				do{
					printf("\n\nEmpresas disponibles: ");
					printf("\n1.Aerolineas");
					printf("\n2.Latam");
					printf("\n3.salir");
					printf("\n\nElija la opción: ");
					scanf("%d",&subMenu);
					if(subMenu==1){
						aerolineas=PedirUnNumero("\nIngrese el precio del vuelo:"); //aerolineas
					}else{
						if(subMenu==2){
							latam=PedirUnNumero("\nIngrese el precio del vuelo:"); //Latam
						}
					}
				}while(subMenu !=3);
				break;

			case 3:
				if(latam==0 || kilometros==0 || aerolineas==0){
					printf("No ingresaste los datos, por favor, completelo.");
				}else{

				tarjetaDeDebitoAerolineas=HacerDescuento(aerolineas,10);
				tarjetaDeCreditoAerolineas=HacerAumento(aerolineas,25);
				monedaArgentinaAbitcoinAerolineas=ConversorPesosArgentinaAbitcoin(aerolineas);
				precioUnitarioAerolineas=PrecioUnitario(aerolineas,kilometros);

				diferencia=diferenciasDeValores(aerolineas,latam);

				tarjetaDeDebitoLatam=HacerDescuento(latam,10);
				tarjetaDeCreditoLatam=HacerAumento(latam, 25);
				monedaArgentinaAbitcoinLatam=ConversorPesosArgentinaAbitcoin(latam);
				precioUnitarioLatam=PrecioUnitario(latam, kilometros);
				}

				break;

			case 4:
				printf("\nResultados Aerolineas;");
				printf("\nPrecio Aerolineas: %f",aerolineas);
				printf("\nPrecio con tarjeta de débito: $ %2.f",tarjetaDeDebitoAerolineas);
				printf("\nPrecio con tarjeta de credito: $ %2.f",tarjetaDeCreditoAerolineas);
				printf("\nPrecio pagando con bitcoin: %f BTC",monedaArgentinaAbitcoinAerolineas);
				printf("\nPrecio unitario: $ %f",precioUnitarioAerolineas);
				printf("\n\n");
				printf("\nResultados Latam;");
				printf("\nPrecio Latam: %f",latam);
			    printf("\nPrecio con tarjeta de débito: $ %2.f",tarjetaDeDebitoLatam);
				printf("\nPrecio con tarjeta de credito: $ %2.f",tarjetaDeCreditoLatam);
				printf("\nPrecio pagando con bitcoin: %f BTC",monedaArgentinaAbitcoinLatam);
				printf("\nPrecio unitario: $ %2.f",precioUnitarioLatam);
				printf("\n");
				printf("diferencia entre aerolineas y latam : %2.f",diferencia);
				printf("\n\n");

				break;

			case 5:
				latam=7090;
				aerolineas=162965;
				kilometros=159339;

				tarjetaDeDebitoAerolineas=HacerDescuento(aerolineas,10);
				tarjetaDeCreditoAerolineas=HacerAumento(aerolineas, 10);
				monedaArgentinaAbitcoinAerolineas=ConversorPesosArgentinaAbitcoin(aerolineas);
				precioUnitarioAerolineas=PrecioUnitario(aerolineas, kilometros);

				diferencia=diferenciasDeValores(aerolineas, latam);

				tarjetaDeDebitoLatam=HacerDescuento(latam,10);
				tarjetaDeCreditoLatam=HacerAumento(latam, 10);
				monedaArgentinaAbitcoinLatam=ConversorPesosArgentinaAbitcoin(latam);
				precioUnitarioLatam=PrecioUnitario(latam, kilometros);

				printf("\n\nKms ingresados: %f",kilometros);
				printf("\nResultados Aerolineas;");
				printf("\nPrecio Aerolineas: %f",aerolineas);
				printf("\nPrecio con tarjeta de débito: $ %2.f",tarjetaDeDebitoAerolineas);
				printf("\nPrecio con tarjeta de credito: $ %2.f",tarjetaDeCreditoAerolineas);
				printf("\nPrecio pagando con bitcoin: %f BTC",monedaArgentinaAbitcoinAerolineas);
				printf("\nPrecio unitario: $ %2.f",precioUnitarioAerolineas);
				printf("\n\n");
				printf("\nResultados Latam;");
				printf("\nPrecio Latam: %f",latam);
				printf("\nPrecio con tarjeta de débito: $ %2.f",tarjetaDeDebitoLatam);
				printf("\nPrecio con tarjeta de credito: $ %2.f",tarjetaDeCreditoLatam);
				printf("\nPrecio pagando con bitcoin: %f BTC",monedaArgentinaAbitcoinLatam);
				printf("\nPrecio unitario: $ %f",precioUnitarioLatam);
				printf("\n");
				printf("diferencia entre aerolineas y latam : %2.f",diferencia);
				printf("\n\n");

				break;

			case 6:
				printf("Usted ha salido");
				opciones=6;
		}

	}while(opciones!=6);

	return opciones;

}
