#include<stdio.h>

int SumNonFact(int iValue){

    int i = 0;
    int iSumF = 0;
    int iSumNF = 0;
    int Diff = 0;

    if(iValue < 0){
        iValue = -iValue;
    }
    for(i = 1; i <= iValue; i++){
        if(iValue%i != 0){

            iSumF += i;
        }
    }
    for(i = 1; i <= iValue; i++){
        if(iValue%i == 0){

            iSumNF += i;
        }
    }

    Diff = iSumF - iSumNF;
    return Diff;
}



int main(){

    int iNo = 0;
    printf("Enter number : \n");
    scanf("%d", &iNo);

    int iRet = SumNonFact(iNo);  
    printf("Sum of factors : %d", iRet);
    return 0;
}



