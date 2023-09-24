//
// Created by omar on 23.09.2023
//
#include "Time.h"

Time::Time(int h, int m, int s) {
    if ((h < 0) || (h > 23))
        h = -1;

    if ((m < 0) || (m > 59))
        m = -1;
    if ((s < 0) || (s > 59))
        s = -1;
    hour = h, minute = m, second = s;
}

int Time::getHour() const { return this->hour; }

int Time::getMinute() const { return this->minute; }

int Time::getSecond() const { return this->second; }
