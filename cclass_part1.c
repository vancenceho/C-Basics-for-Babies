// Introduction to C Programming
// Learning Objectives: 
// 1. Create .c and header files
// 2. Create, manipulate, print different primary data types
// 3. Create, manipulate, print different derived data types
// 4. Loops & Iterations
// 5. Allocate and manage memory dynamically

// Part 1: .c and .h file extensions
// ----------------------------------------------------------------
// .h extension is called heafder files and typically contain: 
// 1. Functions declarations
// 2. Constants declarations
// 3. Global variables
// 4. Struct declaration
// 5. Library imports

// .c extension is called source files
# include "cclass.h"
# include <stdio.h>
int main(int argc, char** argv){
    printf("Hello World!\n");
    printf("Constant BUFFERSIZE has a value of %d \n", BUFFERSIZE);

    // Part 2: Primary Data Types
    // ----------------------------------------------------------------
    // 1. int --> 32 bits (4 bytes)
    // 2. char --> 8 bits (1 byte)
    // 3. float --> 32 bits (4 bytes) => able to increase precision to 8 bytes using double (float with double precision)
    // 4. void --> 0 bits (0 bytes)
    int x = 5;
    float y = 3.0;
    char a = 'a';
    char b = 'b';
    char c = 'c';

    printf("Printing integer x: %d \n", x);
    printf("Printing float y: %f \n", y);
    printf("Printing characters abc: %c %c %c \n", a,b,c);
    printf("Printing characters as ASCII: %d %d %d \n", a,b,c);

    printf("Size of int is %d bytes, size of float is %d bytes, size of char is %d bytes\n", sizeof(int), sizeof(float), 
    sizeof(char));

    // Part 3: Derived Data Types
    // array (of int, chars - strings, etc), pointer, and structure
    // ----------------------------------------------------------------
    // 1. Arrays
    int vector_int[3] = {1, 2, 3};
    float vector_float[3] = {0.3, 0.4, 0.5};
    char characters[5] = {'a', 'i', 'u', 'e', 'o'};

    printf("Contents of vector_int %d %d %d \n", vector_int[0], vector_int[1], vector_int[2]);
    printf("Contents of vector_float %f %f %f \n", vector_float[0], vector_float[1], vector_float[2]);
    printf("Contents of the second char:  %c\n", characters[1]);


    return 0;
}