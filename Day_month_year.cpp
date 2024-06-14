#include <iostream>
using namespace std;
int main() {
  
   int day,month,year;
   cout << "Enter the day, month and year: ";
   cin>> day>> month>> year;

  
  
   string months[] = {"January", "February", "March", "April", "May", "June", 
                        "July", "August", "September", "October", "November", "December"};
   cout << months[month-1] << " " << day << ", " << year;
   return 0;

}