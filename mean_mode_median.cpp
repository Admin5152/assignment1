#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int n;
  cout << "Enter the number of numbers: ";
  cin >> n;

  vector<int> numbers(n);
  

  cout << "Enter the numbers: ";
  
  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }


  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += numbers[i];
  }
  double mean = static_cast<double>(sum) / n;


  sort(numbers.begin(), numbers.end());
  double median = (n % 2 == 0) ? (numbers[n / 2 - 1] + numbers[n / 2]) / 2.0 : numbers[n / 2];


  int mode = numbers[0]; 
  int maxCount = 1;
  for (int i = 1; i < n; i++) {
    int count = 1;
    for (int j = i + 1; j < n; j++) {
      if (numbers[i] == numbers[j]) {
        count++;
      }
    }
    if (count > maxCount) {
      maxCount = count;
      mode = numbers[i];
    }
  }

  cout << "Mean: " << mean << endl;
  cout << "Median: " << median << endl;
  cout << "Mode: " << mode << endl;

  return 0;
}