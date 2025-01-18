#include <stdio.h>

#include "string.h"

int main (){
    char str[100] = "HelloWorld";
    char str1[100];
    scanf("%s",str1);
    // strstr
    // char* a = strstr(str,str1);
    // printf("%s\n",a);

    // strlen
    // long unsigned int a = strlen(str1);
    // printf("%d\n",a);

    //strcat
    // char *a = strcat(str,str1);
    // printf("%s\n",a);

    //strcpy
    // char *a = strcpy(str,str1);
    // printf("%s\n",a);

    //strchr
    // int str2 = 'W';
    // char *a = strchr(str,str2);
    // printf("%s\n",a);

    //strcmp
    int c = strcmp(str,str1);
    printf("%d\n",c);
}