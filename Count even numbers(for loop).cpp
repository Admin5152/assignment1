#include <iostream>
using namespace std;

int main(){

  int average;  

  int number;

  cout<< "Enter the number of even numbers you want to print: ";

  cin>>number;
  int even =2;
  for(int i = 0; i<number; i++){
    cout<<even<<endl;
    even = even + 2;
    

  }

  average = even/2;
  cout<< "The average of the first "<< number << " even numbers is: "<< average << endl;
  
  return 0;
}







//NOTES

//for loop
// #include <iostream>

// int main() {


//   int count = 0;
  
//   for(int i =0; i<10; i++){
//     std::cout<< "number: "<< i <<std:: endl;
//     count++;
//     std::cout<< "count: "<< count << std::endl;

//   }
//   return 0;
// }




//while loop
// #include <iostream>

// int main(){

//   int count = 0;
  
//   while (count <= 10){
//     std::cout<< "number: "<< count <<std:: endl;
//     count++;

    
//   }



//   return 0;
// }



// DO while
// #include <iostream>

// int main(){

//   int count = 0;

  
//   do{

//     std::cout<< "number: "<< count <<std:: endl;
//     count++;
//   }while(count <= 10);

  
  
//   return 0;
// }