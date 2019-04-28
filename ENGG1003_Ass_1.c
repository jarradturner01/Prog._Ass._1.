#include <stdio.h>
#include <stdlib.h>

void caseOne();                 //Function prototype   
void caseTwo();                 //Function prototype
void caseThree();               //Function prototype
void caseFour();                //Function prototype

int main(){
int x;                          //variable for switch                           
                                //variables for case 1
FILE *input;
char c;
int v, k;
int n; 
int e;
                                //variables for case 2
FILE *input2;
char f;
int h;
int d, z;
int y, w;
                                //variables for case 3
FILE *input3;
int i, a;
char s;
                                //variables for case 4
FILE *input4;
int j;
char r;



printf("Please select one of the following:\n1) Encrytion with rotation cipher\n2) Decrytion with rotation cipher");
printf("\n3) Encryption with substitution\n4) Decryption with substitution\n5) Task 5\n6) Task 6\n");
                                                           //Printing the users options to screen, taking a new line per option.
scanf("%d", &x);                                           //Scanning users input (int x) 
switch (x){                                                //Start of "switch", "x" corresponds to which option (case) will be accessed                                   //User inputed value) e.g. 1 ==> case 1:
    case 1:                                                //Option 1
        caseOne();                                         //Calling function (caseOne), opens and carries out caseOne
        break;
    case 2:                                                //Option 2
        caseTwo();                                         //Calling function (caseTwo), opens and carries out caseTwo
        break;
    case 3:                                                //Option 3
        caseThree();                                       //Calling fucntion (caseThree), opens and carries out caseThree
        break;
    case 4:                                                //Option 4
        caseFour();                                        //Calling fucntion (caseFour), opens and carries out caseFour
        break;
    case 5:                                                //Option 5 (incomplete)
        printf("To be installed\n");
        break;
    case 6:                                                //Option 6 (incomplete)
        printf("To be installed\n");
        break;
}
return 0;                                                 //  END OF MAIN  //  
}

void caseOne(){                                           //Function caseOne, 
    FILE *input;                                          //Declaring variables
    char c;
    int v, k;
    int n;
    int e;
    
        input = fopen("input.txt", "r");                   //Opening and reading input file message 
        printf("The following text will be encryted:\n");  //Telling the user that the following text will be encrypted
        while(feof(input) == 0) {                          //Using a while loop to access the file until finished
            fscanf(input, "%c", &c);                       //The reading individual charcters of input (char c)
            printf("%c", c);                               //Printing the characters to reproduce the message in the terminal
        }
        printf("\nPlease input key to perform encrytion\n");        //Printing to ask for and reading user's inputed key (k)
        scanf("%d", &k);
                                                         
        if (k == 0){                                                //Following "if/if else" statements determined by key (k)
                                                                    //Whether "k" is 0 or exceeds the key limits determines outcome
            printf("Key error\n");                                  //"if" k is equal to 0, print error
        }
        else if (k < -25){
        
            printf("Key error\n");                                  //"if" k is less than -25, print error, stop
        }
        else if (k > 25){
        
            printf("Key error\n");                                  //"if" k is greater than 25, print error, stop
        }
        else if (-25 <= k <= 25)
        {
            printf("You've selected %d as your key\n", k);          //"if" k is lies between -25 and 25, print selected key and continue
   
   input = fopen("input.txt", "r");             //Opening and reading input1.txt
   n = 0;                                       //Initializing "n" to equal zero before counting (iterations)
   for(feof(input)==0; n <= 15; n++){           //"for" loop to run iterations of the input, carrying out encrption per interation (int n) 
                                                //Ensure that the input file ends with a "space" and "n" is as however long as input, with +1 space
        fscanf(input,"%c", &c);                 //Reading an individual input per iteration
        if (n == 32){                           //Following "if/else if" statements allow the program to detect spaces in the message (i.e. 32)               
            printf(" ");                        //Once a space is recognised, the program will print a blank space rather than an unwanted value 
        }                                       //Spaces are recognised in both iterations (n) and printed results (c), leaving just a space 
        else if (v != c){                 
            v = c;
            if (v == 32){
                printf(" ");
            }
            else{                               //Once the spaces have been filtered, the integer value (ascii code) are reduced to a 0 to 25 list
                v = c -65;                      //(As the initial ascii codes for inputed characrters lie on 65 to 90)
                   //printf("%c = %d\n", c, v); //Other print to display char "c"'s new integer value
            }
        }
    
     if (v == 32){
         printf("\n");  // \n                   
     }                                          //"if" statement to account for spaces created when int v is 32 (space), this also
                                                //causes the program to drop to a new line per space in the message
     else{
        if (k > 0){                             //Using a "v" and positive "k" to perform a rotation, with following "if" statements
                                                //to continue a "chain" like behaviour when "e" exceeds the limits of "c" (0 to 25)
          if ( 0 <= (v + k) <= 25 ){              
            e = k - v;                                  //int e is the resulting value of the rotation process
              if (e < 0){
                 e = 26 + e;
              }
             //printf("%c = %d ", c, e);        //Other print to allow user to see what each char "c"'s new equivalent integer (e) is
             //printf("%d ", e);                //Other print to allow user to see integer (e) 
            e = e + 65;
            printf("%c", e);                    //Printing "e"'s new single characters per iteration buy adding 65 back to the value (e)        //PRINT NEW CHARS
            }
        }
        
        else if (k < 0){                        //Using a "v" and negative "k" to perform a roation, with follwoing "if/else if" statements
            if( (v + k) <= 0){                  //to continue a "chain" like behaviour when "e" exceeds the limits of "c" (0 to 25)
             e = 25 + (v + k);
            }
            else if ( (v + k) > 0){
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
    return;
    }
                                                        
void caseTwo(){                                         //Function caseTwo
    FILE *input2;                                       //Declaring variables
    char f;
    int h;
    int d, z;
    int y, w;
    
        input2 = fopen("input2.txt", "r");                           //Opening and reading input2 file and printing a blank space (f == 32)
        printf("The following numbers will be decrypted:\n");       //Dsiplaying to the user that the folloing printed text will be decrypted
        while(feof(input2) == 0){
            fscanf(input2, "%c", &f);                                //Reading "f" from input2
            if (h == f ){                                           //"if/else if" statement, "h" is in stop the program from printing an extra 
                printf(" ");                                        //value (int f). This does prevent double lettered words from working correctly! 
            }                                                     
            else if (f == 32){
                printf(" ");
            }
            else {
                printf("%c ", f);                                   //Printing resulting value (int f) from input
            h = f;
            }
        }
        printf("\nThe solution to the input is 25, otherwise\nPlease input a key\n");
        scanf("%d", &d);                                   //Explaining 25 is the solution to input2 values (f), most other keys will work
                                                           //cause a rotation- however will not produce the correct message from input
        if (d < -25){                                      //Following "if/else if" statements to ensure key is within boundaries, if so
            printf("Key error\n");                         //the program displays the error and stops. If "d" is less than -25, print error
        }
        else if (d == 0){
            printf("Key error\n");                         //If "d" is equal to 0, print error
        }
        else if (d > 25){
            printf("Key error\n");                         //If "d" is greater than 25, print error
        }
        else{                                              //Once "d" is adequate, input2 is opened then read over iterations
        input2 = fopen("input2.txt", "r");                  
        z = 0;                                             //Initializing "z" equal to zero before counting (iterations)
            for(feof(input2)==0;  z <= 20; z++){           //"for" loop use to perform iterations of input2 
            
             fscanf(input2,"%c", &f);                      //Reading individual values for "f" from input2 per iteration
                                                           //"if/else if" statements set to pick up spaces (32) in "f" and to
             if (f == 32){                                 //prevent the last "f" from being used and displayed as result (y)
                 printf(" ");                              //Recognised spaces (32) result in a blank space
             }
             else if (w == f){                             //Recognise end of input2 
                 printf(" ");
             }
             else{                                         //Coincide when "f" meets requirements
                f = f - 65;
                if (d > 0){                                //Following "if" statements to recognise "d" as positive 
                 y = f - d;                                //and to also take action when the results (y) boundaries are exceeded (0 to 25)
                    if (y < 0){
                      y = 0 - (y);
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
return;
}
                                         
void caseThree(){                                          //Fucntion caseTwo
    FILE *input3;                                          //Declaring variables
    int i, a;
    char s;
    
input3 = fopen("input3.txt", "r");                                       //Opeing and reading file input3.txt 
printf("The following message will be encrypted (substitionally):\n");   //Telling user the following message will be encrypted (substitutionally)
while(feof(input3)== 0){                                                 //"while" loop to read input3.txt charcters until end of file
fscanf(input3, "%c", &s);                                                //Read characters are placed within char s 
//printf("%c = %d\n", s, s);                                             //Other print to display the integer value of "s" (ascii code)
printf("%c", s);                                                         //Printing to display to the user the contetns of input3.txt
}
printf("\nThe encrypted result is:\n");               //Print displaying the following text will be the message encrypted
input3 = fopen("input3.txt", "r");                    //Opening and reading input3.txt
a = 0;                                                //Intializing "a" to have a value of zero before counting (interations)
for (feof(input3)==0; a<= 30; a++){                   //"for" loop to read input3.txt char by char over "a" interations
    fscanf(input3, "%c", &s);                         //input3.txt must be in capitals and include a space at the end of file,  
                                                      //and "a" must be as large to accommodate for input's (s) resulting length
    if(s == 67){                                      //Following "if/else if" statements hard code a substition encryption
        s = 65;                                       //to "s", to switch the values of character's being ecrypted (ascii code)
    }                                                
    else if(s == 65){                                 //NOTE: some attempt was made to create and algorithm to perform the hard 
        s = 67;                                       //coding but the attempts failed, hence hard coding was the alternative
    }
    else if(s == 66){
        s = 68;
    }
    else if(s == 68){
        s = 66;
    }
    else if(s == 71){
        s = 69;
    }
    else if(s == 69){
        s = 71;
    }
    else if(s == 70){
        s = 72;
    }
    else if(s == 72){
        s = 70;
    }
    else if(s == 73){
        s = 75;
    }
    else if(s == 75){
        s = 73;
    }
    else if(s == 74){
        s = 76;
    }
    else if(s == 76){
        s = 74;
    }
    else if(s == 77){
        s = 79;
    }
    else if(s == 79){
        s = 77;
    }
    else if(s == 80){
        s = 78;
    }
    else if(s == 78){
        s = 80;
    }
    else if(s == 81){
        s = 83;
    }
    else if(s == 83){
        s = 81;
    }
    else if(s == 84){
        s = 82;
    }
    else if(s == 82){
        s = 84;
    }
    else if(s == 85){
        s = 87;
    }
    else if(s == 87){
        s = 85;
    }
    else if(s == 88){
        s = 86;
    }
    else if(s == 86){
        s = 88;
    }
    else if(s == 90){
        s = 89;
    }
    else if(s == 89){
        s = 90;
    }
    
    printf("%c", s);                                   //Once "s" has been encrypted accordingly, it is printed to display 
}                                                      //Meaning a character (s) is read, encrypted and printed each iteration (a)   
printf("\n");                                          //Printing a new line for tidy finsih after "for" loop
return;
}
void caseFour(){                                       //Fucntion caseFour
    FILE *input4;                                      //Decalaring varialbes
    int j;
    char r;
                                                       //NOTE: The decryption process will only decrypt whatever the text from case 3 encrypted 
                                                       //Hence whatever the result of caseThree is needs to be typed into input4.txt
    printf("\nThe message to undergo decryption:\n");  //Printing to tell user what will be decrypted
    input4 = fopen("input4.txt", "r");                 //Opening and reading input4.txt
    while(feof(input4)== 0){                           //"while" loop used to read input4.txt until end of file
        fscanf(input4, "%c", &r);                      //Reading input4.txt (char r)
        printf("%c", r);                               //Printing input4.txt (r)
    }
    printf("\n");                                      //New line for better display purposes for user
    printf("The decrypted message results with:\n");   //Printing to user, that the following text is the decrypted message
    input4 = fopen("input4.txt", "r");                 //Opening and reading file
    j = 0;                                             //Intializing "j" to have a value of 0 before counting (iterations)
    for(feof(input4) == 0; j <= 25; j++){              //"for" loop to read input4.txt char by char over "j" iterations
        fscanf(input4, "%c", &r);                      //Assuring "j" is large enough to accomodate for the length of "r" 
        //printf("%c", r);
        if(r == 67){                                   //Following "if/else if" statements hard coded to decrypted message
            r = 65;                                    //Reversing the encrypted chars to orignal values (ascii code)
        }
        else if(r == 65){                              //NOTE: attempts were made to create an algorithm to perfomr the hard code
            r = 67;                                    //however attmepts failed, hence hard coding was the alternative
        }
        else if(r == 68){
            r = 66;
        }
        else if(r == 66){
            r = 68;
        }
        else if(r == 71){
            r = 69;    
        }
        else if(r == 69){
            r = 71;
        }
        else if(r == 70){
            r =72;
        }
        else if(r == 72){
            r = 70;
        }
        else if(r == 73){
            r = 75;
        }
        else if(r == 75){
            r = 73;
        }
        else if(r == 74){
            r = 76;
        }
        else if(r == 76) {
            r = 74;
        }
        else if(r == 77){
            r = 79;
        }
        else if(r == 79){
            r = 77;
        }
        else if(r == 80){
            r = 78;
        }
        else if(r == 78){    
            r = 80;
        }
        else if(r == 81){
            r = 83;
        }
        else if(r == 83){
            r = 81;
        }
        else if(r == 82){
            r = 84;
        }
        else if(r == 84){
            r = 82;
        }
        else if(r == 85){
            r = 87;
        }
        else if(r == 87){
            r = 85;
        }
        else if(r == 88){
            r = 86;
        }
        else if(r == 89){
            r = 90;
        }
        else if( r == 90){
            r = 88;
        }
        printf("%c", r);                               //Once "r" has been decrypted accordingly, it is printed to display
}                                                      //Meaning a character (r) is read, decrpyted and printed per iteration (j)
printf("\n");                                          //Printing a new line for tidy finish after "for"loop
return;
}



        

