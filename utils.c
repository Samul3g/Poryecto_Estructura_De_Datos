#include <stdio.g>
#include <stdlib.h>
#include <time.h>
#include "utils.h"

srand(time(NULL)); // inicializa la semilla para usar el random

int random(int minimo, int maximo) {
	// Funcion que retorna un numero pseudo aleatorio entre el minimo y el maximo dados.
	
	int numero_random = minimo + rand() % (maximo - minimo +1);
	return numero_random;
	
	}




