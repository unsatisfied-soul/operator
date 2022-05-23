#include<stdio.h>

int main(){
    int marks;

    printf("enter a marks :");
    scanf("%d", &marks);

    if(marks<=100 && marks>= 80){
        printf("you got A+");
    }else if(marks <=79 && marks >= 60){
        printf("you got B");
    }else
    {
        printf("you got fail");
        
    }
    
}