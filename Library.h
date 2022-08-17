#ifndef _LIBRARY_H
#define _LIBRARY_H
#include "Document.h"
#include "Book.h"
#include <list>

class Library
{   
    private:
    int num_docs = 0;
    Document** docs;
    Document* lone_book; /* I know its not good to only give the library one book to store
    but time was running out and my array of pointers using the docs declared above wasn't working
    */

    public:
    void addDocument(Document *document) ; // add a Document pointer to the Library
    bool hasDocument(int ID); // check if document is in library by ID
    //hasDocument will return 1 if document found and 0 if not
};

#endif