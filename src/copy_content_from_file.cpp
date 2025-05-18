#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("G:\\filename.txt"); // Open source file
    ofstream destination("G:\\filename1.txt"); // Open destination file
    char ch;
    if (!source.is_open()) {
        cout << "Unable to open source file." << endl;
        return 1;
    }
    if (!destination.is_open()) {
        cout << "Unable to open destination file." << endl;
        return 1;
    }
    while (source.get(ch)) {
        destination << ch;
    }
    source.close();
    destination.close();
    cout << "File copied successfully!" << endl;
    return 0;
}