/*
 * PROY1-1: PARTE A
 *
 * Siéntase libre de definir funciones auxiliares
 */

#include "calc_depth.h"
#include "utils.h"
#include <math.h>
#include <stdio.h>

unsigned char normalized_displacement(int, int, int);

/* Implementación de la función de desplazamiento normalizado*/
unsigned char normalized_displacement(int dx, int dy,
        int maximum_displacement) {

    double squared_displacement = dx * dx + dy * dy;
    double normalized_displacement = round(255 * sqrt(squared_displacement) / sqrt(2 * maximum_displacement * maximum_displacement));
    return (unsigned char) normalized_displacement;

}

int pixVal(int x, int y, int feature_width, int feature_height, int image_width, int image_height){
	if [((x-feature_width)<0)|| ((y-feature_height<0))]{ //revisa que el feature no se salga del lado izquierdo
		return 0;
	}else{
		return 1;
	}

	if [((x+feature_width)< image_width) && ((y+feature_height)< image_height)]{ // revisa que el feature no se salga del lado derecho
		return 0;
	}else{
		return 1;
	}
	
}

int cantFeatures(int maximum_displacement){
	return ((2*maximum_displacement +1)*(2*maximum_displacement +1));
}


int distance(int feature_height, int feature_width){

}


void calc_depth(unsigned char *depth_map, unsigned char *left,
                unsigned char *right, int image_width, int image_height,
                int feature_width, int feature_height, int maximum_displacement) {
unsigned char cuadrito* = malloc((2 * feature_width + 1) * (2* feature_height + 1));// Creamos el cuadrito del lado izq
unsigned char desplazamiento;
int i,j;

   for(i =0;i<image_width,i++){                //recorremos la imagen izq derecha arriba abajo.
         for(j = 0;j<image_height;j++){
	 	for(x=0;x<feature_width;x++){
	 	   for(y=0;y<feature_height;y++){
	 	   	*cuadrito=(y*feature_width+x);//paso a vector el cuadrito
	 	   }
          	}
          	desplazamiento=normalized_displacement(x,y,maximum_displacement);
         }
         	
         }


}
