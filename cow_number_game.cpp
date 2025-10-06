#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// Функция для вывода через cowsay
void cowSay(const string& message) {
    string command = "cowsay '" + message + "'";
    system(command.c_str());
}

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    
    // Приветствие через корову
    cowSay("Привет! Я загадал число от 1 до 100");
    cout << "Попробуй угадать!" << endl;
    
    do {
        cout << "Твоя попытка: ";
        cin >> guess;
        attempts++;
        
        if (guess > secretNumber) {
            cowSay("Слишком много! Попробуй меньше");
        } else if (guess < secretNumber) {
            cowSay("Слишком мало! Попробуй больше");
        } else {
            string winMessage = "ПОЗДРАВЛЯЮ! Ты угадал число " + 
                               to_string(secretNumber) + " за " + 
                               to_string(attempts) + " попыток!";
            cowSay(winMessage);
            
            // Специальные сообщения в зависимости от количества попыток
            if (attempts <= 5) {
                cowSay("Ты гений! 🎯");
            } else if (attempts <= 10) {
                cowSay("Хороший результат! 👍");
            } else {
                cowSay("Могло быть и лучше... 😅");
            }
        }
        
    } while (guess != secretNumber);
    
    return 0;
}
