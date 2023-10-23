#pragma once

#include <string>

class User {
public:
    enum Role { LIBRARIAN, MEMBER };

    User(const std::string& userID, const std::string& name, 
         const std::string& password, Role role);

    // getters and setters (to be implemented)

private:
    std::string userID;
    std::string name;
    std::string password;
    Role role;
};
