//
// Created by axeljcm on 8/19/21.
//

#include "QuickSort.h"

void QuickSort::swap(int array[], int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

QuickSort::QuickSort() {

}

int QuickSort::partition(int array[], int l, int r) {
    int pivot = array[r];
    int i = l -1;

    for (int j = l; j < r; j++){
        if (array[j] < pivot){
            i++;
            swap(array, i, j);
        }
    }
    swap(array, i+1, r);
    return i + 1;
}

void QuickSort::startQuickSort(int array[], int l, int r) {
    if (l < r){
        int pi = partition(array, l, r);
        startQuickSort(array, l, pi -1);
        startQuickSort(array, pi + 1,r);
    }
}

void QuickSort::printArray(int array[], int size) {
    int i;
    for (i=0; i<size; i++)
        cout <<
    printf("\n");

}
