#include<stdio.h>
#include <malloc.h>
int main(int argc, char const *argv[])
{
    int** ptr, row, col, i,j;
    printf("enter the number of rows\n");
    scanf("%d",&row);
    ptr  = (int**)malloc(sizeof(int)**row);
    printf("Enter number of colums\n");
    scanf("%d",&col);
    for(i=0; i<row; i++){
        ptr[i] = int(*)malloc(sizeof(int)*cal);
    }
    for(i=0; i<row; i++){
        for(j=0; i<col; j++){
            printf("\n Enter p[%d][%d] element: ",i,j);
            scanf("%d",(*ptr+i)+j);
        }
    }
    printf("The Matrix id \n");
    for(i=0; i<row; i++){
        for(j=0; i<col; j++){
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<row; i++){
        free(ptr[i]);
    }
    free(ptr);

    return 0;
}
