void mx_printchar(char c);

void mx_print_alphabet(void) {
    for (int i = 65; i < 91; i++) {
        i % 2 == 0 ? mx_printchar(i + 32): mx_printchar(i);
    }
    mx_printchar(10);
}

// int main() {
//     mx_print_alphabet();
// }
