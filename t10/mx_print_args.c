int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printchar(char c);

int main(int argc, char **argv) {
    // mx_printchar(argc + 48);
    // mx_printchar(10);
    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar(10);
    }
}