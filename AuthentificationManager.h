#pragma once

# #ifndef AuthentificationManager
#define AuthentificationManager
#include <unordered_map>
#include "User.h"
#include <string>

class AuthentificationManager {

private:
	// Stores email and password pairs
	std::unordered_map<std::string, std::string> users;

public: 
	bool registerUser(const std::string& email, const std::string& password);

};


#endif // !AuthentificationManager

