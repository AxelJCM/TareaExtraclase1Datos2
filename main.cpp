
// 256*6=1536kb = 6pgs

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <map>
#include "PagedArray/PagedArray.h"
#include <string>

using std::cout; using std::cerr;
using std::endl; using std::string;
using std::ifstream; using std::ostringstream;
using std::istringstream;
using std::cin;

//using namespace std;

/**
 *readFileIntoString(): Se lee el archivo y saca el contenido y lo convierte en string.
 * @param path
 * @return ss = contenido
 */

string readFileIntoString(const string& path) {
    auto ss = ostringstream{};
    ifstream input_file(path);
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '"
        << path << "'" << endl;
        exit(EXIT_FAILURE);
    }
    ss << input_file.rdbuf();
    return ss.str();
}
/**
 *main(): Main del programa donde se ejecuta
 * @return ejecucion de programa
 */
int main() {
    /**
     * Busca posiciones y cortar para el archivo
     */
    string comando;
    cout << "Insertar Comando: ";
    getline(cin, comando);
    std::size_t pos = comando.find('-i');
    std::size_t pos2 = comando.find(">");
    int pos3 = pos2 - pos;
    std::string fileName = comando.substr(pos + 3, pos3 - 3);


    /**
     * Encontrar posiciones y cortar para el archivo resultado
     */
    std::size_t pos4 = comando.find_last_of('-');
    std::size_t pos5 = comando.find_last_of('>');
    std::string resultPage = comando.substr(pos4 + 4, (pos5 - pos4) - 4);
    string file_contents;
    std::map<int, std::vector<string>> csv_contents;
    char delimiter = ',';

    file_contents = readFileIntoString(fileName);

    istringstream sstream(file_contents);
    std::vector<string> items;
    string record;
    int array[1536];

    int counter = 0;
    /**
     *while que lee y guarda en un array el contenido del archivo
     */
    while (std::getline(sstream, record)) {
        istringstream line(record);
        while (std::getline(line, record, delimiter)) {
            record.erase(std::remove_if(record.begin(), record.end(), isspace), record.end());
            items.push_back(record);
            array[counter] = std::stoi(record);//meter aqui operador
            //arrayOg[counter] = std::stoi(record);
            cout << counter << endl;
            counter += 1;
        }

        csv_contents[counter] = items;
        items.clear();

    }
    /**
     *
     */
    //void loopReadArray(int counter,int arrayOg(int counter));{
    // if counter

    //}
    /**
     *Llama metodos de otras clases
     */
    PagedArray *result = new PagedArray(array, counter);
    result->writeResult(array, resultPage, counter);
}