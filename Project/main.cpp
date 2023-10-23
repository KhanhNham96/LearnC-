#include <iostream>
#include <vector>
#include <map>
#include "Book.h"
#include "User.h"

// Mock Data
std::vector<Book> books = {
    {101, "The Great Gatsby", "F. Scott Fitzgerald", "Fiction", 1925},
    {102, "1984", "George Orwell", "Dystopian", 1949},
    {103, "To Kill a Mockingbird", "Harper Lee", "Fiction", 1960},
    {104, "Brave New World", "Aldous Huxley", "Dystopian", 1932},
    {105, "The Catcher in the Rye", "J.D. Salinger", "Fiction", 1951}
};

std::vector<User> users = {
    {"U001", "Alice Smith", "password1", User::LIBRARIAN},
    {"U002", "Bob Johnson", "password2", User::MEMBER},
    {"U003", "Charlie Lee", "password3", User::MEMBER}
};

std::map<std::string, std::vector<int>> borrowedBooks = {
    {"U002", {102}},
    {"U003", {105}}
};

int main() {
    // Sample code to print book titles
    // Note: Add the getTitle() method to the Book class to make this work
    for(const Book& book : books) {
        std::cout << book.getTitle() << std::endl;
    }

    return 0;
}
