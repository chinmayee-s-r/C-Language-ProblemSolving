#include<stdio.h>

void FactRev(int iValue){

    int i = 0;

    if(iValue < 0){
        iValue = -iValue;
    }
    for(i = (iValue/2); i >= 1; i--){
        if(iValue%i=0)
        {
            printf("%d ", i);
        }
    }
}



int main(){

    int iNo = 0;
    printf("Enter number : \n");
    scanf("%d", &iNo);

    FactRev(iNo);  

    return 0;
}



