#ifndef FILEIO_H_
#define FILEIO_H_

#include "FileReader.h"
#include "FileWriter.h"

class FileIO : public FileReader, public FileWriter {
  public:
    FileIO(std::string fileName) : FileReader(fileName), FileWriter(fileName) {}
};

#endif // FILEIO_H_
