//
// Book.h
//

#ifndef INC_220FINALPROJECT_BOOK_H
#define INC_220FINALPROJECT_BOOK_H
class Book{
private:

public:
    virtual ~Book(){};
    virtual std::string getAuthor()=0;
    virtual std::string getTitle()=0;
    virtual bool inInventory()=0;
    virtual int HaveCount()=0;
    virtual int WantCount()=0;
    virtual int setPrice()=0;
    virtual std::string getPrice()=0;



};
#endif //INC_220FINALPROJECT_BOOK_H
