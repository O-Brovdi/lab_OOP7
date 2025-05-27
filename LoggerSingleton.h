#ifndef LOGGER_H
#define LOGGER_H

#include <string>

using namespace std;

class LoggerSingleton {
private:
    static LoggerSingleton* instance;
    LoggerSingleton();
    LoggerSingleton(const LoggerSingleton&) = delete;
    LoggerSingleton& operator=(const LoggerSingleton&) = delete;
public:
    static LoggerSingleton* GetInstance();
    void Log(const std::string& message);
};

#endif
