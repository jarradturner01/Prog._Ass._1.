#include <stdio.h>

int main(){
int f;
int e;
int k, d;
int i;
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
        }
        
        for(i = 65; i <= 90; i++)
        {
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
     case 2:
        printf("Please enter the rotation's key\n");
        scanf("%d", &d);
        printf("you've selected %d\n", d);
     }
    
    

return(0);
}