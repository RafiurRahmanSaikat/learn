#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  Node *pre;
  int val;
  Node *next;
  Node(int val)
  {
    this->pre = NULL;
    this->val = val;
    this->next = NULL;
  }
};
void print(Node *head)
{
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}
void printReverse(Node *tail)
{
  Node *tmp = tail;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->pre;
  }
  cout << endl;
}

int main()
{
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  Node *tail = b;

  head->next = a;
  a->pre = head;
  a->next = b;
  b->pre = a;

  print(head);
  printReverse(tail);
  return 0;
}
