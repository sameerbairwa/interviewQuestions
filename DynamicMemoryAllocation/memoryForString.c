#include<stdio.h>
#include<malloc.h>

int main(int argc, char const *argv[])
{
    char* p;
    p = (char*)malloc(sizeof(char)*15); // when the expression executes 15 bytes of memory is allocated and p points to the first byte of allocated 15 byte block
    gets(p); // for string input
    printf("Hello %s\n"); 
    return 0;



