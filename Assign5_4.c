#include<stdio.h>

void OddDisplay(int iValue){

    int i = 0;

    if(iValue < 0){
        iValue = -iValue;
    }
    for(i = 1; i<=iValue; i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }
}

int main(){

    int iNo = 0;
    printf("Enter number : \n");
    scanf("%d", &iNo);

    OddDisplay(iNo);  

    return 0;
}



