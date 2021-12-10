//
//  main.cpp
//  insertionSort
//
//  Created by Izim on 09.12.2021.
//

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
        for (i = 1; i < n; i++)
        {
            key = arr[i];
            j = i - 1;
     
            /* Move elements of arr[0..i-1], that are
            greater than key, to one position ahead
            of their current position */
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = 5;
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
