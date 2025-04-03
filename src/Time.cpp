#include <iostream>
#include "../include/Time.h"
using namespace std;

Time Time::operator+(const Time &other) const
{   
    int totalMinutes = this->hours * 60 + this->minutes + other.hours * 60 + other.minutes;
    int newHours = totalMinutes / 60;
    int newMinutes = totalMinutes % 60;
    return Time(newHours, newMinutes);
}

Time& Time::operator+=(const Time &other)
{   
    this->hours += other.hours;
    this->minutes += other.minutes;
    while (this->minutes >= 60) {
        this->minutes -= 60;
        this->hours++;
    }
    return *this;
}

bool Time::operator<(const Time &other) const
{
    return (this->hours * 60 + this->minutes) < (other.hours * 60 + other.minutes);
}

bool Time::operator>(const Time &other) const
{
    return (this->hours * 60 + this->minutes) > (other.hours * 60 + other.minutes);
}

bool Time::operator==(const Time &other) const
{
    return (this->hours * 60 + this->minutes) == (other.hours * 60 + other.minutes);
}

ostream &operator<<(ostream &os, const Time &tm)
{
    os << tm.hours << " hours and " << tm.minutes << " minutes";
    return os;
}
