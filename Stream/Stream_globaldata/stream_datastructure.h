#ifndef STREAM_DATASTRUCTURE_H
#define STREAM_DATASTRUCTURE_H
/*
 * 是定义了一个环形链表
 */
//链表节点
class listNode{
public:
    listNode(int val):value(val){}

public:
    listNode * next;
    listNode * prev;
    int value;

};
//环形链表
class circularlist
{
public:
    circularlist(int t1,int t2);
    listNode* getNextNode();
    bool addNode(int nodeval);
public:
    listNode * head;
    listNode * tail;
    listNode * cur;
};

class stream_datastructure
{
public:
    stream_datastructure();
};

#endif // STREAM_DATASTRUCTURE_H
