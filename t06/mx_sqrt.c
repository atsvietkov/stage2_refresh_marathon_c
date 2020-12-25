int mx_sqrt(int x) {
    if (x <= 0) {
        return 0;
    }

    for(int i = 1; i * i <= x && i * i >= i; i++) {
        if(i * i == x) {
            return i;
        }
    }
    return 0;
}

// #include <stdio.h>
// int main() {
//     printf("%i\n", mx_sqrt(3));
//     printf("%i\n", mx_sqrt(4));
//     printf("%i\n", mx_sqrt(625));
//     printf("%i\n", mx_sqrt(-16));
//     printf("%i\n", mx_sqrt(16));
//     printf("%i\n", mx_sqrt(100));
//     printf("%i\n", mx_sqrt(81));
//     printf("%i\n", mx_sqrt(2147483647));
// }
