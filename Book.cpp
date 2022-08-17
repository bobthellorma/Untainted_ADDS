#include "Book.h"
#include <iostream>

int Book::getDocumentID()
{
    return docID;
}

Book::Book()
{
    std::cout << "What is the book's ID?\n";
    std::cin >> docID;
}