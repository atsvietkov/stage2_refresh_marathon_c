int mx_strcmp(const char *s1, const char *s2) {
    int i = 0;
        for ( ; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            break;
        }
    }
    return s1[i] - s2[i];
}

/*
#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "AAAAA";
    char str2[] = "AAA";
    char str3[] = "AAAAa";
    char str4[] = "";

    printf("%i %i\n", strcmp(str1, str2), mx_strcmp(str1, str2));
    printf("%i %i\n", strcmp(str1, str3), mx_strcmp(str1, str3));
    printf("%i %i\n", strcmp(str1, str4), mx_strcmp(str1, str4));

    printf("%i %i\n", strcmp(str2, str3), mx_strcmp(str2, str3));
    printf("%i %i\n", strcmp(str2, str3), mx_strcmp(str2, str3));

    printf("%i %i\n", strcmp(str3, str4), mx_strcmp(str3, str4));

    printf("%i %i\n", strcmp(str3, str3), mx_strcmp(str3, str3));
}
*/
