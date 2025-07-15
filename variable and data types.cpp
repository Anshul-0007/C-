#include <iostream>
#include <string>
using namespace std;

int main() {
    string Name;
    cout << "Name: ";
    getline(cin >> ws, Name);  // takes full name with spaces

    cout << "Name is " << Name << endl;

    int Age;
    cout << "Age: ";
    cin >> Age;
    cout << "Age is " << Age << endl;

    int Marks;
    cout << "Marks: ";
    cin >> Marks;
    cout << "Marks is " << Marks << endl;

    char Grade = 'A';
    bool passed = true;

    cout << "Grade is " << Grade << endl;
    cout << "Passed: " << passed << endl;

    return 0;
}
