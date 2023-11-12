//Static and Extern ( Storage Classes )

#include<stdio.h>

void main(){
    //int x=10;               //initialization
    //int x;                  //Defination
   extern int x=10;       //Declaration  -->   Error ('x' has both 'extern' and initializer)

    printf("%d\n",x);
    printf("%p\n",x);
}
static int x=80;                //both extern and static cannot work together
int x=80;