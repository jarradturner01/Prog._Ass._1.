#include <stdio.h>

int main(){
int f;
int e;
int d;
int i;
int x;
//printf("Hello world\n");

printf("Please select one of the following:\n1- encrytion with rotation cipher (given text + key)\n");

scanf("%d", &x);

switch (x){
    case 1:
            printf("Please select a variable to use as a key- \n");\
            scanf("%d", &k);
            for(int i=65; i<91; i++){
                f = i - 65;
                printf("%c = %d", i, f)
            }
}
  



return(0);
}