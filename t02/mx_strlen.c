int mx_strlen(const char *s) {
    int i = 0;
    for ( ; s[i] != '\0'; i++);
    return i;
}

// #include <stdio.h>
// int main() {
//     int a = mx_strlen("hi");
//     int b = mx_strlen("\0");
//     int c = mx_strlen("h ll ");

//     printf("%i\n%i\n%i\n", a, b, c);
// }
