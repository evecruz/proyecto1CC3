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

	if [((x+feature_width)>image_width) && ((y+feature_height)> image_height)]{ // revisa que el feature no se salga del lado derecho
		return 0;
	}else{
		return 1;
	}
	
}

int cantFeatures(int maximum_displacement){
	return ((2*maximum_displacement +1)*(2*maximum_displacement +1));
}


int distEucle(unsigned char *Izquierdo, unsigned char *Derecho, int feature_width, int feature_height,){ //Funcion para obtener dx y dy
  int *distance;

  int xx, yy;
  for(xx=0; xx< feature_width; xx++){
    distance[0]= Izquierdo[xx]-Derecho[yy] + distance[0];
    for(yy=0; yy<feature_height; y++){
      distance[1]= Izquierdo[yy]-Derecho[yy] + distance [1];
    }
  }
  return *distance;
}




void calc_depth(unsigned char *depth_map, unsigned char *left,
                unsigned char *right, int image_width, int image_height,
                int feature_width, int feature_height, int maximum_displacement) {
unsigned char cuadritoIzq* = malloc((2 * feature_width + 1) * (2* feature_height + 1));// Creamos el cuadrito del lado izq
unsigned char cuadritoDer* = malloc((2 * feature_width + 1) * (2* feature_height + 1));
unsigned char desplazamiento;
int i,j;
int cont = 0;
int pos = 0;
int posD=0;
   for(i =0;i<image_width,i++){                //recorremos la imagen izq derecha arriba abajo.
      for(j = 0;j<image_height;j++){
       if (maximum_displacement == 0) {  //si el maximun_displacement es cero llenamos todo depth map con ceros
                depth_map[cont]=0;
                cont++
        }else{

          if (pixVal(x,y, image_width, image_height, feature_width, feature_height) == 1) {   
              for(x=0;x<feature_width;x++){
    	 	        for(y=0;y<feature_height;y++){
                    cuadritoIzq[pos]=left[x*feature_width+y];//paso a vector el cuadrito
                    pos++;
                  }
    	 	   	 
    	 	      }
            }

        }   



      for(x=0;x<feature_width;x++){ //Creo el cuadrito derecho
          for(y=0;y<feature_height;y++){
              cuadritoDer[posD]=right[x*feature_width+y];//paso a vector el cuadrito
              posD++;
          }
      }

        distEucle(*cuadritoIzq, *cuadritoDer, feature_width, feature_height);
        int despx = distance[0];
        int despy = distance[1];
          	desplazamiento=normalized_displacement(despx,despy,maximum_displacement);
          	//for(ii=0;ii<maximum_displacement;ii++){
          	//	for(jj=0;jj<maximum_displacement;jj++){
          			
          		}
          	}
         }
         	
         }


}
