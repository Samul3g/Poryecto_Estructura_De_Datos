#ifndef MANEJO_RECURSOS_H
#define MANEJO_RECURSOS_H


int reduccion_servicio(char* servicio, int cantidad, char* nombre_comuna);
	/*Funcion que reduce los servicios que posee una comuna
		* Entradas: servicio, cantidad, comuna
		* salidas: 0 (false/error), 1 (true/exito) 
	*/

int reduccion_bien(char* bien, int cantidad, char* nombre_comuna);
	/*Funcion que reduce los bienes que posee una comuna
		* Entradas: bien, cantidad, comuna
		* salidas: 0 (false/error), 1 (true/exito) 
	*/

int aumento_servicio(char* servicio, int cantidad, char* nombre_comuna);
	/*Funcion que aumenta los servicios que posee una comuna
		* Entradas: servicio, cantidad, comuna
		* salidas: 0 (false/error), 1 (true/exito) 
	*/

int aumento_bien(char* bien, int cantidad, char* nombre_comuna);
	/*Funcion que aumenta los bienes que posee una comuna
		* Entradas: bien, cantidad, comuna
		* salidas: 0 (false/error), 1 (true/exito) 
	*/

#endif
