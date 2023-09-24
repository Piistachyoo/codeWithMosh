//
// Created by omar on 23.09.2023
//
#include "Date.h"

Date::Date(int y, int m, int d) {
    if ((y < 1970) || (y > 2023))
        y = -1;

    if ((m < 1) || (m > 12))
        m = -1;
    if ((d < 1) || (d > 31))
        d = -1;
    year = y, month = m, day = d;
}

int Date::getYear() const { return this->year; }

int Date::getMonth() const { return this->month; }

int Date::getDay() const { return this->day; }
