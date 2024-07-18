#include<stdio.h>

void Table(int iValue){

    int i = 0;
    int iT = 1;

    if(iValue < 0){
        iValue = -iValue;
    }
    for(i = 1; i<=10; i++){
        
        iT = i * iValue;
        printf("%d ", iT);
    }

}

int main(){

    int iNo = 0;
    printf("Enter number : \n");
    scanf("%d", &iNo);

    Table(iNo);

    return 0;
}



