#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// function to print a matrix
void printMatrix(int matrix[100][100], int dim){
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main_(){
// reaad matrix dimentions from keyboard 
    int dim;
    printf("Enter matrix dimentions: ");
    scanf("%d", &dim);
// read matrix from keyboard
    int matrix[100][100];
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
// print matrix
    printf("Matrix:\n");
    printMatrix(matrix, dim);

}

struct LL{
    int a;
    struct LL * next;
};

int main(){
    int sz = 3;
    int *arr = (int *)malloc(sz*sizeof(int));
    
    arr[0] = 4;
    arr[1] = 5;
    arr[2] = 7;

    arr[1] = arr[2];
    realloc(arr, (sz-1)*4);

    free(arr);
    arr = nullptr;
    
    struct LL * node0 = nullptr;
    struct LL * node1 = nullptr;
    struct LL * node2 = nullptr;

    node0 = (struct LL*)malloc(sizeof(struct LL));
    node1 = (struct LL*)malloc(sizeof(struct LL));
    node2 = (struct LL*)malloc(sizeof(struct LL));
    
    node0->a = 2;
    node0->next = node1;

    node1->a = 2;
    node1->next = node2;

    node2->a = 2;
    node2->next = NULL;

    node0->next = node2;
    free(node1);
}