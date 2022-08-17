#include "Library.h"
#include "Document.h"
#include <iostream> // for debugging

void Library::addDocument(Document *document)
{
    lone_book = document;
    num_docs++;

}

bool Library::hasDocument(int ID)
{
    if (ID == lone_book->getDocumentID()) /* this is sub-type polymorphism as I am using
    getDocumentID() which was initially declared in the Document class as a purely virtual function
    However, it was later overriden in the Book Class, and hence when this is called, the book class
    version of getDocumentID is called.
    */
    {
        return true;
    }
    return false;
}