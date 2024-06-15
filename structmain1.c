#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    unsigned char id;
    unsigned int num;
}perso;


int main(void) {
    perso persona;

    persona.num = 2012;
    persona.id = 3;

    printf("persona.num: %d\n", persona.num);
    printf("persona.id: %d\n", persona.id);


    memset(&persona, 1, sizeof(persona));

    printf("persona.num: %d\n", persona.num);
    printf("persona.id: %d\n", persona.id);

    printf("tam da struct: %d bytes", sizeof(persona));

    return 0;
}
