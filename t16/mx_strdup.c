#include <stdlib.h>

char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str) {
    int size = mx_strlen(str);
    if (size > 0) {
        char *str_new = mx_strnew(size);
            if (!str_new) {
                return NULL;
            }
        mx_strcpy(str_new, str);
        return str_new;
    }
    else {
        return NULL;
    }
}

// #include <stdio.h>
// int main() {
//     char string[] = "Wake";
//     char *p = NULL;
//     p = mx_strdup(string);
//     printf("%s\n", p);
// }
