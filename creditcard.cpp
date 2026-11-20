#include <iostream>
#include <string>
using namespace std;
int getdigit(const int number);
int sod(const string cardnumber);
int sed(const string cardnumber);
int main(){
    string cardnumber;
    int result=0;
    cout<<"enter the cardnumber#:";
    cin>>cardnumber;
    result=sod(cardnumber)+sed(cardnumber);
    if(result %10 == 0){
        cout<<cardnumber<<" is valid";
    }
    else{
        cout<<cardnumber<<"is invalid";
    }
    return 0;
}
int getdigit(const int number){
    return number %10+(number/10%10);
}
int sod(const string cardnumber){
    int sum=0;
    for(int i=cardnumber.size()-1;i>=0;i-=2){
        sum+=cardnumber[i]-'0';
    }
    return sum;
}
int sed(const string cardnumber){
    int sum=0;
    for(int i=cardnumber.size()-2;i>=0;i-=2){
        sum+=getdigit((cardnumber[i]-'0')*2);
    }
    return sum;
}