#include <iostream>
using namespace std;
int fact(int);
int main(){
    cout << "Please enter a positive integer: ";
    int user,final;
    cin >> user;
    final=fact(user);
    cout <<"Your factorial of number is: "<<final<<endl;
}

int fact(int num){
    if(num==1&&num==0)
        return 1;
    else
    return num*fact(num-1);
}
