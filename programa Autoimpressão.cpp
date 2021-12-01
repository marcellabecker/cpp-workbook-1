#include <iostream>
#include <fstream>
using namespace std;

int main (int argc, char **argv){  
    string code_line;
    ifstream code_file("programa Autoimpressão.cpp");  

    while (getline(code_file, code_line))
        cout << code_line << endl;
    code_file.close();
    return 0;
}

