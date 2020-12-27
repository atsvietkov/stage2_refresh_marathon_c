int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int start = 0;
    int end = size - 1;
    int mid;
    
    while (1){
        mid = start + (end - start) / 2;
        
        if(mx_strcmp(arr[start], arr[end]) > 0) {
            (*count) = 0;
            return -1;
        }
        else if(mx_strcmp(arr[mid], s) < 0) {
            (*count)++;
            start = mid + 1;
        }
        else if(mx_strcmp(arr[mid], s) > 0) {
            (*count)++;
            end = mid - 1;
        }
        else if (mx_strcmp(arr[mid], s) == 0) {
            (*count)++;
            return mid;
        }
    }
}

// #include <stdio.h>
// int main() {
//     char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//     int count = 0;
//     printf("%i %i\n", mx_binary_search(arr, 6, "ab", &count), count);
//     count = 0;
//     printf("%i %i\n", mx_binary_search(arr, 6, "aBc", &count), count);
//     count = 0;
//     printf("%i %i\n", mx_binary_search(arr, 6, "aBz", &count), count);
// }
