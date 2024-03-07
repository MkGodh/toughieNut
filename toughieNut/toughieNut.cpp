#include <iostream>
#include <string>
#include <Windows.h>
#include <cstring>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int timer = 0;

    string answer;
    for (int counter = 10; answer != "Да"; counter -= 1) {
        cout << "Вы должны обезвредить бомбу!" << counter << " секунд до взрыва!!!Обрезать провод сейчас? "; cin >> answer;
        if (counter == 0) {
            cout << "Бамба взорвалась, все погибли!";
            break;
        }
        if (answer == "Да") {
            cout << "Бомба обезврежена! " << counter << " секунд оставалось до взрыва!";
            break;
        }
    }



}