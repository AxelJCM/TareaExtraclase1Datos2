#include "../QuickSort/QuickSort.h"
#include "PagedArray.h"
#include <iostream>
#include <fstream>

using std::cout; using std::ofstream;
using std::endl; using std::string;
using std::fstream;
//
// Created by axeljcm on 8/19/21.
//

/**
 *Constructor de Paged Array: Llama a metodos de quicksort
 * @param array
 * @param resultPage
 * @param counter
 */

PagedArray::PagedArray(int array[], int counter) {

    QuickSort page;

    page.startQuickSort(array,0,counter-1);
    page.saveArray(array,counter);
}

/**
 *writeResult(): Guarda datos ordenados en archivo resultado
 * @param array
 * @param resultPage
 * @return resultPage con numeros ordenados
 */

void PagedArray::writeResult(int array[], string resultPage, int counter) {
    std::ofstream file;
    file.open(resultPage,std::ios_base::app);
    for (int i = 0; i < counter ; i++) {
        file << array[i] << ",";
    }
    file.close();
    std::fill_n(array, counter, '\0');
    QuickSort page;

    page.startQuickSort(array,0,counter-1);
    page.saveArray(array,counter);
}

//PagedArray[] PagedArray::operator[](int array[], int counter) {
    //PagedArray pageArray[] = new PagedArray(array, counter);
    //int savedIndex = 0;
    //int j = 0;
    //while (j < 6);
   // {
        //for (int i = 0; i < 256; ++i) {
            //array[i] = pageArray[i];
            //savedIndex += i;
       // }
        //j += 1;
   // }
   // return pageArray;
//}