#include <stdio.h>
#include <string.h>

int main_sum_2_vect(){
    float v0[100], v1[100], suma = 0;
    int dim, i;

    scanf("%d",&dim);
    for(i = 0; i < dim; i++){
        printf("elementul %d din v0 = ", i);
        scanf("%f", &v0[i]);

        printf("elementul %d din v1 = ", i);
        scanf("%f", &v1[i]);
    }
    for(i = 0; i < dim; i++){
        suma += (v0[i] + v1[i]);
    }
    printf("%f", suma);
};

int main_concat(){

    float v0[100], v1[100], concat[200];
    int i, M, N;
    scanf("%d %d", &M, &N);
    for(i = 0; i < M; i++){
        printf("elementul %d din v0 = ", i);
        scanf("%f", &v0[i]);
    };
    for(i = 0; i <N; i++){
        printf("elementul %d din v1 = ", i);
        scanf("%f", &v1[i]);
    };
    // for(i = 0; i < M; i ++){
    //     concat[i] = v0[i];
    // };
    // for(i = 0; i < N; i ++ ){
    //     concat[i+M] = v1[i];
    // };
    memcpy(concat, v0, sizeof(float)*M);
    memcpy(concat+ M, v1, sizeof(float)*N);
    for (i = 0; i < M+N; i++){
        printf("%f ", concat[i]);
    }
    return 0;
};

int main_sub_diag(){
    int N, i, j;
    float A[20][20];
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        for(j = 0 ; j < N; j++){
            scanf("%f", &A[i][j]);
        };
        
    };
    for(i = 0; i < N; i++){
        for(j =0; j <= i; j++){
            printf("%f ", A[i][j]);
        }
        printf("\n");
    }
};

int main(){
    int A[50][50], B[50][50], C[50][50], M, N, L, i, x, y;
    memset(C,0,sizeof(int)*50*50);
    printf("enter M, N, L: ");
    scanf("%d %d %d", &M, &N, &L);
    for (x = 0; x < M; x++){
        for(y = 0 ; y < N; y++){
            scanf("%d", &A[x][y]);
        };
    };
    for (x = 0; x < N; x++){
        for(y = 0 ; y < L; y++){
            scanf("%d", &B[x][y]);
        };
    };
    for(x=0; x < M; x++){
        for(y= 0; y < L; y++){
            for(i = 0 ; i < N; i++){
                C[x][y] += A[x][i]*B[i][y];
            }
        }
    }
    for(i = 0; i < M; i++){
        for(int j = 0; j < L; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}