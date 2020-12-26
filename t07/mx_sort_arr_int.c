void mx_sort_arr_int(int *arr, int size) {      // insertion sort
    int tmp;
    for(int i = 0; i < size; i++) {
        for(int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
            tmp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = tmp;
        }
    }
}

// #include <stdio.h>
// int main() {
//     int arr[] = {3, 55, -11, 55, 0, 0, 22};

//     for (int i = 0; i < 7; i++) {
//         printf("%i ", arr[i]);
//     }
//     printf("\n");

//     mx_sort_arr_int(arr, 7);

//     for (int i = 0; i < 7; i++) {
//         printf("%i ", arr[i]);
//     }
//     printf("\n");
// }
