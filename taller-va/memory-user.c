#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int tiempo;
	long cantidadMem;

	
	if(argc < 4 && argc > 1){

		cantidadMem = (atol(argv[1]))*1000000;
		char *vector = malloc(cantidadMem);
		if(vector == NULL){
			printf("No se puede reservar esa cantidad de memoria\n");
		}else{
			if(argc == 2){
				while(1==1){
					for(long i = 0; i<cantidadMem; i++){
						*(vector + i) ='a';
					}
				}
			}else if(argc == 3){
				time_t inicio = time(0);
				tiempo = (atoi(argv[2]));
				while(time(0)-inicio < tiempo){
					for(long i = 0; i<cantidadMem; i++){
						*(vector + i) ='a';
					}
				}
			}
		}
	}else{
		printf("No se ejecutar el archivo con esa cantidad de parametros\n");
	}

	return 0;
}
