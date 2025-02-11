#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Մուտքագրեք քառանիշ թիվ: ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Խնդրում ենք մուտքագրել քառանիշ թիվ։" << endl;
        return 1;
    }

    int sum = 0;
    int temp = number;

    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    cout << "Թվանշանների գումարը " << number << " թվի համար է՝ " << sum << endl;

    return 0;
}
