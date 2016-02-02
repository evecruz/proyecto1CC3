/* CC3 2015 Proyecto 1
 *
 * CUALQUIER MODIFICACIÓN DE ESTE ARCHIVO SE SOBREESCRIBRÁ DURANTE LA CALIFICACIÓN
 */

#ifndef QUADTREE_H
#define QUADTREE_H

#include "utils.h"

/*
 * Una estructura que representa un nodo quadtree.
 * LEAF es un valor booleano para indicar si este nodo es leaf (una hoja):
 * 0 = non-leaf, 1 = leaf. SIZE se refiere al número de pixeles en 
 * lo ancho de la imagen representado por este nodo. X e Y se refiere
 * a las coordenadas del pixel superior izquierdo de esta sección.
 * GRAY_VALUE es un valor entre 0-255 para leaves (hojas), pero puede ser
 * cualquier cosa para non-leaves (no hojas). Los cuatro punteros children
 * solo deben apuntar a los otros nodos si el nodo actual no es una hoja (leaf = 0).
 */
typedef struct quadtree qNode;
struct quadtree {
    int leaf;
    int size;
    int x;
    int y;
    int gray_value; // 0-255 para hojas
    qNode *child_NW, *child_NE, *child_SE, *child_SW; // punteros a los nodos hijo.
};

/* Usted puede encontrar estas funciones útiles para la depuración */
void print_qtree(qNode *qtree_root);

void print_compressed(qNode *qtree_root);

int test_qtree(char *filename, qNode *qtree_root);

#endif
