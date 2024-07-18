#include<stdio.h>

typedef int boolean;
#define TRUE 1
#define FALSE 0 

int MultFact(int iValue){

    int i = 0;
    int iMul = 1;

    if(iValue < 0){
        iValue = -iValue;
    }
    for(i = 1; i<=(iValue/2); i++){
        if(iValue%i==0)
        {
            iMul *= i;
        }
    } 
    return iMul;
    }




int main(){

    int iNo = 0;
    printf("Enter number : \n");
    scanf("%d", &iNo);

    int iRet = MultFact(iNo);  
    
    printf("%d is product of factors", iRet);
    return 0;
}



