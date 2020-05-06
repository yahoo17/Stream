#include "stream_datastructure.h"

stream_datastructure::stream_datastructure()
{

}

circularlist::circularlist(int t1, int t2)
{
    head=new listNode(t1);
    tail=new listNode(t2);
    head->next=tail;
    tail->next=head;
}

listNode *circularlist::getNextNode()
{
    static listNode * cur=head;
    cur=cur->next;
    return  cur;
}

bool circularlist::addNode(int nodeval)
{
    listNode * temp =new listNode(nodeval);
    if(temp==0)
        return false;
    else
    {
        tail->next=temp;
        temp->next=head;
        temp=nullptr;
        return true;
    }



}
