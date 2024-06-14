#include <iostream>
using namespace std;

int main() {
  int prime_count = 0;
  int upto;
  int number = 2;
  bool is_prime;
  int divisor;
  
  
    cout<<"Enter the number of values youd like :";
    cin>>upto;


  while(prime_count<upto){
    is_prime = true;
    for(divisor = 2; divisor <= number/2; divisor++){
      if (number % divisor == 0){
        is_prime = false;
        break;
      }
    }
    if (is_prime){
      cout << number << " ";
      prime_count++;
    }
    number++;
    
  }








  return 0;
  
}