//
// Created by omar on 23.09.2023
//
#include "DateTime.h"

DateTime::DateTime(int year, int month, int day, int hour, int minute,
                   int second)
    : Date(year, month, day), Time(hour, minute, second) {}
