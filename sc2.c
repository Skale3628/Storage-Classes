//for local variable / local static variable
/*#include<stdio.h>
void fun(){
    int y=10;
    -->  //static int y=10;    // o/p --> 11 12 13
    ++y;
    printf("Value of y is %d\n",y);
}
void main(){
    fun();
    fun();
    fun();
    
}

output:
Value of y is 11
Value of y is 11
Value of y is 11

*/

//for global variable / static global variable
#include<stdio.h>
static int y=10;
void fun(){
   
    ++y;
    printf("Value of y is %d\n",y);
}
void main(){
    fun();
    printf("%d\n",y);
    fun();
    printf("%d\n",y);
    fun();
    printf("%d\n",y);

}
/*
optput:
Value of y is 11
Value of y is 12
Value of y is 13
*/