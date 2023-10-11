#include <iostream>
using namespace std;
int main()
{
      int n1,n2,rem,quo;
      cout << "Enter n1";
      cin >> n1;
      cout << "Enter n2";
      cin >> n2;
      quo=n1/n2;
      rem=n1%n2;
      cout <<"quotient is: " <<quo << endl;
      cout <<"reminder is: " <<rem << endl;
      return 0;
}