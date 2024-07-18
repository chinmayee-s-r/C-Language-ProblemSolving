#include<stdio.h>

void NonFact(int iValue){

    int i = 0;

    if(iValue < 0){
        iValue = -iValue;
    }
    for(i = 1; i <= iValue; i++){
        if(iValue%i != 0){

            printf("%d ", i);
        }
    }
}



int main(){

    int iNo = 0;
    printf("Enter number : \n");
    scanf("%d", &iNo);

    NonFact(iNo);  

    return 0;
}



