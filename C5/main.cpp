 
#include <stdio.h>
#include <math.h>
#define uint unsigned int
#define true 1
#define false 0

int maximum(int a, int b, int c){

    // if (a>b){
    //     if (a>c){
    //         return a;
    //     } else{
    //         return c;
    //     }
    // }else{
    //     if (b>c){
    //         return b;
    //     } else{
    //         return c;
    //     }
    // }
    // int max = a;
    // if (b>max){
    //     max = b;
    // }
    // if (c>max){
    //     max = c;
    // }
    // return max;
    return ((c>a?c:a) < b) ? b : (c>a?c:a); 
}

int is_pp(float n){

    if( std::sqrt(n) == (int)std::sqrt(n)){
        return true;
    }
    return false;
}

int main(void)
{
    // int a= 0 ,c =-3;
    // uint b = 5;
    // a = b *c;

    // printf("%d \n", a);
    // if ((sizeof(char) == true) && 
    //     (sizeof(int)< sizeof(double))){
    //     printf("true \n");
    //     printf("%d",sizeof(long long int));
    //     printf("\n");
    //     printf("%d",sizeof(double));
    //     printf("\n");

    // }else{
    //     printf("false");
    // }
    // int a,b,c;
    // scanf("%d %d %d", &a, &b, &c);
    // printf("%d \n", maximum(a,b,c));
    printf("pm");
    printf("%d\n", is_pp(121));

    return 0;

}