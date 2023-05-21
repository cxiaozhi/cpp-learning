#include "linkList.h"
// 1. 有头链表  实践看来 无头链表写起来更方便
HeadNode createLinkList(int num)
{
  HeadNode headNode;
  headNode.next = NULL;
  Node *nowNode = NULL;
  if (num == 0)
  {
    return headNode;
  }
  // 首先需要一个一个开辟空间
  for (int i = 0; i < num; i++)
  {
    /* code */
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = i;
    newNode->next = NULL;
    if (0 == i)
    {
      headNode.next = newNode;
      nowNode = headNode.next;
    }
    else
    {
      nowNode->next = newNode;
      // 要保证nowNode 指向最后一个节点
      nowNode = newNode;
    }
  }
  headNode.length = num;
  return headNode;
};

// 2. 插入数据
void insertLinkListByIndex(int val, Position index, LinkList &L)
{
  if (0 <= index && index <= L.length)
  {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    // 查找指针 滑到了的那个节点
    if (0 < L.length)
    {
      // 第0个节点
      Node *nowNode = L.next;
      Node *lastNode;
      // 假如是0 不需要找
      // 先找到要插入位置的节点 保存
      for (int i = 0; i < L.length; i++)
      {
        lastNode = nowNode;
        nowNode = nowNode->next;
      }
      if (index == 0)
      {
        L.next = newNode;
        newNode->next = lastNode;
      }
      else
      {
        if (lastNode->next)
        {
          newNode->next = lastNode->next;
          lastNode->next = newNode;
        }
        else
        {
          lastNode->next = newNode;
        }
      }
    }
    else
    {
      L.next = newNode;
    }
    ++L.length;
  }
  else
  {
    std::cout << "索引值超出有效范围！！！" << std::endl;
    std::cout << "索引最大值为: " << L.length << std::endl;
  }
};

// 3. 删除数据
void deleteNodeLinkList(LinkList &L, Position index)
{
  // 先判断index的合法性
  if (0 <= index && index < L.length)
  {
    // 判断是否是删除首节点
    if (index == 0)
    {
      // 保存第二个节点
      Node *oneNode = L.next->next;
      // 先释放原先的首节点
      free(L.next);
      // 再链接新的首节点
      L.next = oneNode;
    }
    else
    {
      Node *lastNode;
      Node *nowNode;
      nowNode = L.next;
      for (int i = 0; i < index; i++)
      {
        lastNode = nowNode;
        nowNode = nowNode->next;
      }
      if (nowNode->next)
      {
        lastNode->next = nowNode->next;
        free(nowNode);
      }
      else
      {
        // 如果删除的是最后一个节点
        free(lastNode->next);
        lastNode->next = nullptr;
      }
    }
    --L.length;
  }
  else
  {
    std::cout << "索引值超出有效范围！！！" << std::endl;
    std::cout << "索引最大值为: " << L.length - 1 << std::endl;
  }
};
// 4. 查找数据
int findLinkListByIndex(LinkList &L, Position index)
{
  if (index >= 0 && index < L.length)
  {
    Node *nowNode;
    nowNode = L.next;
    for (int i = 0; i < index; i++)
    {
      nowNode = nowNode->next;
    }
    return nowNode->data;
  }
  else
  {
    std::cout << "索引值超出有效范围！！！" << std::endl;
    std::cout << "索引最大值为: " << L.length - 1 << std::endl;
    return -1;
  }
};

// 5. 遍历数据
void travelLinkList(LinkList &L)
{
  if (L.length > 0)
  {
    Node nowNode;
    for (int i = 0; i < L.length; i++)
    {
      if (0 == i)
      {
        nowNode = *L.next;
      }
      else
      {
        nowNode = *nowNode.next;
      }
      std::cout << "第" << i << "个节点data值: " << nowNode.data << std::endl;
    }
  }
  else
  {
    std::cout << "此链表为空！" << std::endl;
  }
};

// 6. 修改数据
void modifyLinkList(LinkList &L, Position index, int val)
{
  if (index >= 0 && index < L.length)
  {
    Node *nowNode;
    nowNode = L.next;
    for (int i = 0; i < index; i++)
    {
      nowNode = nowNode->next;
    }
    nowNode->data = val;
  }
  else
  {
    std::cout << "索引值超出有效范围！！！" << std::endl;
    std::cout << "索引最大值为: " << L.length - 1 << std::endl;
  }
};

// 7. 销毁链表
void destroyLinkList(LinkList &L)
{
  Node *nowNode = L.next;
  while (nowNode != NULL)
  {
    // 先保存当前节点地址
    Node *tempNode = nowNode;
    // 更新当前节点变量
    nowNode = nowNode->next;
    // 释放保存的节点
    free(tempNode);
  }
  L.next = nullptr;
  L.length = 0;
  std::cout << "链表销毁成功！" << std::endl;
};