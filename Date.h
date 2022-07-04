/** @file Date.h.
 *
 * @author Josh Borthick <jborthick019919@gmail.com>.
 * @brief  Class file for a date object.
*/

#ifndef DATE_CLASS_H
#define DATE_CLASS_H

class Date
{
private:
    int year;
    int month;
    int day;

    int jan, mar, may, jul, aug, oct, dec = 31;
    int apr, jun, sep, nov = 30;

    void increment_date();

public:
    explicit Date();
    explicit Date(int, int, int);
    void tomorrow();
    int get_year() const;
    int get_month() const;
    int get_day() const;
    ~Date(){};
};

#endif
