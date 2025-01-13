// #include<stdio.h>

// int main() {
//     int arr[5] = {5, 3, 8, 1, 6}; // Predefined array for simplicity
//     int n = 5;

//     // Selection Sort logic
//     for (int i = 0; i < n-1; i++) {
//         int min_idx = i;
//         for (int j = i+1; j < n; j++) {
//             if (arr[j] < arr[min_idx]) {
//                 min_idx = j;
//             }
//         }
//         // Swap the found minimum element with the first element
//         int temp = arr[min_idx];
//         arr[min_idx] = arr[i];
//         arr[i] = temp;
//     }

//     // Print sorted array
//     printf("Sorted array: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

#include  <stdio.h>
int main(){
    int arr[5] = {5, 3, 8, 1, 6};
    int i,j;
    int min;

    for(i=0;i<5;i++){
        min = i;
        for(j=i+1;j<5;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    printf("Sorted array: ");
        for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
}
// #include <stdio.h>

// int search(int arr[], int N, int x)
// {
//     for (int i = 0; i < N; i++)
//         if (arr[i] == x)
//             return i;
//     return -1;
// }

// // Driver code
// int main(void)
// {
//     int arr[] = { 2, 3, 4, 10, 40 };
//     int x = 10;
//     int N = sizeof(arr) / sizeof(arr[0]);

//     // Function call
//     int result = search(arr, N, x);
//     (result == -1)
//         ? printf("Element is not present in array")
//         : printf("Element is present at index %d", result);
//     return 0;
// }