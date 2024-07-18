#include<stdio.h>

int SumNonFact(int iValue){

    int i = 0;
    int iSum = 0;

    if(iValue < 0){
        iValue = -iValue;
    }
    for(i = 1; i <= iValue; i++){
        if(iValue%i != 0){

            iSum += i;
        }
    }
    return iSum;
}



int main(){

    int iNo = 0;
    printf("Enter number : \n");
    scanf("%d", &iNo);

    int iRet = SumNonFact(iNo);  
    printf("Sum of factors : %d", iRet);
    return 0;
}



