#include "User.h"

User::User(const std::string& userID, const std::string& name, 
           const std::string& password, Role role)
    : userID(userID), name(name), password(password), role(role) {}

// Implement the getters and setters here
