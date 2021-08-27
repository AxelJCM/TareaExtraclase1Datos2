//
// Created by axeljcm on 8/19/21.
//

#ifndef TAREAEXTRACLASE1DATOS2_QUICKSORT_H
#define TAREAEXTRACLASE1DATOS2_QUICKSORT_H


class QuickSort {
public:
    //!

    QuickSort();
    //! saveArray(): Imprime el array sorteado.
    //! \param array
    //! \param size
    static void saveArray(int array[], int size);
    //! startQuickSort(): Empieza el ordenamiento de quicksort
    //! \param array
    //! \param l
    //! \param r
    void startQuickSort(int array[], int l, int r);
private:
    //! Metodo partition(): Metodo de ordenar por partes el array.
    //! \param array
    //! \param l
    //! \param r
    //! \return
    int partition(int array[], int l, int r);
    //! Metodo swap(): swapea arrays para ordenar mediante QuickSort
    //! \param array
    //! \param i
    //! \param j
    void swap(int array[],int i, int j);
};


#endif //TAREAEXTRACLASE1DATOS2_QUICKSORT_H
