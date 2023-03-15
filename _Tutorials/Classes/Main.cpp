// VIEW PREVIOUS COMMITS FOR MORE INFO ON CLASSES AND STRUCTS

#include <iostream>

using namespace std;

class Log {
public:
	enum Level {
		LevelError, LevelWarning, LevelInfo // Starts at 0 by default
	};
private:
	Level m_LogLevel = LevelInfo; // "m_" indicates it is class member variable that is private
public:
	void SetLevel(Level level) {
		m_LogLevel = level;
	}

	void Error(const char* message) {
		if (m_LogLevel >= LevelError) {
			cout << "[ERROR]: " << message << endl;
		}
	}

	void Warn(const char* message) {
		if (m_LogLevel >= LevelWarning) {
			cout << "[WARNING]: " << message << endl;
		}
	}

	void Info(const char* message) {
		if (m_LogLevel >= LevelInfo) {
			cout << "[INFO]: " << message << endl;
		}
	}
};

int main() {

	Log log;
	log.SetLevel(Log::LevelWarning);
	log.Warn("Hello!");
	log.Error("Hello!");
	log.Info("Hello!");

	cin.get();
}