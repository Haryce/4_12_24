#include <iostream>
using namespace std;
int Step(int a, int b) {
    int result = 1;
    if (b < 0) {
        a = 1 / a;
        b = -b;
    }
    for (int i = 1; i <= b; ++i) {
        result *= a;
    }
    return result;
}
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите основание: \n";
    cin >> a;
    cout << "Введите степень: \n";
    cin >> b;
    cout << "Результат: " << Step(a, b) << endl;
    return 0;
}
