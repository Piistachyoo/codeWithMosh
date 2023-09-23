#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H

class SmartPointer {
  private:
    int *ptr;

  public:
    SmartPointer();
    explicit SmartPointer(int *ptr);
    ~SmartPointer();

    int &operator*();
};

#endif