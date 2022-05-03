/*
|-------------------
|Bubble Sort
|-------------------
|An algoritm that sorts an array of integers from smallest to largest.
|We are using for this algorithm the bubble sort function algorithm to sort the array.
|-------------------
|Last Modified: 3.05.2022
|-------------------
*/

// A function to swap two integers array elements
void swap(int arr1, int arr2) {
    int help = arr2;
    arr1 = arr2;
    arr2 = help;
}

// Variable x is the number of elements in the array
void bubbleSort(int arr[], int x) {
    for (int i = 0; i < x - 1; i++) {
        for (int j = 0; j < x - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}