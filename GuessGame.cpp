#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;

int main() {
    srand(time(0));

    while (true) {
        
    int GuessNum;
    int SecretNum = rand() % 100 + 1;
    int Attempt = 0;

        cout << "======== Приветствую! Это игра 'Угадай число' ========" << endl;
        sleep(1);
        
        while (true) {
        cout << "======== Продолжить? y/n ========" << endl;
        sleep(1);
        char Cont;
        
            cin >> Cont;

            if (Cont == 'y') {
                cout << "======== Обработка... ========" << endl;
                sleep(2);
                cout << "======== Запуск... ========" << endl;
                sleep(1);
                break;
            } else if (Cont == 'n') {
                cout << "======== Обработка... ========" << endl;
                sleep(2);
                cout << "======== Выход... ========" << endl;
                sleep(1);
                return 0;
            } else {
                cout << "======== Ошибка ========" << endl;
                sleep (1);
                continue;
            }
        }

        cout << "======== Отлично, начинаем игру... ========" << endl;
        sleep(1);
        cout << "======== Загадано число от 1 до 100, Ваша задача его угадать ========" << endl;
        sleep(1);
        cout << "======== Введите число:" << endl;

        while (true) {

            if (!(cin >> GuessNum)) {
                cin.clear();
                cin.ignore(1000 ,'\n');
                cout << "======== Ошибка, Введите число ========" << endl;
                continue;
            }
 
            if (GuessNum > SecretNum) {
                Attempt++;
                sleep(1);
                cout << "======== Загаданое число МЕНЬШЕ ========" << endl;
                cout << "======== Попытка номер: " << Attempt << " ========" << endl;
                sleep(1);
                cout << "======== Повторите попытку ========" << endl;
            } else if (GuessNum < SecretNum) {
                Attempt++;
                sleep(1);
                cout << "======== Загаданое число БОЛЬШЕ ========" << endl;
                cout << "======== Попытка номер: " << Attempt << " ========" << endl;
                sleep(1);
                cout << "======== Повторите попытку ========" << endl;
            } else  if (GuessNum == SecretNum){
                Attempt++;
                sleep(1);
                cout << "======== Поздравляю! Вы угадали число с " << Attempt << " попытки! ========"<< endl;
                sleep (1);
                cout << "======== Хотите начать заново или выйти? y/n ========" << endl;
                char Stop;
                cin >> Stop;
                cin.clear();
                cin.ignore(1000 ,'\n');

                if (Stop == 'y') {
                    sleep (1);
                    cout << "======== Отлично, начинаем новую игру ========" << endl;
                    sleep (1);
                    break;
                } else if (Stop == 'n') {
                    sleep (1);
                    cout << "======== Выход... ========" << endl;
                    sleep (1);
                    return 0; 
                } else {
                    sleep (1);
                    cout << "======== Ошибка, Повторите попытку ========" << endl;
                }
                
            } else {
                sleep (1);
                cout << "======== Ошибка, Повторите попытку ========" << endl;
                cin.clear();
                cin.ignore(1000 ,'\n');
            }
            
        }
    }
    return 0;
}