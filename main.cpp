
// 256*6=1536kb = 6pgs

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <map>
#include "QuickSort/QuickSort.h"
#include "PagedArray/PagedArray.h"

using std::cout; using std::cerr;
using std::endl; using std::string;
using std::ifstream; using std::ostringstream;
using std::istringstream;

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

int main()
{
    string filename("nums.csv");
    string file_contents;
    std::map<int, std::vector<string>> csv_contents;
    char delimiter = ',';

    file_contents = readFileIntoString(filename);

    istringstream sstream(file_contents);
    std::vector<string> items;
    string record;
    int array[1536];

    int counter = 0;
    while (std::getline(sstream, record)) {
        istringstream line(record);
        while (std::getline(line, record, delimiter)) {
            record.erase(std::remove_if(record.begin(), record.end(), isspace), record.end());
            items.push_back(record);
            //cout << record << endl;
            array[counter]= std::stoi(record);
            counter += 1;
        }

        csv_contents[counter] = items;
        items.clear();


    }
    //for (int i = 0; i < counter; ++i) {

    //cout << array[i] << endl;


    //exit(EXIT_SUCCESS);
    PagedArray result;
    result.writeResult();


    //resultPage.
    QuickSort page;

    page.startQuickSort(array,0,counter-1);
    page.saveArray(array,counter);

}


    //void read_record()
    //{

    // File pointer
    //fstream fin;

    // Open an existing file
    //fin.open("nums.csv", ios::in);


    // Read the Data from the file
    //while(fin.good()){
        //string line;
       // getline(fin,line,',');
       // cout << line << endl;


