#include <iostream>
using namespace std;
int sumInRange(int a, int b) {
    int sum = 0;
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a + 1; i < b; i++) {
        sum += i;
    }
    return sum;
}
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите 1 целое число: \n";
    cin >> a;
    cout << "Введите 2 целое число: \n";
    cin >> b;
    cout << "Результат: " << sumInRange(a, b) << endl;
    return 0;
}