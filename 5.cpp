#include <iostream>
using namespace std;
int Unluck(int num) {
    if (num < 100000 || num > 999999) {
        return 0;
    }
    int a = (num / 100000) + (num / 10000 % 10) + (num / 1000 % 10);
    int b = (num / 100 % 10) + (num / 10 % 10) + (num % 10);
    return (a == b) ? 1 : 0; // 1 - счастливое, 0 - не счастливое
}
int main() {
    setlocale(LC_ALL, "Russian");
    int num;
    cout << "Введите шестизначное число: ";
    cin >> num;
    int g = Unluck(num);
    if (g == 1) {
        cout << num << " является счастливым числом.\n";
    }
    else {
        cout << num << " не является счастливым числом.\n";
    }

    return 0;
}