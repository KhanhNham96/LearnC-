#include "Book.h"

Book::Book(int id, const std::string& title, const std::string& author, 
           const std::string& genre, int pubYear)
    : id(id), title(title), author(author), genre(genre), pubYear(pubYear), status(AVAILABLE) {}

// Implement the getters and setters here
