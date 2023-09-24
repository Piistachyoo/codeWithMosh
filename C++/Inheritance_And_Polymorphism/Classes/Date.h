#ifndef DATE_H_
#define DATE_H_

class Date {
  private:
    int year;
    int month;
    int day;

  public:
    Date(int y, int m, int d);
    int getYear() const;
    int getMonth() const;
    int getDay() const;
};

#endif // DATE_H_
