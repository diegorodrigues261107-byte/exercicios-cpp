#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, media;

    cout << "=== SISTEMA DE MEDIA ===" << endl;

    cout << "Digite a primeira nota: ";
    cin >> n1;

    cout << "Digite a segunda nota: ";
    cin >> n2;

    cout << "Digite a terceira nota: ";
    cin >> n3;

    media = (n1 + n2 + n3) / 3;

    cout << "\nMEDIA FINAL: " << media << endl;

    if (media >= 60)
        cout << "Status: APROVADO" << endl;
    else
        cout << "Status: REPROVADO" << endl;

    return 0;
}
