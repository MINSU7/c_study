char* strstr(char *str1,char *str2){
    int len_str2 = 0;
    for(len_str2 = 0; str2[len_str2] != '\0';len_str2++){
    }
    if(len_str2 == 0){
            return str1;
        }
    for(int i = 0 ; str1[i] != '\0';i++){
        int check = 1;
        for(int j = 0; str2[j] != '\0';j++){
            if(str2[j] != str1[i + j])check = 0;
        }
        if(check){
            return str1 + i;
        }
    }
    return '\0';
}


unsigned int strlen(char *str1){
    unsigned int len = 0;
    for(len = 0 ;str1[len] != '\0';len++){  
    }
    return len;
}


char *strcat(char *str1,char *str2){
    int len_str1 = 0,len_str2 = 0;
    for(len_str1 = 0;str1[len_str1]!= '\0';len_str1++){}
    for(len_str2 = 0;str2[len_str2]!= '\0';len_str2++){}
    char *str3 = (char*)malloc(sizeof(char)*(len_str1 + len_str2+1));
    for(int i = 0 ;i < len_str1;i++){
        *(str3 + i ) = *(str1 + i);
    }
    for(int i = 0;i < len_str2;i++){
        *(str3 + len_str1 + i) = *(str2 + i);
    }
    *(str3 + len_str1 + len_str2) = '\0';
    return str3;
}
                
char *strcpy(char *str1,char *str2){
    int i = 0;
    for(i = 0 ; str2[i] != '\0';i++){
        *(str1 + i) = *(str2 + i);
    }
    *(str1 + i) = '\0';
    return str1;
}

char *strchr(char *str1, int str2){
    for(int i = 0 ; str1[i] != '\0';i++){
        int check = 0;
        if(*(str1 + i) == str2)check = 1;
        if(check){
            return str1 + i;
        }
    }
    return '\0';
}

int strcmp(char *str1,char *str2){
    for(int i = 0;1;i++){
        if(*(str1 + i) != *(str2 + i)){
            return *(str1 + i) - *(str2 + i);
        }
        if(*(str1 + i) == '\0')return 0;
    }
}