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
        if (k == 0)
        {
            printf("Oh, so you're trying to trick me are you?\n");
        }
        else if (k < -25)
        {
            printf("Oh, so you think boundaries don't matter?\n");
        }
        else if (k > 25)
        {
            printf("Oh, so you think boundaries don't matter?\n");
        }
        else 
        {
            printf("You've sleceted %d as your key\n", k);
        }
        
        switch (k)
        {
          case (-25 <= k <= 25):          
        
        for(i = 65; i <= 90; i++){
        f = i - 65;        
        //printf("%c = %d\n", i, f);
        
        if (k > 0)
        {
         if ( 0 <= (f + k) <= 25 )
           {
            e = k - f;
            if ( e < 0)
            {
             e = 26 + e;
            }
            
            printf("%c = %d\n", i, e);
           }
        }
        else if (k < 0)
        {
            if ( (f + k) <= 0)
            {
             e = 25 + (f + k);
            }
            else if ( (f + k) > 0)
            {
             e = 0 + (f + k) ;   
            }
            printf("%c = %d\n", i, e);
        }
      }
        break;
     }
    
    break;
}


  



return(0);
}