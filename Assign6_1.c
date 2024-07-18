#include<stdio.h>

void OddDisplay(int iValue){

    if(iValue < 50){
        printf("SMALL");
    }
    else if((iValue >= 50) && (iValue < 100)){
        printf("MEDIUM");
    }
    if(iValue >= 100){
        printf("LARGE");
    }
    
}

int main(){

    int iNo = 0;
    printf("Enter number : \n");
    scanf("%d", &iNo);

    OddDisplay(iNo);  

    return 0;
}



