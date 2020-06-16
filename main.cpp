#include <iostream>

#include "FciVector.h"

using namespace std;
int main()
{
    int choice1,choice2;

    while(true)
    {
        cout<<"Insert type of vector "<<endl;
        cout<<"1-Integers"<<endl;
        cout<<"2-Characters"<<endl;
        cout<<"3-Strings"<<endl;
        cout<<"4-Float"<<endl;
        cout<<"5-Students"<<endl;
        cout<<"6-Exit"<<endl;
        cin>>choice1;
        if(choice1==1)
        {
            FciVector<int>intergers;
            while (1)
            {
                intergers.menu();
                cin>>choice2;

                if(choice2==2)
                {
                    intergers.pop();
                }
                else if(choice2==5)
                {
                    intergers.clear();
                    cout<<"Vector empty now"<<endl;
                }
                else if(choice2==6)
                {
                    cout<<"First element in the vector is: "<<intergers.front()<<endl;

                }
                else if(choice2==7)
                {
                    cout<<"Last element in the vector is: "<<intergers.back()<<endl;

                }

                else if(choice2==9)
                {
                    cout<<"Vector size: "<<intergers.dis_size()<<endl;
                }
                else if(choice2==10)
                {
                    cout<<"Vector capacity: "<<intergers.dis_cap()<<endl;
                }
                else if (choice2==11)
                {
                    if (intergers.empty())

                        return true;
                    else
                        return false;
                }
                else
                {
                    cout<<"Invalid input "<<endl;
                }

            }

        }

    if(choice1==2)
    {
        FciVector<char>characters;
        char element;
        char* ptr;
        while (1)
        {
            characters.menu();
            cin>>choice2;
             if(choice2==2)
            {
                characters.pop();
            }
            else if(choice2==5)
            {
                characters.clear();
                cout<<"Vector empty now"<<endl;
            }
            else if(choice2==6)
            {
                cout<<"First element in the vector is: "<<characters.front()<<endl;

            }
            else if(choice2==7)
            {
                cout<<"Last element in the vector is: "<<characters.back()<<endl;

            }

            else if(choice2==9)
            {
                cout<<"Vector size: "<<characters.dis_size()<<endl;
            }
            else if(choice2==10)
            {
                cout<<"Vector capacity: "<<characters.dis_cap()<<endl;
            }
            else if (choice2==11)
            {
                if (characters.empty())

                    return true;
                else
                    return false;
            }
            else
            {
                cout<<"Invalid input "<<endl;
            }

        }

    }
    if(choice1==3)
    {
        FciVector<string>strings;
        string element;
        string* ptr;
        while (1)
        {
            strings.menu();
            cin>>choice2;

         if(choice2==2)
            {
                strings.pop();
            }
            else if(choice2==5)
            {
                strings.clear();
                cout<<"Vector empty now"<<endl;
            }
            else if(choice2==6)
            {
                cout<<"First element in the vector is: "<<strings.front()<<endl;

            }
            else if(choice2==7)
            {
                cout<<"Last element in the vector is: "<<strings.back()<<endl;

            }

            else if(choice2==9)
            {
                cout<<"Vector size: "<<strings.dis_size()<<endl;
            }
            else if(choice2==10)
            {
                cout<<"Vector capacity: "<<strings.dis_cap()<<endl;
            }
            else if (choice2==11)
            {
                if (strings.empty())

                    return true;
                else
                    return false;
            }
            else
            {
                cout<<"Invalid input "<<endl;
            }

        }

    }

    if(choice1==4)
    {
        FciVector<float>floats;
        float element;
        float* ptr;
        while (1)
        {
            floats.menu();
            cin>>choice2;
            if(choice2==2)
            {
                floats.pop();
            }
            else if(choice2==5)
            {
                floats.clear();
                cout<<"Vector empty now"<<endl;
            }
            else if(choice2==6)
            {
                cout<<"First element in the vector is: "<<floats.front()<<endl;

            }
            else if(choice2==7)
            {
                cout<<"Last element in the vector is: "<<floats.back()<<endl;

            }

            else if(choice2==9)
            {
                cout<<"Vector size: "<<floats.dis_size()<<endl;
            }
            else if(choice2==10)
            {
                cout<<"Vector capacity: "<<floats.dis_cap()<<endl;
            }
            else if (choice2==11)
            {
                if (floats.empty())
                    return true;
                else
                    return false;

            }
            else
            {
                cout<<"Invalid input "<<endl;
            }

        }

    }

    else if(choice1 == 6)
    {
        return 0;
    }


    }


}






