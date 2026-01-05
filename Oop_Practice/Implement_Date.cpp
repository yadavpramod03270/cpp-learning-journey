 // ===========================================================================================================================================================================
 /*Write a C++ program to implement a class called Date that has private member variables for day, month, and year. 
 Include member functions to set and get these variables, as well as to validate if the date is valid..*/
 #include <iostream>

 using namespace std;

 class Date {
     private: int day;
     int month;
     int year;

     // Helper function to check leap year
     bool isLeapYear(int y) {
         return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
     }

     public:
         // Default constructor
         Date(): day(1),
     month(1),
     year(2000) {}

     // Parameterized constructor
     Date(int d, int m, int y) {
         setDate(d, m, y);
     }

     // Setter for complete date
     void setDate(int d, int m, int y) {
         day = d;
         month = m;
         year = y;
     }

     // Getters
     int getDay() {
         return day;
     }
     int getMonth() {
         return month;
     }
     int getYear() {
         return year;
     }

     // Function to validate the date
     bool isValid() {
         if (year < 1 || month < 1 || month > 12 || day < 1)
             return false;

         int daysInMonth;

         switch (month) {
             case 2:
                 daysInMonth = isLeapYear(year) ? 29 : 28;
                 break;
             case 4:
             case 6:
             case 9:
             case 11:
                 daysInMonth = 30;
                 break;
             default:
                 daysInMonth = 31;
         }

         return (day <= daysInMonth);
     }

     // Display the date
     void display() {
         cout << day << "/" << month << "/" << year << endl;
     }
 };

 int main() {
     Date d1(29, 2, 2024); // leap year
     d1.display();

     if (d1.isValid())
         cout << "Valid Date" << endl;
     else
         cout << "Invalid Date" << endl;

     Date d2(31, 11, 2023); // Invalid date: November has 30 days
     d2.display();

     if (d2.isValid())
         cout << "Valid Date" << endl;
     else
         cout << "Invalid Date" << endl;

     return 0;
 }