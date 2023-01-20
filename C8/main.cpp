#include <stdio.h>
#include <string.h>
bool strcmp_loc(char s0[100],char s2[100] ){
    if (strlen(s0) != strlen(s2)){
        return false;
    };
    for (int i = 0; i < strlen(s0); i++){
        if(s0[i]!=s2[i]){
            return false;
        }
    }
    return true;
}

int main__(){

    char s0[100], s2[100];
    scanf("%s", s0);
    scanf("%s", s2);
    if (strcmp_loc(s0, s2)){

        printf("same");
    }else{
        printf("not same");
    }
    return 0;

}

int main(){
    union dt{
        int a, b;
        float c;

    } demo;
    demo.b = 20;
    demo.c = 3.3;
    
    printf("%d %f %d \n", demo.a, demo.c, demo.b);

}

void ex(){
    char * a;
    a = new char[10];

};