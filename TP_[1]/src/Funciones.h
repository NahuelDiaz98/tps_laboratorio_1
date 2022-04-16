/*
 * Funciones.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Argüello
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <stdio.h>
#include <stdlib.h>

/// @brief Función que permite hacer un mensaje para pedir un numero flotante
///
/// @param  char mensaje , mensaje que el  usuario quiere  mostrar
/// @return retorna un numero flotante
float PedirUnNumero(char*mensaje);


/// @brief funcion que permite sacar el descuento.
///
/// @param numero  lo utilizamos como objetivo
/// @param porcentaje elegimos un numero para luego que la funcion decremente lo que requiere
/// @return devuelve el resultado  del descuento
float HacerDescuento(float numero, float porcentaje);


/// @brief  funcion que permite sacar el aumento
///
/// @param numero lo utilizaremos como objetivo
/// @param porcentaje elegimos un numero para luego que la funcion incremente lo que requiere
/// @return devuelve el resultado del aumento
float HacerAumento(float numero, float porcentaje);


/// @brief Funcion que permite ver el valor del pesos a bitcoin
///
/// @param pesos lo utulizamos para agregar los pesos que vamos a averiguar
/// @return devuelve  el valor en bitcoin
float ConversorPesosArgentinaAbitcoin(float pesos);


/// @brief Esta funcion nos permite sacar el precio unitario,
///
/// @param UnNumero pondremos el precio total
/// @param OtroNumero pondremos  las unidades
/// @return devuelve el resultado  del precio unitario
float PrecioUnitario(float UnNumero, float OtroNumero);


/// @brief Esta funcion nos permite saber cual es su diferencia  entre dos valores
///
/// @param UnNumero pondremos el primer valor
/// @param OtroNumero pondremos el segundo valor
/// @return devuelve la diferencia entre los dos valores
float diferenciasDeValores(float UnNumero, float OtroNumero);
#endif /* FUNCIONES_H_ */
