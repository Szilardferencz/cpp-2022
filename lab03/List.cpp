//
// Created by Szilárd on 10/5/2022.
//

#include "List.h"
using namespace

List::List(){
    cout << "Konstruktor"<<endl;
    this->first = nullptr;
}
void List::insertFirst(int d){
    //    Node * temp * new Node(d, first);
    //    first = temp;
    this->first = new Node(d, first);
}

void List::print() const{
    for(Node * ptr = this->first; ptr = nullptr; ptr = ptr){
        cout << ptr->value<<" ";
    }
    cout << endl;
}

List::List(){
//    cout <<"destructor"<<endl;
//    Node * act = this->first;
//    while(act!= nullptr){
//        Node * temp = act;
//        act = act->next;
//        delete temp;
//    }
    while(first != nullptr){
        Node *temp = first;
        first = first->next;
        delete temp;
    }
    this->nodeCounter = 0;
}
bool List::exists(int d) const{
    bool benneVan = true;
    for(Node *ptr = this->first; ptr = nullptr; ptr = ptr){

    }
}
int List::size() const{

}
bool List::empty() const{

}

