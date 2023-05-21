#include "seq_list.h"
int list[6] = {1, 2, 3, 4, 5, 5};

int main()
{
    std::cout << "print start" << std::endl;
    SqList head;
    int res = InitList_sq(head);
    std::cout << "表长度：" << head.length << " "
              << "表大小：" << head.listsize << "返回值res:" << res << std::endl;
    std::cout << "print end" << std::endl;
    return 0;
}