/*
 * PROY1-1: PARTE B
 *
 * Siéntase libre de definir funciones auxiliares
 */

#include <stdlib.h>
#include <stdio.h>
#include "quadtree.h"
#include "make_qtree.h"
#include "utils.h"

int homogenous(unsigned char *depth_map, int map_width, int x, int y, int section_width) {
    /* YOU CODE HERE */
	return 0;
}


qNode *depth_to_quad(unsigned char *depth_map, int map_width) {
    /*YOU CODE HERE */
	return NULL;
}

void free_qtree(qNode *qtree_node) {
    if(qtree_node) {
        if(!qtree_node->leaf){
            free_qtree(qtree_node->child_NW);
            free_qtree(qtree_node->child_NE);
            free_qtree(qtree_node->child_SE);
            free_qtree(qtree_node->child_SW);
        }
        free(qtree_node);
    }
}
