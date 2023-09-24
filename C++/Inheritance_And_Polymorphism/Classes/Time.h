#ifndef TIME_H_
#define TIME_H_

class Time {
  private:
    int hour, minute, second;

  public:
    Time(int h, int m, int s);
    int getHour() const;
    int getMinute() const;
    int getSecond() const;
};

#endif // TIME_H_
