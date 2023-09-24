#ifndef FILEWRITER_H_
#define FILEWRITER_H_
#include <iostream>

class FileWriter {
  public:
    FileWriter(std::string fileName) {
        std::cout << "Contructor of file writer" << std::endl;
    }
    void write(std::string content) { std::cout << content; }

    std::string fileName() { return "filename"; }
};

#endif // FILEWRITER_H_
