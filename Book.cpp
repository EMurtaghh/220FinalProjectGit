//
// Book.cpp
//
#include "Book.h"
#include <iostream>
Book::Book(std::string bookTitle, std::string bookAuthor, double bookPrice, int haveCount, int wantCount){
    bookTitle=bookTitle;
    bookAuthor=bookAuthor;
    bookPrice=bookPrice;
    haveCount=haveCount;
    wantCount=wantCount;
}
//Book::Book(Book& bookToCopy){}; Will be done when needed
//getters
std::string Book::getAuthor() {
    return bookAuthor;
}
double Book::getPrice() {
    return bookPrice;
}
std::string Book::getTitle() {
    return bookTitle;
}
int Book::getHaveCount() {
    return haveCount;
}
int Book::getWantCount() {
    return wantCount;
}
//setters
void Book::setPrice(double newPrice) {
    bookPrice=newPrice;
}

//others
bool Book::inInventory() {
    if(bookTitle){
        return true;
    }else{
        return false;
    }
}

