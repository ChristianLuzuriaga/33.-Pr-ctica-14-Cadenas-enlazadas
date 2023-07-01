#include <stdio.h>
#include <stdlib.h>

int main() {
    char cadenal[50], cadena2[50], cadena3[50], cadena4[50];

    printf("Introduce la cadena 1: ");
    fgets(cadenal, sizeof(cadenal), stdin);

    printf("Introduce la cadena 2: ");
    fgets(cadena2, sizeof(cadena2), stdin);

    printf("Introduce la cadena 3: ");
    fgets(cadena3, sizeof(cadena3), stdin);

    printf("Introduce la cadena 4: ");
    fgets(cadena4, sizeof(cadena4), stdin);

    printf("%s-%s-%s-%s", cadenal, cadena2, cadena3, cadena4);

    
}
