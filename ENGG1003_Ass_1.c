#include <stdio.h>

int main(){
//variables in switch
int f, e;
int k, d;
//array
int i[26];
char a;
int b;
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
        
     
        for(a = 65; a <= 90; a++){
            i[a] = 0;
            b = a - 65;
            //printf("%c = %d\n", a, b);
        
            //printf("%c = %d\n", i, f);
            input = fopen("input.txt", "r");
            while(feof(input)==0){
                fscanf(input, "%c", &c);
                //printf("%c", c);
            }
      
        if (k > 0)
        {
            if ( 0 <= (b + k) <= 25 )
            {
             e = k - b;
            if ( e < 0)
            {
             e = 26 + e;
            }
            //printf("%c = %d\n", a, e);
            }
        }
        else if (k < 0)
        {
            if ( (b + k) <= 0)
            {
             e = 25 + (b + k);
            }
            else if ( (b + k) > 0)
            {
             e = 0 + (b + k) ;   
            }
            //printf("%c = %d\n", a, e);
        }
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