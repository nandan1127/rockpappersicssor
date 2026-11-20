#include <iostream>
using namespace std;
void personalinfo(const string n,const int a){
  cout<<n<<"\n";
  cout<<a<<"\n";
};
int main()
{
 string name="nandan";
 int age=20;

 personalinfo(name,age);
 cout<<"the sum is:"<<add(3,4);
  return 0;
}
