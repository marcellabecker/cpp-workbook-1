#include <iostream>
#include <fstream>

int main (int argc, char **argv){
    std::string code_line;
    std::ifstream code_file("programa Autoimpressão.cpp");

    while (getline(code_file, code_line))
        std::cout << code_line << std::endl;
    code_file.close();
    return 0;
}