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
PagedArray::PagedArray(int array[],string resultPage, int counter) {

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
//int PagedArray::writeResult(int array[], string resultPage) {
    //fstream outfile;
    //outfile.open(resultPage, std::ios_base::out);
    //string arrayStr;
    //cout << sizeof(array);
    //for (int i = 0; i < sizeof(array) ; ++i) {
        //arrayStr = array[i] ;

       // cout<<arrayStr;
  //  }
   // if (!outfile.is_open()) {
     //   cout << "failed to open " << resultPage << '\n';
   // } else {
      //  outfile.write(arrayStr.data(), arrayStr.size());
       // cout << "Done Writing!" << endl;
       // std::fill_n(array, sizeof(array), 0);
   // }

   // return EXIT_SUCCESS;
//}
void PagedArray::writeResult(int array[], string resultPage, int counter) {
    std::ofstream file;
    file.open(resultPage,std::ios_base::app);
    for (int i = 0; i < counter ; i++) {
        file << array[i] << ",";
    }
    file.close();
    std::fill_n(array, counter, 0);

}