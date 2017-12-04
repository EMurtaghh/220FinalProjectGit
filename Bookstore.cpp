//
// Created by bnkei on 12/3/2017.
//

#include "Bookstore.h"

Bookstore::Bookstore() {
    library = new ArrayList<Book>(10);
}

Bookstore::~Bookstore() {
    delete[] library;
}

void Bookstore::addBook() {
    std::string title;
    std::cout<<"Please enter book title:"<<std::endl;
    std::cin>>title;
    std::string author;
    std::cout<<"Please enter author:"<<std::endl;
    std::cin>>author;
    double price;
    std::cout<<"Please enter book price:"<<std::endl;
    std::cin>>price;
    int have;
    std::cout<<"Please enter quantity have:"<<std::endl;
    std::cin>>have;
    int want;
    std::cout<<"Please enter quantity want:"<<std::endl;
    std::cin>>want;
    Book* bookToAdd = new Book(title,author,price,have,want);
    library->insertAtEnd(bookToAdd);
}

void Bookstore::printLibrary() {
    for (int i = 0; i < library->itemCount(); ++i) {
        std::cout<<" "<<std::endl;
        Book* current = library->getValueAt(i);
        std::cout<<current->getTitle();
        std::cout<<" by ";
        std::cout<<current->getAuthor();
        std::cout<<" $";
        std::cout<<current->getPrice();
        std::cout<<" have ";
        std::cout<<current->getHaveCount();
        std::cout<<" copies"<<std::endl;
    }
}
