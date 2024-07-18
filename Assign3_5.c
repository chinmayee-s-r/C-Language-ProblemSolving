#include<stdio.h>

typedef int boolean;
#define TRUE 1
#define FALSE 0 

boolean CheckVowel(char cValue){

    if((cValue >= 'A') && (cValue <= 'Z')){
        
        cValue += ('a' - 'A');
    }

    if((cValue == 'a') || (cValue == 'e') || (cValue == 'i') || (cValue == 'o') || (cValue == 'u')){
        
        return TRUE;
    }
    return FALSE;
}


int main(){

    char cValue = '\0';
    printf("Enter character : \n");
    scanf("%c", &cValue);

    boolean bRet = CheckVowel(cValue);

    if(bRet == TRUE){
        printf("Input is a vowel.");
    }
    else if(bRet == FALSE){
        printf("Input is a consonant.");
    }
    
    return 0;
}



