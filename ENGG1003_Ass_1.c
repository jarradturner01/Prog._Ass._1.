#include <stdio.h>

int main(){
//variables in switch
int x; 

FILE *input;
char c;
int v, k;
int n; 
int e;

FILE *input2;
int f;
int d, z;
int y;


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
   n = 0;
        for(feof(input)==0; n <= 15; n++)    
            {                                //ENSURE THAT THE INPUT FILE ENDS WITH A SPACE!
                                             //"n" NEEDS TO BE MODIFIED TO HOWEVER LONG "INPUT" ITS WITH 1 SPACE
             fscanf(input,"%c", &c);
            
             
              if (n == 32){
                printf(" ");
                }                            //OKAY THESE PRINT VALUES DONT TAKE NEW LINES TO AVOID SPCAES IN RESULTS
              else if (v != c){              //EXCEPT FOR THE PRINT FOR "if" WHEREBY THEY WILL DROP DOWN THE NEXT RESULT
                v = c;
                 if (v == 32)
                  {
                   printf(" ");
                  }
                 else
                  {                      
                   v = c - 65;
                   //printf("%c = %d\n", c, v);
                  }
             }
    
     if (v == 32)
     {
         //v = 0;
         //e = 0;
         printf("\n");  // \n
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
             //printf("%c = %d ", c, e);
             //printf("%d ", e);                        //PRINT INVIVDUAL WORDS, TAKING NEW LINE PER WORD
            e = e + 65;
            printf("%c", e);                            //PRINT NEW CHARS
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
         //printf("%c = %d ", c, e);
         //printf("%d ", e);                            //PRINT INDIVIDUAL WORDS, TAKING NEW LINE PER WORD
         e = e + 65;
         printf("%c", e);                               //PRINT NEW CHARS
        }
    }
    }
}

    break;   
     case 2:
        
        input = fopen("input2.txt", "r");
        printf("The following numbers will be decrypted:\n");
        while(feof(input) == 0){
            fscanf(input, "%d", &f);
            printf("%d ", f);
     
       }
        printf("\nPlease input 25 as your key\n");
        scanf("%d", &d);
        input = fopen("input2.txt", "r");
        z = 0;
            for(feof(input)==0;  z <= 11; z++)
            {
               fscanf(input,"%d", &f);
               y = (f - d);
               if (y < 0){
                    y = 26 + (f - d);
                    printf("%d ", y);
                }
                
                
            }
       printf("\n");
        
        
        
       



}
return(0);
}