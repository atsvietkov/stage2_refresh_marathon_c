int mx_tolower(int c);
double mx_pow(double n, unsigned int pow);
int mx_strlen(const char *s);

unsigned long mx_hex_to_nbr(const char *hex) {
    int size = mx_strlen(hex);
    int pow = 0;
    unsigned long result = 0;
    for (int i = size - 1; i >= 0; i--) {
        if (!((mx_tolower(hex[i]) >= 48 && mx_tolower(hex[i]) <= 57) || 
        (mx_tolower(hex[i]) >= 97 && mx_tolower(hex[i]) <= 102))) {
            return 0;
        }
        else {
            if (mx_tolower(hex[i]) >= 48 && mx_tolower(hex[i]) <= 57) {
                if ((result + (mx_tolower(hex[i]) - 48) * mx_pow(16, pow)) < result) {
                    return 0;
                }
                result += (mx_tolower(hex[i]) - 48) * mx_pow(16, pow);
                pow++;
            }
            else {
                if ((result + (mx_tolower(hex[i]) - 48) * mx_pow(16, pow)) < result) {
                    return 0;
                }
                result += (mx_tolower(hex[i]) - 87) * mx_pow(16, pow);
                pow++;
            }
        }
    }
    return result;
}

int mx_tolower(int c) {
    if (c >= 65 && c <= 90) {
        return c+32;
    }
    else {
        return c;
    }
}

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

int mx_strlen(const char *s) {
    int i = 0;
    for ( ; s[i] != '\0'; i++);
    return i;
}

// #include <stdio.h>
// int main() {
//     printf("%lu\n", mx_hex_to_nbr("C4"));
//     printf("%lu\n", mx_hex_to_nbr("FaDex"));
//     printf("%lu\n", mx_hex_to_nbr("ffffffffffff"));
//     printf("%lu\n", mx_hex_to_nbr("fffffffffffff"));
//     printf("%lu\n", mx_hex_to_nbr("ffffffffffffff"));
//     printf("%lu\n", mx_hex_to_nbr("fffffffffffffff"));
//     printf("%lu\n", mx_hex_to_nbr("ffffffffffffffff"));
// }
