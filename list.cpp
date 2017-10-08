//
// Created by Gao on 2017/10/8.
//


#include <iostream>
#include "list.h"
using namespace std;

List::List(int size) {
    m_iSize = size;
    m_pList = new int[m_iSize];
    m_iLength = 0;
}

List::~List() {
    delete []m_pList;
    m_pList = NULL;
}

void List::ClearList() {
    m_iLength = 0;
}

bool List::ListEmpty() {
    if (m_iLength == 0) {
        return true;
    } else {
        return false;
    }
}

int List::ListLength() {
    return m_iLength;
}

bool List::GetElement(int i, int *e) {
    if (i < 0 || i >= m_iSize){
        return false;
    }
    *e = m_pList[i];
    return true;
}

int List::LocateElement(int *e) {
    for (int i = 0; i < m_iLength; i++) {
        if (m_pList[i] = *e) {
            return i;
        }
    }
    return -1;
}

bool List::PriorElement(int *currentElement, int *preElement) {
    int temp = LocateElement(currentElement);
    if (temp == -1) {
        return false;
    } else {
        if (temp == 0){
            return false;
        } else {
            *preElement = m_pList[temp - 1];
            return true;
        }
    }
}

bool List::NextElement(int *currentElement, int *nextElement) {
    int temp = LocateElement(currentElement);
    if (temp == -1) {
        return false;
    } else {
        if (temp == m_iLength - 1) {
            return false;
        } else {
            *nextElement = m_pList[temp + 1];
            return true;
        }
    }
}

void List::ListTraverse() {
    for (int i = 0; i < m_iLength; i++) {
        cout << m_pList[i] << endl;
    }
}
