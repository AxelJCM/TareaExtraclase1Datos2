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


PagedArray::PagedArray() {
}


int PagedArray::writeResult(int array) {
    string text(reinterpret_cast<const char *>(array));
    string filename2("resultPage.cmv");
    fstream outfile;

    outfile.open(filename2, std::ios_base::out);
    if (!outfile.is_open()) {
        cout << "failed to open " << filename2 << '\n';
    } else {
        outfile.write(text.data(), text.size());
        cout << "Done Writing!" << endl;
    }

    return EXIT_SUCCESS;

}
