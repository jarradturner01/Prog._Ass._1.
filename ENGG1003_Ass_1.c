#include <stdio.h>

int main(){
                                //variable for switch
int x;                             
 
                                //variables for case 1
FILE *input;
char c;
int v, k;
int n; 
int e;
                                //variables for case 2
FILE *input2;
int f, h;
int d, z;
int y, w;

//case 3
int s;


printf("Please select one of the following:\n1) encrytion with rotation cipher\n2) decrytion with rotation cipher");
printf("\n3) encryption with substitution\n4) decryption with substitution\n");
                                                           //Printing the users options to screen, taking a new line per option.
scanf("%d", &x);
                                                           //Scanning users input (int x) 
switch (x){                                                //Start of "switch"
    case 1: 
        input = fopen("input.txt", "r");                   //Opening and reading input file and notifying the user what the message to be encrpted is
        printf("The following text will be encryted:\n");
        while(feof(input) == 0) {                          //Using a while loop to access the file until finished
            fscanf(input, "%c", &c);                       //The reading individual charcters of input (char c)
            printf("%c", c);                               //Printing the characters to reproduce the message in the terminal
        }
        printf("\nPlease input key to perform encrytion\n");
        scanf("%d", &k);
                                                                    //Print to ask for and read user's inputed key (k)
        if (k == 0)                                                 //Following "if/if else" statements determined by key (k)
        {                                                           //Whether "k" is 0 or exceeds the key limits determines outcome
            printf("Oh, so you're trying to trick me are you?\n");  //"if" k is equal to 0, print error
        }
        else if (k < -25)
        {
            printf("Oh, so you think boundaries don't matter?\n");  //"if" k is less than -25, print error, stop
        }
        else if (k > 25)
        {
            printf("Oh, so you think boundaries don't matter?\n");  //"if" k is greater than 25, print error, stop
        }
        else if (-25 <= k <= 25)
        {
            printf("You've selected %d as your key\n", k);          //"if" k is lies between -25 and 25, print selected key and continue
   
   input = fopen("input.txt", "r");                                 //Opening and reading input
   n = 0;
        for(feof(input)==0; n <= 15; n++)       //"for" loop to run iterations of the file, carrying out encrption per interation (int n) 
            {                                   //Ensure that the input file ends with a "space" and "n" is as however long as input, with +1 space
             fscanf(input,"%c", &c);            //Reading an individual input per iteration

              if (n == 32){                     //Following "if/else if" statements allow the program to detect spaces in the message (i.e. 32)               
                printf(" ");                    //Once a space is recognised, the program will print a blank space rather than an unwanted value 
                }                               //Spaces are recognised in both iterations (n) and printed results (c), leaving just a space 
              else if (v != c){                 
                v = c;
                 if (v == 32)
                  {
                   printf(" ");
                  }
                 else                           //Once the spaces have been filtered, the integer value (ascii code) are reduced to a 0 to 25 list
                  {                             //(As the initial ascii codes for inputed characrters lie on 65 to 90)
                   v = c - 65;
                   //printf("%c = %d\n", c, v); //Other print to display char "c"'s new integer value
                  }
             }
    
     if (v == 32)
     {
         //v = 0;
         //e = 0;
         printf("\n");  // \n                   //"if" statement to account for spaces created when int v is 32 (space)
     }
 else{
        if (k > 0)                              //Using a "v" and positive "k" to perform a rotation, with following "if" statements
        {                                       //to continue a "chain" like behaviour when "e" exceeds the limits of "c" (0 to 25)
          if ( 0 <= (v + k) <= 25 )              
            {                                   //int e is the resulting value of the rotation process
             e = k - v;
               if (e < 0)
               {
                e = 26 + e;
               }
             //printf("%c = %d ", c, e);        //Other print to allow user to see what each char "c"'s new equivalent integer (e) is
             //printf("%d ", e);                //Other print to allow user to see integer (e) 
            e = e + 65;
            printf("%c", e);                    //Printing "e"'s new single characters per iteration buy adding 65 back to the value (e)        //PRINT NEW CHARS
            }
        }
        else if (k < 0)                         //Using a "v" and negative "k" to perform a roation, with follwoing "if/else if" statements
        {                                       //to continue a "chain" like behaviour when "e" exceeds the limits of "c" (0 to 25)
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
            if (h == f ){
                printf(" ");
            }
            else if (f == 32){
                printf(" ");
            }
            else {
                printf("%d ", f);
            h = f;
            }
        }
        printf("\nThe solution to the input is 25, otherwise\nPlease input a key\n");
        scanf("%d", &d);
        input = fopen("input2.txt", "r");
        z = 0;
            for(feof(input)==0;  z <= 20; z++)
            {
             fscanf(input,"%d", &f);

             if (f == 32){
                 printf(" ");
             }
             else if (w == f){
                 printf(" ");
             }
             else{
                if (d > 0){
                 y = f - d;
                    if (y < 0){
                      y = 0 - (y);
                        //printf("%d ", y);
                        //w = f;
                        //y = y + 65;
                        //printf("%c = %d ", y, y);
                    }
                }
                else if (d < 0){
                    y = f - d;
                    if (y >= 25){
                        y = 0 + (y - 25);
                    }
                }
                w = f;
                y = y + 65;
                //printf("%c = %d ", y, y);
                printf("%c", y); 
                }
            }
            printf("\n");
break;
    case 3:
    printf("Okay welcome to the twilight zone\n");
        
        }
        return(0);
    }


        

