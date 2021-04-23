#include <iostream>
#include <vector>
#include "ScreenClear.h"

ScreenClear screenClear = ScreenClear();
std::vector<int> numberArr;
std::vector<int> awnserArr;
int tempNumber;
bool playing;

int main() {
    playing = true;
    numberArr.emplace_back(rand() % 10);
    numberArr.emplace_back(rand() % 10);
    numberArr.emplace_back(rand() % 10);

    while(playing) {
        awnserArr.clear();
        for (int i = 0; i < numberArr.size(); ++i) {
            std::cout << numberArr[i] << std::endl;
        }

        //delay and screenclear
        screenClear.ClearScreen();
        std::cout << "Insert numbers:" << std::endl;

        for (int i = 0; i < numberArr.size(); ++i) {
            std::cin >> tempNumber;
            awnserArr.emplace_back(tempNumber);

            if (awnserArr[i] != numberArr[i]) {
                std::cout << "GAME OVER :(" << std::endl;
                playing = false;
                return 0;
            }
        }
        std::cout << "NEXT ROUND" << std::endl;
        //add number to array
        numberArr.emplace_back(rand() % 10);
    }

    //return 0;
}
