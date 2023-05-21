#include "linkList.h"
int main()
{
    HeadNode newHeadNode = createLinkList(10);
    travelLinkList(newHeadNode);
    destroyLinkList(newHeadNode);
    std::cout << "============" << std::endl;
    travelLinkList(newHeadNode);
    return 1;
}