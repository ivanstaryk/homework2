#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int sum = 0;
    for (int i = min(a, b); i <= max(a, b); i++) {
        if (i % 2 == 0)
            sum += i;
    }
    cout << "Sum of even numbers: " << sum << endl;

    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (x > 0)
        cout << "Positive" << endl;
    else if (x < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;

    const char* text = "Hello";
    cout << "Length: " << strlen(text) << endl;

    int num = 123;
    string s = to_string(num);
    cout << s << endl;

    for (int i = 0; i <= 999999; i++) {
        int n = i, s1 = 0, s2 = 0;

        for (int j = 0; j < 3; j++) {
            s2 += n % 10;
            n /= 10;
        }
        for (int j = 0; j < 3; j++) {
            s1 += n % 10;
            n /= 10;
        }

        if (s1 == s2)
            cout << i << endl;
    }

    return 0;
}
