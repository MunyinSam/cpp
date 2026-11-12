#include <iostream>
#include <cstdlib>

using namespace std;

void bubbleSort(int *arr, int len);
void mergeSort(int *arr, int len);

int main() {

    int arr[10], i;
    
    for(i=0;i<10;i++) arr[i] = 10 - i;

    bubbleSort(arr, 10);

    cout << "Sorted Array: ";
    for(i=0;i<10;i++) cout << arr[i] << ' ';

    return 0;
}

// Bubble Sort
// 5 4 1 8 7
// 

void bubbleSort(int *arr, int len) {
    cout << "In BubbleSort Func" << endl;
    int i, j, t;
    // for(i=0;i<len;i++) cout << arr[i] << ' ';
    
    for(i=1;i<len;i++) {
        // compare the last two arr[len] and arr[len-1]
        for(j=len-1;j>=i;j--) {
            if(arr[j] < arr[j-1]) {
                t = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = t;
            }
        }
    }

    cout << endl << "End of BubbleSort Func" << endl;
}

void mergeSort(int *arr, int len) {
    
}