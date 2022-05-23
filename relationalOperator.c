#include<stdio.h>

int main(){
    //conditional statement

    int num;
    printf("enter an integer : ");
    scanf("%d", &num);

    if(num %2 == 0){
        printf("it's even number");
    }else{
        printf("it's odd number");
    };
}