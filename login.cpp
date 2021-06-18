#include<iostream>
#include<cstring>
int passwordCheck(char *pass, char *password);
using namespace std;
int main()
{
    char username[30];
    char name[30]="rahul";
    char password[30];
    char pass[30]="abhi123";
    int i,flag=0;

    cout<<"    LOGIN MENU     \n";
    cout<<"enter user name:";
    fflush(stdin);
    gets(username);

    //for(i=0; username[i]!='\0'; i++)
        if( strcmp(username,name)==0)
        {
            cout<<" Enter password:";
            fflush(stdin);
            gets(password);


           // for(i=0; password[i]!='\0'; i++)

           flag = passwordCheck(password, pass);
//                if(strcmp(password,pass)==0)
//                {
//                    flag=1;
//
//                }
        }

    if(flag==1)
    {

        cout<<" matched successfully  ";

    }

    else
    {
        cout<<" SORRY not matched... ";

    }

    return 0;
}


int passwordCheck(char *pass, char *password)
{
    int flag =0;
                if(strcmp(password,pass)==0)
                {
                    flag=1;

                }
                return flag;
}
