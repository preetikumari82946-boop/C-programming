#include<stdio.h>
int main(){

printf("\n\n****Types of operators in c*****");


//Arithmetic operator
int a=10,b=7,c=8;
printf("\n the sum of a and b is %d",a+b);
printf("\n the diff of a and b is %d",a-b);
printf("\n the mul of a and b is %d",a*b);
printf("\n the div of a and b is %d",a/b);
printf("\n the modulo of a and b is %d",a%b);

printf("\n the increement of a is %d",a++);
printf("\n the increement of b is %d",++b);
printf("\n the decreement of a is %d",--a);
printf("\n the decreement of b is %d",b--);



//Assignment operators
//=,+=,-=,*=,%=

int pr=9;
pr +=9;
printf("pr is %d\n",pr);




return 0;
}