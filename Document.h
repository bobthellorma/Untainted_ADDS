#ifndef _DOCUMENT_H
#define _DOCUMENT_H

class Document
{
    protected:
    int docID; /* create a book ID so that this interface will work
    with multiple documents*/

    public:
    virtual int getDocumentID() = 0; // function is purely virtual
};

#endif