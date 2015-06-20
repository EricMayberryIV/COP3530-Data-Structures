#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


class Cell
{
friend class Stacker;
public:
   Cell(void *ptr, Cell *lst)
   {
      item = ptr;
      next = lst;
   }
private:
   void *item;
   Cell *next;
};

class Stacker
{
public:
   Stacker(void (* d)(void *)) { dispfn = d; head = NULL; }
   void  push(void *t)
   {
      Cell *ptr;
      if (t == NULL) return;
      Cell *h = new Cell(t, head);
      head = h;
   }
   void *pop()
   {
      if (head == NULL) return NULL;
      void *ptr = head;
      void *t = head->item;
      head = head->next;
      delete ptr;
      return t;
   }
   void display()
   {
     if (head == NULL) { cout << "(empty)\n";  return; }
     for (Cell *t=head ; t != NULL ; t=t->next) (dispfn)(t->item);
     printf("\n");
   }
   int   empty()  {  return head == NULL;  }
private:
   Cell *head;
   void (* dispfn)(void *);
};

void intdisplay(void *t)
{
   cout << *(int *)t << " ";
}

class IntStack
{
public:
   IntStack() { stk = new Stacker(intdisplay);  }
   void push(int data)
   {
      int *n = new int;
      *n = data;
      stk->push(n);
   }
   int pop()
   {
      void *ptr = stk->pop();
      if (ptr == NULL) return -1;
      return *(int *)ptr;
   }
   void display() { stk->display(); }
private:
   Stacker *stk;

};

