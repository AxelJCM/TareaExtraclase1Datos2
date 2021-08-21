//
// Created by axeljcm on 8/19/21.
//

#ifndef TAREAEXTRACLASE1DATOS2_QUICKSORT_H
#define TAREAEXTRACLASE1DATOS2_QUICKSORT_H


class QuickSort {
public:
    QuickSort();
    void startQuickSort(int array[], int l, int r);

private:
    int partition(int array[], int l, int r);
    void swap(int array[],int i, int j);
    void printArray(int array[], int size);
};


#endif //TAREAEXTRACLASE1DATOS2_QUICKSORT_H
