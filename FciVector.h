#ifndef FCIVECTOR_H
#define FCIVECTOR_H

#include <iostream>

#include <string>

//#include <cstdlib>

using namespace std;

template <class T>
class FciVector {
private:
    int SizeOfList;
    T* list;
    int cap;

public :
    FciVector();
    void menu();
    //void push(T);
    void pop();

    //void erase(T*);
    void clear();
    int dis_size();
    int dis_cap();
    void dis_all();
    T* begin();
    T dis_One_element(int);
    bool empty();
    T& front();
    T& back();

};
template <class T>

void FciVector<T>::menu()
{
    cout<<"1. Add element"<<endl;
    cout<<"2. Remove last element"<<endl;
    cout<<"3. Insert element at certain position"<<endl;
    cout<<"4. Erase element from a certain position"<<endl;
    cout<<"5. Clear"<<endl;
    cout<<"6. Display first element"<<endl;
    cout<<"7. Display last element"<<endl;
    cout<<"8. Display element at certain position"<<endl;
    cout<<"9. Display vector size"<<endl;
    cout<<"10. Display vector capacity"<<endl;
    cout<<"11. Is empty?"<<endl;
}



template <class T>

void FciVector<T>::dis_all()
{
    cout<<"Your Vector elements: "<<endl;
    for(int i=0;i<SizeOfList;i++)
        cout<<list[i]<<endl;
}

template <class T>

T& FciVector<T>::front()
{
    return list[0];
}

template <class T>

T& FciVector<T>::back()
{
    return list[SizeOfList-1];
}
template <class T>

void FciVector<T>::pop()
{
    list[SizeOfList-1]=list[SizeOfList];
    SizeOfList --;
}

template <class T>
FciVector<T>::FciVector()
{
    SizeOfList = 0;
    cap=10;
    list = new T[cap+1];
}

template <class T>
T* FciVector<T>::begin()
{
    return &list[0];
}

template <class T>
int FciVector<T>::dis_size()
{
    return SizeOfList;
}

template <class T>
int FciVector<T>::dis_cap()
{
    return cap;
}

template <class T>

T FciVector<T>::dis_One_element(int index)
{
    return list[index-1];
}

template <class T>
bool FciVector<T>::empty()
{
    if(SizeOfList==0)
        return true;
    else
        return false;

}
template <class T>
void FciVector<T>::clear()
{
    delete list;
    list=NULL;
    SizeOfList = 0;
}



#endif // FCIVECTOR_H