//Auto and Reister Storage Classes are only applicable for local variables

#include<stdio.h>

 //auto int y=10;                           //error: file-scope declaration of 'y' specifies 'auto' { auto int y=10;  } 
  

void man(){
    //register int x=10;
    auto int x;  
   // printf("%p\n",&x);                  //address of register variable 'x' requested  { printf("%p\n",&x);   }
    printf("%d\n",&x);    
     
    
}