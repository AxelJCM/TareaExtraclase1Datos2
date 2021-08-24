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
 *
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
 *
 * @param array
 * @param resultPage
 * @return
 */
int PagedArray::writeResult(int array[], string resultPage) {
    fstream outfile;
    outfile.open(resultPage, std::ios_base::out);
    string arrayStr;

    for (int i = 0; i < 1536 ; ++i) {
        array[i] = std::stoi(arrayStr);

        cout<<arrayStr;
    }
        if (!outfile.is_open()) {
            cout << "failed to open " << resultPage << '\n';
        } else {
            outfile.write(arrayStr.data(), arrayStr.size());
            cout << "Done Writing!" << endl;
            std::fill_n(array, 1536, 0);
        }

        return EXIT_SUCCESS;

    }

