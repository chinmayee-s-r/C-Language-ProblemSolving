#include<stdio.h>

void Pattern(int iValue){

    int i = 0;

    if(iValue < 0){
        iValue = -iValue;
    }
    for(i = 1; i<=iValue; i++){
        
        printf("$ * ");
    }
}

int main(){

    int iNo = 0;
    printf("Enter number : \n");
    scanf("%d", &iNo);

    Pattern(iNo);  

    return 0;
}



