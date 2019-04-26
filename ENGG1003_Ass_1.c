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
switch (x){                                                //Start of "switch", "x" is used to determine which case (corresponding to equivalent
    case 1:                                                //user inputed value) e.g. 1 ==> case 1:
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
            printf("Key error\n");                                  //"if" k is equal to 0, print error
        }
        else if (k < -25)
        {
            printf("Key error\n");                                  //"if" k is less than -25, print error, stop
        }
        else if (k > 25)
        {
            printf("Key error\n");                                  //"if" k is greater than 25, print error, stop
        }
        else if (-25 <= k <= 25)
        {
            printf("You've selected %d as your key\n", k);          //"if" k is lies between -25 and 25, print selected key and continue
   
   input = fopen("input.txt", "r");                                 //Opening and reading input
   n = 0;
        for(feof(input)==0; n <= 15; n++)       //"for" loop to run iterations of the input, carrying out encrption per interation (int n) 
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
         printf("\n");  // \n                   //"if" statement to account for spaces created when int v is 32 (space), this also
     }                                          //causes the program to drop to a new line per space in the message
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
         //printf("%c = %d ", c, e);            //Other print to allow user to see what each char "c"'s new equivalent integer (e) is
         //printf("%d ", e);                    //Other print to allow user to see integer (e)
         e = e + 65;
         printf("%c", e);                              
        }
    }
    
            }
        }
break;                                          //END OF CASE 1//
    case 2:                                                         //User input option 2 (int x)
        
        input = fopen("input2.txt", "r");                           //Opening and reading input2 file and printing a blank space (f == 32)
        printf("The following numbers will be decrypted:\n");       //Dsiplaying to the user that the folloing printed text will be decrypted
        while(feof(input) == 0){
            fscanf(input, "%d", &f);                                //Reading "f" from input2
            if (h == f ){                                           //"if/else if" statement, "h" is in stop the program from printing an extra 
                printf(" ");                                        //value (int f). This does prevent double lettered words from working correctly! 
            }                                                     
            else if (f == 32){
                printf(" ");
            }
            else {
                printf("%d ", f);                                   //Printing resulting value (int f) from input
            h = f;
            }
        }
        printf("\nThe solution to the input is 25, otherwise\nPlease input a key\n");
        scanf("%d", &d);                                   //Explaining 25 is the solution to input2 values (f), most other keys will work
                                                           //cause a rotation- however will not produce the correct message from input
        if (d < -25){                                      //Following "if/else if" statements to ensure key is within boundaries, if so
            printf("Key error\n");                         //the program displays the error and stops
        }
        else if (d == 0){
            printf("Key error\n");
        }
        else if (d > 25){
            printf("Key error\n");
        }
        else{                                              //Once "d" is adequate, input2 is opened then read over iterations
        input = fopen("input2.txt", "r");                  //"if/else if" statements set to pick up spaces (32) in "f" and to 
        z = 0;                                             //prevent the last "f" from being used and displayed as result (y)
            for(feof(input)==0;  z <= 20; z++)             //"for" loop use to perform iterations of input2 
            {
             fscanf(input,"%d", &f);                       //Reading individual values for "f" from input2 per iteration

             if (f == 32){
                 printf(" ");                              //Recognised spaces (32) result in a blank space
             }
             else if (w == f){                             //Recognise end of input2 
                 printf(" ");
             }
             else{                                         //Coincide when "f" meets requirements
                if (d > 0){                                //Following "if" statements to recognise "d" as positive 
                 y = f - d;                                //and to also take action when the results (y) boundaries are exceeded (0 to 25)
                    if (y < 0){
                      y = 0 - (y);
                        //printf("%d ", y);                //Other print to display "y", "f"'s new value
                        //y = y + 65;                      //Equation to allow "y" to align with appropriate character (ascii code)
                        //printf("%c = %d ", y, y)         //Other print to display both "y"'s character and integer value
                    }
                }
                else if (d < 0){                           //Following "else if/if" statements to recognise "d" as negative
                    y = f - d;
                    if (y >= 25){
                        y = 0 + (y - 25);
                    }
                }
                w = f;
                y = y + 65;                                //Equation to allow "y" to align with appropriate character (ascii code)
                //printf("%c = %d ", y, y);                //Other print to display both "y"'s character and integer value
                printf("%c", y);                           //Printing character (y) i.e. decrypted message
                }
            }
            printf("\n");                                  //Tidy finish, taking new line after message (y) is displayed 
        }

 break;                                         //END OF CASE 2//
    case 3:
    printf("Okay welcome to the twilight zone\n");
    //Get the 65 to 90, then minus 65 to 0-25
    //Set up a "random" to generate/mix these 0 to 25, with each number only possible to occur once
    //see if these randomly generated numbers change each time...
    //hopefully if they do get it to occur each time then at 65 to them to print random
        }
        return(0);
    }


        

