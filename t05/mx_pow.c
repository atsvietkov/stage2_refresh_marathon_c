double mx_pow(double n, unsigned int pow) {
    if (pow == 0) {
        return 1;
    }
    else {
        double result = 1;
        for (unsigned int i = 0; i < pow; i++) {
            result *= n;
        }
        return result;
    }
}

// #include <stdio.h>
// int main() {
//     printf("%f\n", mx_pow(2,6));
//     printf("%f\n", mx_pow(2.5,3));
//     printf("%f\n", mx_pow(3,0));
// }
