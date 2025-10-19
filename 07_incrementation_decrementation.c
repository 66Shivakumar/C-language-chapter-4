#include<stdio.h>

int main(){
    int i=0;
    printf("The value of i is %d \n", i);
    i+=5;
    printf("The value of i is %d \n", i++);
    printf("The value of i is %d", i);
    // in i++ i is prited first and then i is incremented
    // in ++i i is first incremeted and the it is printed
    /* += is a compound operator there are other compound operators such as
     -=, *=, /=, %=, etc;*/
    return 0;
}