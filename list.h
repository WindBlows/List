//
// Created by Gao on 2017/10/8.
//

#ifndef LIST_LIST_H
#define LIST_LIST_H

class List{
public:
    List(int size);
    ~List();
    void ClearList();
    bool ListEmpty();
    int ListLength();
    bool GetElement(int i, int *e);
    int LocateElement(int *e);
    bool PriorElement(int *currentElement, int *preElement);
    bool NextElement(int *currentElement, int *nextElement);
    void ListTraverse();
private:
    int *m_pList;
    int m_iSize;
    int m_iLength;
};
#endif //LIST_LIST_H
