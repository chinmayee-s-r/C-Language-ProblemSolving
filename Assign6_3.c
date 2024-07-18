#include<stdio.h>

int Factorial(int iValue){

    int i = 0;
    int iFact = 1;

    if(iValue < 0){
        iValue = -iValue;
    }
    for(i = 1; i<=iValue; i++){
        
        iFact *= i;
    }
    return iFact;
}

int main(){

    int iNo = 0;
    printf("Enter number : \n");
    scanf("%d", &iNo);

    int iRet = Factorial(iNo);
    printf("Factorial of Number is : %d", iRet);

    return 0;
}



