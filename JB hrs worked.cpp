#include <iostream>

int main() {
  int gross_pay;
  int hrs;

  std::cout << "How many hours did you work this week?";
  std::cin>>hrs;
  if(hrs <= 40){
    gross_pay = hrs * 5;
  }
  else{
    gross_pay = (40 * 5) + ((hrs - 40) * 7);
  }
  std::cout << "Your gross pay is " << gross_pay << std::endl;


  int income_tax = 0.15 *gross_pay;
  int NHIL=0.02 * gross_pay;
  int district = 0.01 * gross_pay;

  int num_of_children;

  int edu_fund;
  std::cout << "How many children do you have?";
  std::cin>>num_of_children;

  if(num_of_children <= 3){
    edu_fund = 0;
  }
  else{
    edu_fund = (num_of_children - 3) * 0.5;
  }

  
  std::cout <<"Your edufund is " << edu_fund << std::endl;


  
  int net_pay = gross_pay - (edu_fund+ income_tax + NHIL + district);

  std::cout << "Your net pay is " << net_pay << std::endl;


}