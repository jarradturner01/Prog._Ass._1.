#include <stdio.h>

int main(){
int f;
int e;
int d;
int i;
int x;
//printf("Hello world\n");

printf("Please select one of the following:\n1- encrytion with rotation cipher (given text + key)\n");

scanf("%d, &x);")

switch (x){
    case 1:
            printf("Please select a variable to use as a key- \n");\
            scanf("%d", &k);
            for(int i=65; i<91; i++){
                f = i - 65;
                
            }
}
  


for(int i=65; i<91; i++)
 {
    f = i -65; 
    
    printf("%c = %d", i, f);
    
    e = (f - 1);                   // k is (-1)
    
    if (e < 0)
    {
        e = 25;
    }
    printf("       %c is now %d\n", i, e);
    
    d = (e + 1);
    
    if (d > 25)
    {
        d = 0;//
    }
    printf("                          %c is again %d\n", i, d);
 }

for ( d = 0; d < 26; d++) 
{
    printf("%c = %d\n", i, d);
}


return(0);
}