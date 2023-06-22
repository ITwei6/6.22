#include <iostream>
using namespace std;
//
//class Data
//{
//public:
//    friend istream& operator>>(istream& _cin, Data& d);
//    Data(int year = 1, int month = 2, int day = 3)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//    int GetMonday(int year, int month)
//    {
//        int monday[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//        if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
//        {
//            return 29;
//        }
//        else
//        {
//            return monday[month];
//        }
//
//    }
//    int DateRetDay()
//    {
//        int i = 0;
//        int ret = 0;
//        for (i = 1; i < _month; i++)
//        {
//            ret += GetMonday(_year, i);
//        }
//        if (_month == 1)
//        {
//            return  _day;
//        }
//        
//        
//            return ret + _day;
//     
//       
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//istream& operator>>(istream& _cin, Data& d)
//{
//    _cin >> d._year;
//    _cin >> d._month;
//    _cin >> d._day;
//    return _cin;
//}
//
//int main()
//{
//    Data d1(1982, 1, 4);
//    cin >> d1;
//    cout << d1.DateRetDay() << endl;
//
//}
//#include <iostream>
//using namespace std;

//int GetMonday(int year, int month)
//{
//    int monday[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
//    {
//        return 29;
//    }
//    else
//    {
//        return monday[month];
//    }
//}
//
//int main()
//{
//    int time1, y1, m1, d1;
//    int time2, y2, m2, d2;
//    int n = 1;
//    while ((cin >> time1 >> time2))
//    {
//        if (time1 > time2)
//        {
//            int temp = time1;
//            time1 = time2;
//            time2 = temp;
//        }
//        y1 = time1 / 10000;
//        m1 = time1 % 10000 / 100;
//        d1 = time1 % 100;
//        y2 = time2 / 10000;
//        m2 = time2 % 10000 / 100;
//        d2 = time2 % 100;
//
//        while ((y1 < y2) || (m1 < m2) || (d1 < d2))
//        {
//            d1++;
//            if (d1 > GetMonday(y1, m1))
//            {
//                m1++;
//            }
//            if (m1 == 13)
//            {
//                y1++;
//                m1 = 1;
//            }
//            n++;
//        }
//       
//        cout << n << endl;
//    }

//#include <iostream>
//using namespace std;
//int GetMonday(int year, int month)
//{
//    int monday[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
//    {
//        return 29;
//    }
//    else
//    {
//        return monday[month];
//    }
//}
//int main()
//{
//    int year, m;
//    int month = 1;
//    int day = 0;
//    while (cin >> year >> m)
//    {
//        for (int i = 1; i <= 12; i++)
//        {
//            if (m > GetMonday(year, i))
//            {
//                month++;
//                m -= GetMonday(year, i);
//            }
//            else {
//                break;
//            }
//        }
//        day = m;
//
//        printf("%4d-%02d-%02d", year, month, day);
//    }
//}
//#include <iostream>
//#include <iterator>
/*using namespace std*/;
int GetMonday(int year, int month)
{
    int monday[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
    {
        return 29;
    }
    else
    {
        return monday[month];
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        int year, month, day, day1;
        cin >> year >> month >> day >> day1;
        int total = day + day1;
        while (total > GetMonday(year, month))
        {
            total -= GetMonday(year, month);
            month++;
            if (month == 13)
            {
                year++;
                month = 1;
            }
        }
        day = total;

        printf("%4d-%02d-%02d", year, month, day);

    }
}