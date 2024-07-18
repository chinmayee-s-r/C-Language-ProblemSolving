#include<stdio.h>

void Pattern(int iValue){

    int i = 0;

    if(iValue < 0){
        iValue = -iValue;
    }
    for(i = -iValue; i<=iValue; i++){
        
        printf("%d ", i);
    }
}

int main(){

    int iNo = 0;
    printf("Enter number : \n");
    scanf("%d", &iNo);

    Pattern(iNo);  

    return 0;
}



