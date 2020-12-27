void mx_foreach(int *arr, int size, void (*f)(int)) {
    for (int i = 0; i < size; i++) {
        f(arr[i]);
    }
}

// #include <stdbool.h>
// #include <unistd.h>
// void mx_printchar(char c) {
//     write(1, &c, 1);
// }

// void mx_printint(int n) {
//     bool negative = 0;
//     if (n < 0) {
//         n *= -1;
//         negative = 1;
//     }

//     int len = 0;
//     int n_cpy = n;
//     for ( ; n_cpy > 0; len++) {
//         n_cpy /= 10;
//     }

//     if (n == 0) {
//         mx_printchar(0+48);
//     }
//     else {
//         int arr[len];
//         for(int i = 0; i < len; i++) {
//             arr[i] = n % 10;
//             n /= 10;
//         }
//         if (negative == 1) {
//             mx_printchar('-');
//         }
//         for (int i = len-1; i >= 0; i--) {
//             mx_printchar(arr[i]+48);
//         }
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     mx_foreach(arr, 5, mx_printint);
// }
