#include<stdio.h>

struct student {
    char name[100];
    float marks;
    int age;
};

int main(){
    struct student num={"Preeti",10.98,19};
    struct student num1={"shruti",10.98,23};
    struct student num2={"raushan",10.98,16};
printf("%s\n",num.name);
printf("%s",num2.name);
}
    

