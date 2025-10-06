
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    
    cout << "=== ИГРА 'УГАДАЙ ЧИСЛО' ===" << endl;
    cout << "Я загадал число от 1 до 100." << endl;
    cout << "Попробуй угадать!" << endl;
    
    do {
        cout << "Твоя попытка: ";
        cin >> guess;
        attempts++;
        
        if (guess > secretNumber) {
            cout << "Слишком много! Попробуй меньше." << endl;
        } else if (guess < secretNumber) {
            cout << "Слишком мало! Попробуй больше." << endl;
        } else {
            cout << "ПОЗДРАВЛЯЮ! Ты угадал число " << secretNumber;
            cout << " за " << attempts << " попыток!" << endl;
        }
        
    } while (guess != secretNumber);
    
    return 0;
}

