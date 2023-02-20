#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    string str, temp,str_rev, temp_rev, temp_sub;
    char decision;
    int i, len,j,choice;
    cout<<"Enter any string: ";
    cin>>str;
    cout<<endl;


    do
    {
        cout<<"1)To perform prefix operation\n2)To perform suffix operation\n3)To perform sub string operation\n4)Exit\n";
        cout<<endl;
        cin>>choice;
        cout<<endl;
        len= str.length();
        str_rev = str;
        switch(choice)
            {
                case 1:
                    {
                        cout << "The prefix of the string " << str << " is: " << endl;

                        for(i=0;i<len;i++)
                        {
                            temp.append(1,str[i]);
                            cout<<temp<<endl;
                        }
                        cout<<endl;
                    }
                    break;

                case 2:
                    {
                        cout << "The suffix of the string " << str << " is: " << endl;
                        reverse(str_rev.begin(), str_rev.end());
                        for(i=0;i<len;i++)
                        {
                            temp_rev.append(1,str_rev[i]);
                            cout<<temp_rev<<endl;
                        }
                        cout<<endl;
                        break;
                    }

                case 3:
                    {
                        cout << "The sub string of the string " << str << " is: " << endl;
                        for(i=0;i<len;i++)
                        {
                            for(j=i;j<len;j++)
                            {
                                temp_sub.append(1,str[j]);
                                cout<<temp_sub<<endl;
                            }
                            temp_sub.clear();
                        }
                        break;
                    }

                case 4:
                    {
                        exit(1);
                    }

                default:
                    {
                        cout<<"Invalid choice, please choose a valid choice!"<<endl;
                        break;
                    }
        }
        cout<<endl;
        cout<<"Do you want to continue y/n?:";
        cin>>decision;
        cout<<endl;
        if(decision== 'y' || decision=='n')
        {
            decision=toupper(decision);
        }


    }while(decision=='Y');
}
