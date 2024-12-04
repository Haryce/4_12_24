#include <iostream>
using namespace std;
void Cd(const char* rank, const char* suit) {
    cout << "Карточка с достоинством " << rank << " с мастью " << suit << endl;
}
int main() {
    setlocale(LC_ALL, "Russian");
    char rank[3]; 
    char suit[6]; 
    cout << "Введите достоинство карты (например, 2, 3, J, Q, K, A): ";
    cin >> rank;
    cout << "Введите масть карты (например, bubni, chervi, piki, trefi): ";
    cin >> suit;
    Cd(rank, suit);
    return 0;
}
