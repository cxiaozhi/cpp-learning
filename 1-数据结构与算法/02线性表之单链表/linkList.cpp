#include "linkList.h"

int main()
{
  // 创建一个头节点
  Node headNode;
  headNode.next = NULL;
  Node newNode;
  newNode.data = 3;
  newNode.next = NULL;
  Node sNode = newNode;
  sNode.data = 4;
  std::cout << "newNode data: " << newNode.data << std::endl;
  std::cout << "sNode data: " << sNode.data << std::endl;
  return 1;
}