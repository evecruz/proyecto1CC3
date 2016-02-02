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

void calc_depth(unsigned char *depth_map, unsigned char *left,
                unsigned char *right, int image_width, int image_height,
                int feature_width, int feature_height, int maximum_displacement) {

	/* YOU CODE HERE*/
}
