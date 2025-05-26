#include "LoggerSingleton.h"
#include <iostream>

LoggerSingleton* LoggerSingleton::instance = nullptr;

LoggerSingleton::LoggerSingleton() {}

LoggerSingleton* LoggerSingleton::GetInstance() {
    if (!instance) {
        instance = new LoggerSingleton();
    }
    return instance;
}

void LoggerSingleton::Log(const string& message) {
    cout << "[LOG]: " << message << endl;
}
