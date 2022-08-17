#include "Library.h"
#include "Document.h"

void Library::addDocument(Document *document)
{
    documents[i] = document;
}

bool Library::hasDocument(int ID)
{
    for (int i = 0; i < 5; i++)
    {
        if(ID == docs_list[i]->docID)
        {
            return true;
        }
    }
    return false;
}