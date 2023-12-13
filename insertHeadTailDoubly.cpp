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
int size(Node *head)
{
  Node *tmp = head;
  int cnt = 0;
  while (tmp != NULL)
  {
    cnt++;
    tmp = tmp->next;
  }
  return cnt;
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
void insertHead(Node *&head, int val)
{
  Node *newHead = new Node(val);
  newHead->next = head;
  head->pre = newHead;
  head = newHead;
}
void insertTail(Node *&tail, int val)
{
  Node *newTail = new Node(val);
  newTail->pre = tail;
  tail->next = newTail;
  tail = newTail;
}
void insert(Node *&head, Node *&tail, int pos, int val)
{
  Node *newNode = new Node(val);
  Node *tmp = head;
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  else if (tail == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  else if (pos == 0)
  {
    insertHead(head, val);
  }
  else if (pos == size(head))
  {
    insertTail(tail, val);
  }
  else
  {
    for (int i = 1; i <= pos - 1; i++)
    {
      tmp = tmp->next;
    }
    newNode->pre = tmp;
    newNode->next = tmp->next;
    tmp->next = newNode;
    tmp->next->next->pre = newNode;
  }
}
int main()
{
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  Node *c = new Node(40);
  Node *tail = c;

  head->next = a;
  a->pre = head;
  a->next = b;
  b->pre = a;
  b->next = c;
  c->pre = b;

  int pos, val;
  cin >> pos >> val;
  if (pos > size(head))
  {
    cout << "Invalid Position " << endl;
  }
  // else if (pos == 0)
  // {
  //   insertHead(head, val);
  //   print(head);
  //   printReverse(tail);
  // }
  else
  {
    insert(head, tail, pos, val);
    print(head);
    printReverse(tail);
  }

  return 0;
}
