#include<stdio.h>

void DisplayConvert(char cValue){

    if((cValue >= 'A') && (cValue <= 'Z')){
        
        cValue += ('a' - 'A');
        printf("Lowercase is %c", cValue);
    }

    else if((cValue >= 'a') && (cValue <= 'z')){
        
        cValue -= ('a' - 'A');
        printf("Uppercase is %c", cValue);
    }
}


int main(){

    char cValue = '\0';
    printf("Enter character : \n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);
    
    return 0;
}



