#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    
    //Airthmetic
    cout << "sum = " << a + b << endl;
    cout << "subtract = " << a - b <<endl;
    cout << "multiple =" << a * b << endl;
    cout << "divide =" << a / b << endl;
    cout << "remainder =" << a % b <<endl;
    
    //comparison
    cout << "IS a is greater then b? "<< (a > b)<<endl;
    cout << "IS b is less or equal to b? "<<(a <= b)<<endl;
    cout << "Is a is equal to b? "<<(a == b)<<endl;
    
    //logical
    cout << "both number > 0 " << (a > 0 && b > 0);
    
    return 0;
}
