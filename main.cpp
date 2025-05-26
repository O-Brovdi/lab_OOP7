#include "SkiResortFacade.h"
#include "LoggerSingleton.h"
#include <iostream>

class HardProcessor {
private:
    int start;
public:
    HardProcessor(int s) : start(s) {
        LoggerSingleton::GetInstance()->Log("HardProcessor created.");
    }

    int ProcessTo(int end) {
        int sum = 0;
        for (int i = start; i <= end; ++i) {
            sum += i;
        }
        LoggerSingleton::GetInstance()->Log("Processing finished. Result: " + to_string(sum));
        return sum;
    }
};

int main() {
    LoggerSingleton::GetInstance()->Log("Program started.");

    SkiResortFacade facade;
    int price = facade.HaveGoodRest(180, 70, 43, 2, 4);
    cout << "Vacation cost: $" << price << endl;

    HardProcessor processor(1);
    processor.ProcessTo(10);

    LoggerSingleton::GetInstance()->Log("Program ended.");
    return 0;
}
