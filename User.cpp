#include "User.h"

bool User::isvalid() {
    string testUserName;
	string testPassword = "";

	cout << "UserName : ";
    cin >> testUserName;
    

	cout << "\nPassword : ";
    cin >> testPassword;

    
    
    return false;
}


bool User::addUserName(){
    string TestUserName;
    cout << "Enter A New Username : ";
    cin >> TestUserName;
    
    bool valid = false;
    
    while(valid == false)
        for (int x = 0;  x < UserName.size() ; x++){
        //testing for same user name
        if(TestUserName == UserName.at(x)){
            cout << "UserName Already in Use";
        }
    }
        UserName.push_back(TestUserName);
        cout << "Username Has Been Set.\n";
        return true;
    }


void User::addUser() {
    
        addUserName();
}



User::User() {
//Beginning of program
    bool done = false;
    while(done == false){
	cout << "\tEnter A Command \n 1. Sign in\n 2. New User";
        int input = 0;
        cin >> input;
        
        
//To Sign in
        if (input == 1) {
            isvalid();
            system("cls");
            done = true;
        }
//To create a new User
        if (input == 2) {
            addUser();
            done = true;
        }
        
    }
}


User::~User() {}
