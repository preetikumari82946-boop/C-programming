#include<stdio.h>
int main(){
    
    // single line comment

    /*
    thid is a multi
    line
    comment
    */

    // int,float,char
    int a=7;
    float b =8.0;
    char c = 't';

    printf("hello  %d\n",a);  //%d for integer
    printf("hello  %f\n",b);  //%f for float
    printf("hello  %c\n",c);  //%c for char

    printf("the size of int is  %d\n",sizeof(int));
    printf("the size of float is  %d\n",sizeof(float));
    printf("the size of char is  %d\n",sizeof(char));
    


    printf("\n******RULES FOR CREATING VARIABLES*******");

    int harryName; //this is variable declaration
    harryName=76;  //this is variable initalization
    char five ='5';  //this is both variable declaration and initialization
    
    const int i=9;    //constant variable
    
    
    return 0;
}