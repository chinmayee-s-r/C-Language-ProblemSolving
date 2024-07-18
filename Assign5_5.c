#include<stdio.h>

void OddDisplay(int iValue){

    int i = 0;
    int iMul = 0;

    if(iValue < 0){
        iValue = -iValue;
    }
    for(i = 1; i<=5; i++){
        
        iMul = i * iValue;
        printf("%d ", iMul);
    }
}

int main(){

    int iNo = 0;
    printf("Enter number : \n");
    scanf("%d", &iNo);

    OddDisplay(iNo);  

    return 0;
}



