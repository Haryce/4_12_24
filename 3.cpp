#include <iostream>
using namespace std;
void Pf(int a, int b) {
    for (int num = a; num <= b; ++num) {
        int sum = 0;
        for (int i = 1; i <= num / 2; ++i) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num && num != 0) {
            cout << num << " является совершенным числом." << endl;
        }
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите начало интервала: \n";
    cin >> a;
    cout << "Введите конец интервала: \n";
    cin >> b;
    cout << "Результат: ";
    Pf(a, b);
    return 0;
}