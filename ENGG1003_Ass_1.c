#include <stdio.h>

int main(){
int f;
int e;
int k;
int i;
int x;
//printf("Hello world\n");

printf("Please select one of the following:\n1- encrytion with rotation cipher (given text + key)\n");

scanf("%d", &x);

//k = x + 4;

//printf("%d\n", k);

switch (x){
    case 1: for(i = 65; i < 95; i++){
        
        f = i - 65;
        
        printf("%c = %d\n", i, f);
        
    }
    
    break;
}


  



return(0);
}