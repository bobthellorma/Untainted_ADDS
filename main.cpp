#include <iostream>
#include "Book.h"
#include "Document.h"
#include "Library.h"

int main()
{
    // create Book and Library objects
    Library lib;
    Book* book = new Book(); // create pointer to Book called book

    // add book to library
    lib.addDocument(book);

    // check if book is in library
    std::cout << lib.hasDocument(11) << std::endl;
}