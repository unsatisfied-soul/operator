#include<stdio.h>

int main(){
    //increment ---------------------------------------
    int x = 10;
    int increment = ++x; //it's increment number +1
    int increPostfix = x++;
    printf("%d \n", increment);
    printf("%d \n", increPostfix);
    printf("%d \n", x);

    //Derement ------------------------------------------
    int y = 12;
    int decpre = --y;
    printf("%d\n", decpre);
    int decpost = y--;
    printf("%d\n", y);
    printf("%d\n", decpost);

}