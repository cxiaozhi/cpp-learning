#include <iostream>
// 定义普通节点
typedef struct Node
{
  int data;
  Node *next;
  Node *last;
} Node;
// 定义头结点
typedef struct HeadNode
{
  int data;
  int length;
  Node *next;
  Node *last;
} HeadNode;

typedef HeadNode LinkList;
typedef int Position;
// 1. 创建指定元素个数的链表
HeadNode createLinkList(int num);
// 2. 插入数据
void insertLinkListByIndex(int val, Position index, LinkList &L);
// 3. 删除数据
void deleteNodeLinkList(LinkList &L, Position index);
// 4. 查找数据
int findLinkListByIndex(LinkList &L, Position index);
// 5. 遍历数据
void travelLinkList(LinkList &L);
// 6. 修改数据
void modifyLinkList(LinkList &L, Position index, int val);
// 7. 销毁链表
void destroyLinkList(LinkList &L);