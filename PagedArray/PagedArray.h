//
// Created by axeljcm on 8/19/21.
//

#ifndef TAREAEXTRACLASE1DATOS2_PAGEDARRAY_H
#define TAREAEXTRACLASE1DATOS2_PAGEDARRAY_H


#include <string>


class PagedArray {
public:
    //!Constructor PagedArray()
    //! \param array
    //! \param counter
    PagedArray(int array[], int counter);
    //! Metodo writeResult(): Guarda el array ordenado al archivo resultado
    //! \param array
    //! \param resultPage
    //! \param counter
    void writeResult(int array[], std::string resultPage, int counter);
    //PagedArray[] operator[](int array[], int counter);
private:


};


#endif //TAREAEXTRACLASE1DATOS2_PAGEDARRAY_H
