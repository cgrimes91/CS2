#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_
////////////////////////////////////////////////////////////////////////////
//
// File: stack.hpp
//
// Programmer: Chris Grimes
// Updated:    3/2019
//
//
//
//

#include <new>
#include "../string/string.hpp"
#include<cassert>

////////////////////////////////////////////////////////////////////////////
//           
template<typename T> 
class Node {
public:
  T data;
  Node<T> *next;
  Node():next(0){};
  Node(const T& item): data(item), next(0){};
};
////////////////////////////////////////////////////////////////////////////
// CLASS INV:
//
//    
template <typename T>
class stack {
public:
              stack     (): tos(0){};
              stack     (const stack<T>&);
              ~stack    ();
    void      swap      (stack<T>&);
  stack<T>& operator= (stack<T> rhs){swap(rhs); return *this;};
  bool      empty     () const{return tos==0;};
	bool      full      () const;
	T         top       () const;
	T         pop       ();
	void      push      (const T&);

private:
	Node<T>   *tos;
};
template<typename T>
void stack<T>::push(const T& item){
  assert(!full()); // checks to make sure stack is not full
  Node<T> *temp= new Node<T>(item); // creates new node
  temp->next=tos; // tos now points to new node
  tos=temp; // cleans up temp ptr
}
template<typename T>
T stack<T>::pop(){
  assert(!empty()); // checks to make sure stack is not empty
  T result= tos->data; // saves result for returning
  Node<T> *temp= tos; // creates a pointer to tos
  tos= tos->next; // moves tos pointer down one
  delete temp; // cleans up old tos
  return result; // resturns old tos value
}
template<typename T>
stack<T>::~stack(){
  Node<T> *temp= 0; // declares a ptr
  while(tos!=0){
    temp=tos; // temp ptr pointes to current tos
    tos= tos->next; // increments tos pointer
    delete temp; // cleans up old tos
  }
}
template<typename T>
stack<T>:: stack(const stack<T>& actual):stack(){
  Node<T> *temp= actual.tos, *bottom; //creates pointers
  while(temp!=0){
    if(tos==0){
      tos= new Node<T>(temp->data); // tos points at a node that is a copy of actual
      bottom= tos; // bottom ptr is assigned to actuals tos
    }
    else{
      bottom->next= new Node<T>(temp->data); // bottoms next points to a copy of temps data
      bottom= bottom->next; // increments bottom
    }
    temp= temp->next; // increments temp to move further down actual
  }
}
template<typename T>
void stack<T>::swap(stack<T>& rhs){
  Node<T> *temp= tos;
  tos= rhs.tos;
  rhs.tos= temp;
}
template<typename T>
bool stack<T>:: full()const{
  Node<T> *temp= new (std::nothrow) Node<T>(); // has new return 0
  if(temp==0) return true; // returns true if temp couldn't be added to stack
  delete temp; // cleans up temp
  return false; // returns false if temp was added to stack
}
template<typename T>
T stack<T>:: top() const{
  return tos->data; // returns the data that tos points to
}

#endif

