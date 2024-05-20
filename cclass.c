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
    printf("----------------------------------------------------------------\n");

    // Part 3: Derived Data Types
    // array (of int, chars - strings, etc), pointer, and structure
    // ----------------------------------------------------------------
    // 1. Arrays
    int vector_int[3] = {1, 2, 3};
    float vector_float[3] = {0.3, 0.4, 0.5};
    char characters[5] = {'a', 'i', 'u', 'e', 'o'};
    static int static_vector_int[3] = {1, 2, 3}; // static memory allocation: the array exists as long as the program lives

    printf("Contents of vector_int %d %d %d \n", vector_int[0], vector_int[1], vector_int[2]);
    printf("Contents of vector_float %f %f %f \n", vector_float[0], vector_float[1], vector_float[2]);
    printf("Contents of the second char:  %c\n", characters[1]);
    printf("Contents of static_vector_int %d %d %d \n", static_vector_int[0], static_vector_int[1], static_vector_int[2]);
    printf("----------------------------------------------------------------\n");

    // 2. Pointers
    // int *vector_int_pointer = vector_int;
    // printf("Address of vector_int array is 0x%11x\n", vector_int_pointer);
    // printf("Address of the first element in vector)int array is 0x%llx\n", &vector_int[0]);
    // printf("Address of the second element in vector)int array is 0x%llx\n", &vector_int[1]);
    // printf("Address of the third element in vector)int array is 0x%llx\n", &vector_int[2]);

    // printf("Printing address using pointer : \n");

    // printf("Address of the first element in vector_int array is 0x%llx\n", vector_int_pointer);
    // printf("Address of the second element in vector_int array is 0x%llx\n", vector_int_pointer + 1);
    // printf("Address of the third element in vector_int array is 0x%llx\n", vector_int_pointer + 2);
    
    int *vector_int_pointer = vector_int;
    printf("Address of vector_int array is %p\n", vector_int_pointer);
    printf("Address of the first element in vector_int array is %p\n", &vector_int[0]);
    printf("Address of the second element in vector_int array is %p\n", &vector_int[1]);
    printf("Address of the third element in vector_int array is %p\n", &vector_int[2]);

    printf("Printing address using pointer : \n");
    printf("Address of the first element in vector_int array is %p\n", vector_int_pointer);
    printf("Address of the second element in vector_int array is %p\n", vector_int_pointer+1);
    printf("Address of the third element in vector_int array is %p\n", vector_int_pointer+2);

    // changing content of integer array using pointer
    // change the second element of vector_int
    printf("The original second element of of vector_int is %d\n", vector_int_pointer[1]);
    vector_int_pointer[1] = 5;
    printf("The new second element of vector_int is %d\n", vector_int_pointer[1]);
    printf("The new second element of vector_int is %d\n", *(vector_int_pointer+1));
    printf("----------------------------------------------------------------\n");

    // creating pointers for other primary data types
    // e.g. int
    int z = 5;
    int *z_pointer = &z;

    printf("The value of z is %d\n", z);
    printf("Z is stored in address %p\n", z_pointer);
    printf("The pointer to Z is stored in address %p\n", &z_pointer);
    printf("Size of Z pointer is: %d \n", sizeof(z_pointer));

    // change value of z through pointer
    *z_pointer = 6;
    printf("The new value of z is %d\n", *z_pointer);
    printf("----------------------------------------------------------------\n");

    // e.g. strings
    char hello_world[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
    printf("%s\n", hello_world);

    // allocates in a read-only portion of static memory, NOT modifiable, READ only
    char *hello_world_readonly = "hello world";
    printf("%s\n", hello_world_readonly);
    printf("Size of hello_world_better pointer %d\n", sizeof(hello_world_readonly));

    // another way to initialize strings
    char hello_world_init[] = "hello world";
    // change the letter in the string
    hello_world_init[4] = 'u';
    printf("The new string is %s\n", hello_world_init);

    // common way to initialize strings 
    char sentence[BUFFERSIZE] = "";
    sprintf(sentence, "Hello World");
    printf("The sentence is: %s\n", sentence);
    sprintf(sentence, "This is another sentence overwriting the previous one. Lets write a number %d.", 5);
    printf("The sentence now is modified to: %s\n", sentence);

    // contatenate strings
    char sentence_append[64] = "The quick brown fox jumps over a lazy dog";
    strcat(sentence, sentence_append);
    printf("%s \n", sentence);
    printf("----------------------------------------------------------------\n");

    // 3. Structures
    // These are data structures that contain a collection of primary and derived data types
    // defining struct
    struct Vector_Int{
        int x;
        int y;
        int z;
        char name[64];
    };
    // structure variable declaration, empty member values
    struct Vector_Int v1;
    // manual member initialization
    v1.x = 2;
    v1.y = 3;
    v1.z = 10;
    sprintf(v1.name, "Vector 1");
    // structure variable auto member initialization
    struct Vector_Int v2 = {3, 5, 11, "Vector 2"};

    printf("Values of v1 is x:%d, y:%d, z:%d, name: %s\n", v1.x, v1.y, v1.z, v1.name);
    printf("Values of v2 is x:%d, y:%d, z:%d, name: %s\n", v2.x, v2.y, v2.z, v2.name);
    
    // declare struct within struct
    struct Info{
        char name[32];
        int age;
        struct address{
            char area_name[32];
            int house_no;
            char district[32];
        }
        address;
    };
    
    struct Info my_Info = {"Alice", 25, "Sompah Road", 8, "Upper Changi"};
    printf("Name: %s, age %d, area name %s, house number %d, district %s\n", my_Info.name, my_Info.age, my_Info.address.area_name, 
    my_Info.address.house_no, my_Info.address.district);

    struct address my_Address = {"Another Road", 15, "Lower Changi"};
    printf("Another address %s %d %s \n", my_Address.area_name, my_Address.house_no, my_Address.district);

    // defining 2 struct and declare it as a member
    struct address_member
   {
    char area_name[32];
    int house_no;
    char district[32];
   };

   struct Info_member
   {
    char name[32];
    int age;
    struct address_member address; //now this is a member
   };

   struct Info_member my_Info2 = {"Alice", 25, "Somapah Road", 8, "Upper Changi"};

   printf("Name: %s, age %d, area name %s, house number %d, district %s\n", my_Info2.name, my_Info2.age, my_Info2.address.area_name,
    my_Info2.address.house_no, my_Info2.address.district);

   struct address_member my_Addrs = {"Another Road", 15, "Lower Changi"};
   printf("Another address %s %d %s \n", my_Addrs.area_name, my_Addrs.house_no, my_Addrs.district);
   printf("----------------------------------------------------------------\n");

   // Part 4: Loops & Iterations
   // Using for-loop and while-loop
   // ----------------------------------------------------------------
    // for-loop
    float array_floats[8];
    for (int i = 0; i < 8; i++){
        array_floats[i] = (float) i / 8;
        printf("%f, ", array_floats[i]);
    }
    printf("\n");
    printf("----------------------------------------------------------------\n");

    // while-loop
    int i = 0;
    while (i < 8){
        array_floats[i] += 0.5f;
        printf("%f, ", array_floats[i]);
        i++;
    }
    printf("\n");

    // do-while loop
    i = 0;
    do
    {
        array_floats[i] -= 0.5f;
        printf("%f, ", array_floats[i]);
        i++;
    } while (i < 8);
    printf("\n");
    printf("----------------------------------------------------------------\n");

    // Part 5: Functions
    // ----------------------------------------------------------------
    Vector v3 = {3, 7, 10};
    printf("Address of v3 members: %p, %p, %p\n", &v3.x, &v3.y, &v3.z);
    print_vector(v3);
    v3 = clear_vector(v3);
    print_vector(v3);

    Vector v4 = {31, 99, 21};
    printf("Address of v4 members: %p, %p, %p\n", &v4.x, &v4.y, &v4.z);
    print_vector(v4);
    clear_vector_byreference(&v4);
    print_vector(v4);
   
   return 0;
}

// Part 5: Functions
// ----------------------------------------------------------------
void print_vector(Vector input)
{
    printf("{x:%d, y:%d, z:%d}\n", input.x, input.y, input.z);
}

Vector clear_vector(Vector input)
{
    printf("Address of clear_vector input members: %p, %p, %p\n", &input.x, &input.y, &input.z);
    input.x = 0;
    input.y = 0;
    input.z = 0;
    return input;
}

void clear_vector_byreference(Vector *input)
{
    printf("Address of clear_vector_byreference input members: %p, %p, %p\n", &input->x, &input->y, &input->z);
    input->x = 0;
    input->y = 0;
    input->z = 0;
}