#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Մուտքագրեք թիվ: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " զույգ է։" << endl;
    } else {
        cout << number << " կենտ է։" << endl;
    }

    return 0;
}
