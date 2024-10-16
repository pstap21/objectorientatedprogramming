 #include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// vector of int.
// used to store the records
typedef vector<int> Records;//int storage of records

// https://www.cplusplus.com/doc/tutorial/files/
class RecordsManager {
private:
    fstream _file;
    string _filename;//class to manage reading records from a file

public:
    RecordsManager(string filename) : _filename(filename) {}
    void read(Records &records) {
        _file.open(_filename, ios::in);//opens the file in read only mode
        if (_file.is_open()) {
            string line;
            int lineNumber = 1; // keep track of the line number of the file
            while (std::getline(_file, line)) {
                try {
                records.push_back(stoi(line));//stoi is a string to integer conversion
            } catch (const invalid_argument &e) {
                _file.close();
                throw runtime_error( "Wrong argument when reading the file: " + _filename + " at line " + to_string(lineNumber) +
                 ". The value '" + line + "' is not a valid integer.");
                } catch (const out_of_range &e) {
                    _file.close();
                    throw runtime_error("Out of range when reading the file " +_filename + "at a line" + to_string(lineNumber) + 
                    ". The value " + line + " is not a valid integer.");
                }
                lineNumber ++; // incrementing the line number
            }
            
            _file.close();
        } else { //prompt error message if the file cant be opened
        cerr << "Error: file cant be opened" << _filename << endl;
        }
        }
    };


int main() {
     try{
        //RecordsManager recordM("test_clean.txt");
        RecordsManager receordM("test_corrupt1.txt");
     // RecordsManager receordM("test_corrupt2.txt");
        Records myRecords;

        // reads records
        recordM.read(myRecords);

        // calculate and print out the sum
        int sum = 0;
        for (int i = 0; i < myRecords.size(); i++) {
             sum += myRecords[i];
        }
        cout << sum << endl;
} catch ( const exception &e) {
    //catch any exceptions and throw an error message
    cerr << "Error occured: " << e.what() << endl;

}
    return 0;
}
