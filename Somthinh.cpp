#include <iostream>
using namespace std;
int main() {
  int distance;
  int new_distance;
  int fare=2000;

  

  cout<<"enter the distace traveld: ";
  cin>>distance;
  new_distance=distance;
  if(distance <= 10){
    cout<<"the fare is: "<<fare;
  }else if (distance <= 40){
    distance = 10;
    fare += distance *100;
  }else if (distance <= 150){
    distance = 40;
    fare +=(30*100+distance * 175);
  }else{

    fare += (30*100)+(110*175)+(distance-150)*120;
    
  }
  cout<<"distance traveled " <<new_distance<<endl;
  cout<<"fare is: "<<fare;


  

    return 0;
}