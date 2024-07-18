#include<stdio.h>

void PrintEven(int iNo){

    int iCnt = 0;
    int iNum = 0;
    if(iNo <= 0){
        return;
    }
    else{
        for(iCnt = 1; iCnt <= iNo; iCnt++){
            iNum = iCnt*2;
            printf("%d \n", iNum);
        }
    }
}

int main(){

    int iValue = 0;
    printf("Enter no. of first even numbers: \n");
    scanf("%d", &iValue);

    PrintEven(iValue);
    
    return 0;
}