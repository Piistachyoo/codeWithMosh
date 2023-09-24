#ifndef FILEREADER_H_
#define FILEREADER_H_
#include <iostream>

class FileReader {
  public:
    FileReader(std::string fileName) {
        std::cout << "Contructor of file reader" << std::endl;
    }
    std::string read() { return "Hello_World"; }
    std::string fileName() { return "filename"; }
};

#endif // FILEREADER_H_
