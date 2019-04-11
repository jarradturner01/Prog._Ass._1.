#include <stdio.h>

int main(){
int f;
int e;
int k;
int i;
int x;
//printf("Hello world\n");

printf("Please select one of the following:\n1) encrytion with rotation cipher (given text + key)\n");

scanf("%d", &x);

//k = x + 4;

//printf("%d\n", k);

switch (x){
    case 1: 
        printf("Please input key to perform encrytion\n");
        scanf("%d", &k);
        printf("You've selected %d as your key\n", k);
        for(i = 65; i <= 90; i++){
        f = i - 65;        
        //printf("%c = %d\n", i, f);
        
        e = f + k;
        if ( e >= 25 ){
            e = k - f;
            printf("%c = %d\n", i, e);
        }
        else if (e <= 0){
            
            
        
            printf("%d\n", e);
        }

        
        
        
    }
    
    break;
}


  



return(0);
}