#include <stdio.h>
#include <malloc.h>
int main(int argc, char const *argv[])
{
    int *ptr, i,n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    ptr = (int*)malloc(sizeof(int)*n);
    if(ptr == NULL){
        printf("Allocation of memory failed\n");
        exit(0);
    }
    for(i=0; i<n; i++){
        *(ptr + i) = i + 1;
    }
    printf("Original array is \n\n");
    for(i=0; i<n; i++){
        printf("Address: %u\t element:%d\n",ptr+i,*(ptr+i));
    }
    printf("\nReallocating memory for %d+4 elements \n",n);
    ptr = (int*)realloc(ptr,n+4);
    if (ptr==NULL)
    {
        printf("\nReallocation fo memory failed\n");
        exit(0);
    }
    for(i=n; i<n+4; i++){
        *(ptr+i) = i+1;
    }
    printf("\nAfter Reallcation New array is \n\n");
    for ( i = 0; i < n+4; i++)
    {
        printf("Address:%u\t element:%d\n",ptr+i,*(ptr+i));
    }
    free(ptr);
    return 0;
}