#include <iostream>
using namespace std;

int main(){

  //to print no even or odd
    int num;
    cout << "enter a number: ";
    cin >> num;
    
    if(num % 2 == 0){
        cout << "Even" <<endl;
    } else{
        cout << "Odd" <<endl;
    }

  //to check no if psoitve or negative
    if(num > 0){
        cout << "positive" << endl;
    }else if(num < 0){
        cout << "negative" ;
    }else{
        cout << "Zero";
    }
return 0;
}
