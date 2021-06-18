#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char username[30], pass[20] , ch;
    do{
    int i,j,flag=0,temp=0,count=0;
    int f=0,l=0, a=0, g=0;

    cout<<"\n          Welcome to my  website  "<<"\n";
    cout<<"\n  Please enter your details here ";
    cout<<"\n  1.Enter your user name:";
    fflush(stdin);
    cin>>username;

    //check digit in th user name
    int len=strlen(username);
    for(i=0; i<len; i++)
    {
        if(isdigit(username[i]))
        {
            flag=1;
            break;
        }
    }
//check digit in th user name

    for(i=0; i<len; i++)
    {
        if(username[i]==95)
        {

            temp++;
        }

    }

    if(flag==0 && temp==1)
    {
        cout<<"  your user name is correct please choose your pass word \n ";
          /// how to generate the password

        cout<<"\n  2.Enter your pass word ";
    fflush(stdin);
    cin>>pass;
    int Len=strlen(pass);

    if(Len>8 && Len<15)
    {

        /// check password must having one single digit
        for(j=0; j<Len; j++)
        {
            if(isdigit(pass[j]))
            {
                f=1;
                break;
            }
        }

        /// check password must having one upper character
        for(j=0; j<Len; j++)
        {
            if(isupper(pass[j]))
            {
                l=1;
                break;
            }
        }

        /// check password must having one lower character

        for(j=0; j<Len; j++)
        {
            if(islower(pass[j]))
            {
                a=1;
                break;
            }
        }

        /// check password must having one special character

        for(j=0; j<Len; j++)
        {
            if(pass[j]>=33 && pass[j]<=47 )
            {
                g=1;
                break;
            }
        }

        if(f==1 && l==1 && a==1 && g==1)
        {
            cout<<" congratulations password set \n";

        }
        else
        {
            cout<<" \n sorry not valid  ";
        }

    }
    else
    {
        cout<<"\n  your password must be between (8-15) characters. \n";
    }


    }
    else
    {
        cout<<"   User name is not VALIDATE...please select valid user name \n ";
    }

    cout<<"\n Do you want to sign up another account(y/n)? ";
    cin>>ch;
    } while(ch=='y' || ch=='Y');

    return 0;

}
