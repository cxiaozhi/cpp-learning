#include <iostream>
// 定义一个节点
typedef struct Node
{
  int data;
  Node *next;

} Node;

// 1. 创建链表
int createLinkList(int num);
// 2. 插入数据
int insertLinkList(Node node, Node list);
// 3. 删除数据
void deleteNodeLinkList();
// 4. 查找数据
// 5. 遍历数据
// 6. 修改数据