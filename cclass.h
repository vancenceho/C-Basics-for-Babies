#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BUFFERSIZE 1024

// defining struct
typedef struct Vector_Int
{
    int x;
    int y;
    int z;
    char name[64];
} Vector;

void print_vector(Vector input);
Vector clear_vector(Vector input);
void clear_vector_byreference(Vector *input);