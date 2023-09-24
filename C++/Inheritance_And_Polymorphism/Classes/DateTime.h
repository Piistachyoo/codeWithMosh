#ifndef DATETIME_H_
#define DATETIME_H_
#include "Date.h"
#include "Time.h"

class DateTime : public Date, public Time {
  public:
    DateTime(int year, int month, int day, int hour, int minute, int second);
};

#endif // DATETIME_H_
