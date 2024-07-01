#include <stdio.h>

void fun(int arr[], int n) {
    arr[2] = 300;
}

int main() {
    int arr[5] = {20, 30, 40, 50, 60}; // Correctly initializing the array with integer values
    fun(arr, 5);
    // for (int i = 0; i < 5; i++)
    // { 
    //     printf("%d \n",arr[i]);
    //     /* code */
    // }
    
    printf("%d\n", *arr); // Printing the first element of the array

    return 0;
}
