#include <iostream>
#include "../include/Time.h"
using namespace std;

// Overload the + operator
Time Time::operator+(const Time &other) const
{   
}

// Overload the += operator
Time& Time::operator+=(const Time &other)
{   
}

// Overload the < operator
bool Time::operator<(const Time &other) const
{
}

// Overload the > operator
bool Time::operator>(const Time &other) const
{
}

// Overload the == operator
bool Time::operator==(const Time &other) const
{
}

// Overload the friend function operator<<
ostream &operator<<(ostream &os, const Time &tm)
{
}
