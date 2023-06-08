#include <iostream>
#include <cstdint>

using namespace std;

int get_user_value() {
    int value;
    cin >> value;
    return value;
}

int64_t get_factirial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    }
    else {
        return number * get_factirial(number - 1);
    }
}

bool check_user_value(int number) {
    return number >= 0;
}

int main()
{
    int user_value;
    int64_t factorial;

    cout << "Enter a non-negative number to find the factorial: ";
    user_value = get_user_value();    

    if (check_user_value(user_value)) {
        factorial = get_factirial(user_value);
        cout << "The factorial of " << user_value << " is " << factorial;
    }
    else {
        cout << "Input error";
    }    

    return 0;
}