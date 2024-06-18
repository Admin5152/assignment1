#include<iostream>
#include<cmath>

using namespace std;

int min(){

    double x[100];
    double sum=0, Xb, stdd;
    int i , n;
    cout<<"Enter values of n :";
    cin>>n;

    for(i=1; i<=n; i++){
        cout<<"Enter X ["<<i<<"]:";
        cin>> x[i];
        sum = sum + x[i];
    }
    Xb = sum/n;
    sum = 0;
    for(i=1; i<=n; i++){
        sum=sum+pow(x[i]-Xb,2);

    }
    stdd=sqrt(sum/2);
    cout<<"Standard deviation is given as: "<<stdd;





    return 0 ;
}