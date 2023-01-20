/*
numarul de matrici
dimensiunea matricilor
indicii

citim marime matrici
alocam matricile
citim matricile
alocam noua matrice
inmultim
*/


#include <stdio.h>
#include <stdlib.h>

void citire_matrice(int w, int* m1){
   for(int i = 0; i < w; i++){
      for(int j = 0; j < w; j++){
         // v1
         int val = 0;
         scanf("%d", &val);
         *(m1 + i*w+j) = val; 

         // v2
         // scanf("%d", m1+i*w+j);
      }
   }
}

void print_matrix(int w, int* m){
   for (int i=0; i<w; i++){
      for (int j=0; j<w; j++){
         printf("%d ",*(m+i*w+j) );
      }
      printf("\n");
   };

}

void inmultim_matrici(int w, int* m1, int*m2, int *rez){
   for (int i=0; i<w; i++){
      for (int j=0; j<w; j++){
         *(rez+i*w+j) = 0;
         for (int k=0; k<w; k++){
            *(rez+i*w+j)+= *(m1+i*w+k) * (*(m2+k*w+j));
         }
      }
   }
}

struct mat{

   int w;
   int h;
   int * data;
   int c;
   int sz;
};

int main(){
// citim marime matrici
   int w = 0;
   printf("matrix size \n");
   scanf( "%d", &w );
// alocam matricile
   int * m1 = (int*)malloc( w * w * sizeof(int));
   int * m2 = (int*)malloc( w * w * sizeof(int));
// citim matricile
   printf("citim matricea 1 care are %d elemente: \n", w*w);
   citire_matrice(w, m1);
   printf("citim matricea 2 care are %d elemente: \n", w*w);
   citire_matrice(w, m2);
   printf("citim matricea 1 realocata: \n");

   realloc(m1, (w+1) * (w +1)* sizeof(int) );
   print_matrix(w+1, m1);
   realloc(m1, (w) * (w)* sizeof(int) );
   print_matrix(w, m1);
// print matrici intrare
   printf("m1: \n");
   print_matrix(w, m1);
   printf("m2: \n");
   print_matrix(w, m2);
// alocam noua matrice
   int * rez = (int*)malloc( w * w * sizeof(int));
// inmultim matricile
   inmultim_matrici(w, m1, m2, rez);
   printf("rezultatul = \n");
   print_matrix(w, rez);

   return 0;
}
