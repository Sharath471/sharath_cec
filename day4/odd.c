#include<stdio.h>
int main(){
    int inputNumber=0;
    printf("Enter a number \n");
    scanf("%d",&inputNumber);
    if(inputNumber%2==0){
        printf("The given number is even");
    }
    else{
        printf("the given number is odd");
    }

}