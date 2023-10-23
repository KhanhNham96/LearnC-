#pragma once

#include <string>

class Book {
public:
    enum BorrowStatus { AVAILABLE, BORROWED };

    Book(int id, const std::string& title, const std::string& author, 
         const std::string& genre, int pubYear);

    // getters and setters (to be implemented)

private:
    int id;
    std::string title;
    std::string author;
    std::string genre;
    int pubYear;
    BorrowStatus status;
};
