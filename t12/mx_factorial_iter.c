int mx_factorial_iter(int n) {
    int result = 0;
    if (n < 0) {
        result = 0;
    }
    else if (n == 0) {
        result = 1;
    }
    else {
        result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
            if (result * i < result) {
                result = 0;
                break;
            }
        }
    }
    return result;
}

// #include <stdio.h>
// int main() {
//     printf("%i %i %i\n", mx_factorial_iter(-1), mx_factorial_iter(0), mx_factorial_iter(1));
//     printf("%i %i %i\n", mx_factorial_iter(2), mx_factorial_iter(3), mx_factorial_iter(4));
//     printf("%i %i %i\n", mx_factorial_iter(5), mx_factorial_iter(6), mx_factorial_iter(7));
//     printf("%i %i %i\n", mx_factorial_iter(8), mx_factorial_iter(9), mx_factorial_iter(10));
//     printf("%i %i %i\n", mx_factorial_iter(11), mx_factorial_iter(12), mx_factorial_iter(13));
//     printf("%i %i %i\n", mx_factorial_iter(14), mx_factorial_iter(15), mx_factorial_iter(16));
// }
