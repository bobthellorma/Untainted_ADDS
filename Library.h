#ifndef _LIBRARY_H
#define _LIBRARY_H
#include "Document.h"
#include "Book.h"
#include <list>

class Library
{   
    private:
    Document* documents;

    public:
    void addDocument(Document *document) ; // add a Document pointer to the Library
    bool hasDocument(int ID); // check if document is in library by ID
    //hasDocument will return 1 if document found and 0 if not
};

#endif