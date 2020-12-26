char *mx_strcpy(char *dst, const char *src) {
    int i = 0;
    for( ; src[i] != '\0'; i++) {
        dst[i] = src[i];
    }    
    dst[i] = '\0';
    return dst;
}

/*
#include <stdio.h>
int main() {
    char str1[] = "Hello World! .;";
    char str2[15];
    mx_strcpy(str2, str1);

    printf("%s", str2);
}
*/
