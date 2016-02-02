/* CC3 2015 Proyecto 1
 *
 * Define estructuras y funciones utilizadas para ambas partes del proyecto
 *
 * CUALQUIER MODIFICACIÓN DE ESTE ARCHIVO SE SOBREESCRIBRÁ DURANTE LA CALIFICACIÓN
 */

#ifndef UTILS_H
#define UTILS_H

typedef struct {
    unsigned char *data;
    int width;
    int height;
} Image;

/* Carga un archivo BMP */
Image load_image(char *filename);

/* Imprime la imagen (pasada en data). Puede ser útil en la depuración */
void print_image(const unsigned char *data, int width, int height);

/* Escribe una imagen en un archivo BMP grayscale (BMP de 8 bits) */
void save_image(char *filename, const unsigned char *data, int width,
        int height);

/* Escribe una imagen en un archivo BMP color (BMP 24 bits), highlighting boxes */
void save_image_with_depth(char *filename, const unsigned char *data,
        const unsigned char *depth, int width, int height, int feature_width,
        int feature_height);

/* Debería ser llamada si la asignación de memoria falla. */
void allocation_failed();

#endif
