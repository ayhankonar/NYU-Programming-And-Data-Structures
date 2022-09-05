//
//  main.cpp
//  LInkedLists
//
//  Created by Ayhan Konar on 2/3/22.
//

//I. TEMPLATE CLASS
/*
#include <iostream>
using namespace std;

template<class T>
class SomeVal{
    T data;
public:
    T getVal() const{return data;}
    void setVal(T newValue);
};
template<class T> // <-- HAVE TO HAVE THIS HERE!
void SomeVal<T>::setVal(T newValue){
    data = newValue;
}


int main() {
    SomeVal<int> var1;
    var1.setVal(100);
    cout << var1.getVal() << endl;
    
    SomeVal<char> var2;
    var2.setVal('p');
    cout << var2.getVal() << endl;
    
    return 0;
}

*/

//II. TEMPLATE FUNCTION EXAMPLE
/*
#include <iostream>
#include <string>
using namespace std;

template<class T>
void mySwap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
template<class T, class U>
U getMax(T &c, U &d){
    return (c>d?c:d);
}
template<class T, class U>
void mySwap(T &a, U &b){
    T temp = a;
    a = b;
    b = temp;
}
 int main() {
     int a = 100;
     int b = 120;
     cout << "Before " << a << " " << b << endl;
     mySwap<int>(a, b); // can also be mySwap(a,b)
     cout << "After " << a << " "  << b << endl;
     
     int c = 80;
     float result;
     float d = 90.06787;
     result = getMax(c,d);
     cout << result << endl;
     
     int a2 = 100;
     float b2 = 120.8967;
     cout << "Before " << a2 << " " << b2 << endl;
     mySwap(a2, b2); // can also be mySwap(a,b)
     cout << "After " << a2 << " "  << b2 << endl;
     
     return 0;
 }
 */

//III. LINKED LIST NODE
#include<iostream>
using namespace std;

template <class T>
class node;

template <class T>
class LList{
    node<T> *head;
    node<T> *recursiveCopy(node<T> *rightHandSide);
public:
    LList():head(nullptr){} //constructor
    LList(const LList &rightHandSide) : head(nullptr) {*this = rightHandSide;} // what?
    
    LList<T> &operator = (const LList<T> &rightHandSide);
    
    ~LList(){clear();}
    
    void insertAtHead(T newdata);
    T removeFromHead();
    bool isEmpty() const { return head == nullptr;}
    void clear();
    void insertAtEnd(T newData);
    void insertAtPoint(node<T> *ptr, T newdata);
    int size() const;
};
template<class T>
node<T> *LList<T>::recursiveCopy(node<T> *rightHandSide){
    if (rightHandSide == nullptr){
        return nullptr;
        return new node<T>(rightHandSide->data, recursiveCopy(rightHandSide->next));
    }
}

template <class T>
int LList<T>::size() const{
    int count = 0;
    node<T> *temp = head;
    while (temp != nullptr){
        count ++;
        temp = temp->next;
    }
    return count;
}

template <class T>
void LList<T>::insertAtEnd(T newdata){
    if (isEmpty()){
        insertAtHead(newdata);
        return;
    }
    node<T> *temp = new node<T>(newdata);
    node<T> *endFinder = head;
    while (endFinder->next != nullptr)
        endFinder = endFinder->next;
    endFinder->next = temp;
}

template <class T>
class node{
    T data;
    node<T> *next;
public:
    node(T newdata = T(), node<T> *newNext = nullptr):
        data(newdata), node(newNext){};
    friend class LList<T>;
};


