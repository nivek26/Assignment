#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class User {
private:
	vector<string> UserName;
	vector<string> Password;
public:
	bool isvalid();
	void validateUser();
	void addUser();
    bool addUserName();

	User();
	~User();
};
