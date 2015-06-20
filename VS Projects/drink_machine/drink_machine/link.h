#include < iostream.h >
#include < stdlib.h >
#include < stdio.h >
#include <conio.h>

/*class Node 
{
protected:
Node* next;
int data; 

public:
 
Node(int d){data = d}
friend class Stack;
};

class Stack 
{
public:
Stack(){top->next=NULL; length=0;}
~Stack()
{
	while(top!=NULL)
  {
   Node* toDelete=top;
   top=top->next;
   delete toDelete;
  }
}

void push(int d)
{
	Node *n=new Node(d);
	n->next=top;
	top=n;
	length++;
}

void push(int d)
{
	Node *n=new Node(d);
	n->next=top;
	top=n;
	length++;
}

int pop()
{
	Node* oldtop=top;
	top=top->next;
	int oldtopdata=oldtop->data;
	delete(oldtop);
	--length;
	return oldtopdata;
}

void displaystack()
{
	Node* current=top;
	whiie{ current->next!=NULL)
	  {
	   cout <<current->data<<endl;
	   current=current->next;
	  }
}

int getlength()
{
	return length;
}

private:
Node *top;
int length;

};
*/

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

