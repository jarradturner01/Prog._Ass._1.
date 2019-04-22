#include <stdio.h>

int main(){
//variables in switch
int f, e;
int k, d;
//array
int i[26];
char a;
int b, g;
int n;
//switch
int x; 

FILE *input;
char c;
int v;

printf("Please select one of the following:\n1) encrytion with rotation cipher\n2) decrytion with rotation cipher\n");

scanf("%d", &x);

switch (x){
    case 1:  
    
        input = fopen("input.txt", "r");
        printf("The following text will be encryted:\n");
        while(feof(input) == 0) {
            fscanf(input, "%c", &c);
            printf("%c", c);
        }
        printf("\nPlease input key to perform encrytion\n");
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
        else if (-25 <= k <= 25)
        {
            printf("You've selected %d as your key\n", k);
        
    
    input = fopen("input.txt", "r");
        for(feof(input)==0; n <= 25; n++)    
            {                                //ENSURE THAT THE INPUT FILE ENDS WITH A SPACE!                          
             fscanf(input, "%c", &c);
              if (n == 32){
                printf(" ");
                }
              else if (v != c){
                v = c;
                 if (v == 32)
                  {
                   printf(" ");
                  }
                 else{
                   g = c;   
                   v = c - 65;
                   //printf("%c = %d\n", c, v);
                   }
                }
    
     if (v == 32){
         //v = 0;
         //e = 0;
         printf("\n");
 }
 else{
        if (k > 0)
        {
          if ( 0 <= (v + k) <= 25 )
            {
             e = k - v;
               if ( e < 0)
               {
                e = 26 + e;
               }
             printf("%c = %d\n", c, e);
            }
        }
        else if (k < 0)
        {
            if ( (v + k) <= 0)
            {
             e = 25 + (v + k);
            }
            
            else if ( (v + k) > 0)
            {
             e = 0 + (v + k) ;   
            }
         printf("%c = %d\n", c, e);
        }
    }

    }

     
    break;   
     case 2:
        printf("Please enter the rotation's key\n");
        scanf("%d", &d);
        printf("you've selected %d\n", d);
}

}
    
    
    

return(0);
}