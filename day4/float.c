#include<stdio.h>
int main(){
    int marks = 0;
    printf("Enter a number: \n");
    scanf("%d",&marks);
    printf("value of marks is: %d \n",marks);
    printf("adress of variable marks: %d \n",&marks);
    return 0;
}