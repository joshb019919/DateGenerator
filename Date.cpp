/** @file Date.cpp.
 *
 * @author Josh Borthick <jborthick019919@gmail.com>.
 * @brief  Calculate the proper date, given a test file (not included).
 *
*/

#include "Date.h"

Date::Date()
{
    year = 1900;
    month = 1;
    day = 1;
}

Date::Date(int m, int d, int y) : month(m), day(d), year(y)
{
} // end initializer constructor

void Date::tomorrow()
{
    day++;

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if (day > 31)
            {
                day = 1;
                month++;
            }
            break;
        case 2:
            if (day > 29)
            {
                day = 1;
                month++;
            } else if (day > 28 && year % 4 != 0) {
                day = 1;
                month++;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > 30)
            {
                day = 1;
                month++;
            }
            break;
        case 12:
            if (day > 31)
            {
                day = 1;
                month = 1;
                year++;
            }
            break;
    }// end switch
} // end tomorrow

int Date::get_year() const
{
    return Date::year;
} // end get_year

int Date::get_month() const
{
    return Date::month;
} // end get_year

int Date::get_day() const
{
    return Date::day;
} // end get_year
