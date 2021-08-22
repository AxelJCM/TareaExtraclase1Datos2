//
// Created by axeljcm on 8/19/21.
//

#ifndef TAREAEXTRACLASE1DATOS2_QUICKSORT_H
#define TAREAEXTRACLASE1DATOS2_QUICKSORT_H


class QuickSort {
public:
    QuickSort();
    void saveArray(int array[], int size);
    void startQuickSort(int array[], int l, int r);
private:
    int partition(int array[], int l, int r);
    void swap(int array[],int i, int j);
};


#endif //TAREAEXTRACLASE1DATOS2_QUICKSORT_H
