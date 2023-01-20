#include <stdio.h>

int min(int a, int b, int c) { 
    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c); 
};

bool is_prime(int x){
    if (x==2){
        return true;
    }else{
        for (int i = 2; i < x/2 -1; i++){
            if (x%i == 0){
                return false;
            };
        };
    }
    return true;
}

int build_nr(int x){
    double a;
    for(int i =1; 2*i*i < x; i++ ){
        a = 2 * i * i;
        for ( int j = 2; j < x; j++){
            if (is_prime(j)){
                if(a+j == x){
                    return 0;
                }
            }
        }
    }
    return x;

}

int main()
{

    // int a, b, c;
    // scanf("%d %d %d", &a, &b, &c);
    // printf("%d \n", min(a, b, c));
    
    // char litera;
    // scanf("%c", &litera);
    // switch(litera){
    //     case 'A':
    //         printf("case A\n");
    //         break;
    //     case 'a':
    //         printf("case a\n");
        
    //     case ' ':
    //         printf("case nada \n");
    //         break;
        
    // }

    // for (int i = 1; i < 100000; i = i + 2){
    //     if(!is_prime(i)){
    //         if (build_nr(i) != 0){
    //             printf("numarul cautat %d \n", i);
    //             break;
    //         }
    //     }
    // }

    return 0;
}