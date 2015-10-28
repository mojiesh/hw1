/* Author : MOJI
Winter 2015/16
Home Work 1
Fibonacci Numbers
28.10.2015
*/

#include <iostream>

using namespace std;

int main() {
  /* code */
  int N;
  cout << "N=" << endl;
  cin >> N; // Read from console
  int f0 = 0, f1 = 1, f2;
  cout << f0 << "," << f1 << ","; // Shows two first numbers i.e. 0,1
  for (int i = 1; i < N; i++) {
    /* code */
    f2 = f0 + f1; // Generating the next numbers
    f0 = f1;
    f1 = f2;
    cout << f2 << ","; // Shows the rest of serie i.e. 1,2,3,5,8,13,21,34,55,...
  }
  cout <<"f(" << N << ") = "<< f2 << endl; // Shows desired Fibonacci number e.g. f(10) = 55
  return 0;
}
