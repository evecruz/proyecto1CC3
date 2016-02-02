/* CC3 2016 Proyecto 1
 *
 * CUALQUIER MODIFICACIÓN DE ESTE ARCHIVO SE SOBREESCRIBRÁ DURANTE LA CALIFICACIÓN
 */

#ifndef MAKE_QTREE_H
#define MAKE_QTREE_H

/* Implemente esta función en make_qtree.c */
int homogenous(unsigned char *depth_map, int map_width, int x, int y, int section_width);

/* Implemente esta función en make_qtree.c */
qNode *depth_to_quad(unsigned char *depth_map, int image_width);

/* Función que libera el espacio utilizado por el quadtree creado */
void free_qtree(qNode *qtree_root);

#endif
