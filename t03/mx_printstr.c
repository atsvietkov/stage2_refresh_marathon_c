#include <unistd.h>

int mx_strlen(const char *s);

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}

// int main() {
//     mx_printstr("Hello!");
//     mx_printstr(" My name is Neo! !!");
//     mx_printstr("");
//     mx_printstr("\n");
// }
