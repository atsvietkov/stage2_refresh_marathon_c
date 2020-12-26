int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size) {
    char *tmp;
    int swap = 0;
    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-1; j++) {
            if(mx_strcmp(arr[j], arr[j + 1]) > 0) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                swap++;
            }
        }
    }
    return swap;
}

// #include <stdio.h>
// int main() {
//     char *arr1[] = {"abc", "xyz", "ghi", "def"};
//     char *arr2[] = {"abc", "acb", "a"};

//     printf("%i\n", mx_bubble_sort(arr1, 4));
//     printf("%i\n", mx_bubble_sort(arr2, 3));
// }
