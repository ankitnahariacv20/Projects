#include <stdio.h>
#include <conio.h>
#include <string.h>
#define SI 1000
void copyandlength(char str1[]){
    char str2[SI]; int i=0,c=0;
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("The copied string is : %s \n", str2);
    while(str2[c]!='\0'){
        c++;
    }
    str2[c]='\0';
    printf("The length of the string is = %d", c);
}
int main(){
    char string1[SI];
    printf("Enter the string. \n");
    gets(string1);
    copyandlength(string1);
    getch();
    return 0;
}
