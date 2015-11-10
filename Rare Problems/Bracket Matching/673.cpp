#include<cstdio>
#include<new>
#include<iostream>
using namespace std;

class S
{
private:
    char data;
public:
    void set_value(int x)
    {
        data=x;
    }

    int get_value()
    {
        return data;
    }
    S *next,*previous;
};

class mystack
{
private:
    S *top,*newdata;
    int  stack_size;

public:
    mystack() {
        newdata=top=NULL;
        stack_size=0;
    }

    void push(int value)
    {
        stack_size++;
        newdata = new S;

        newdata->set_value(value);
        newdata->next=NULL;
        newdata->previous=NULL;

        if(top==NULL)
            top=newdata;
        else
        {   top->next=newdata;
            newdata->previous=top;
            top=newdata;
        }

    }

    void pop()
    {
        stack_size--;
        top=top->previous;
    }

    int Back()
    {
        return top->get_value();
    }

    int Size()
    {
        return stack_size;
    }

    int isempty()
    {
        if(stack_size==0)
            return 1;
        else
            return 0;
    }
};

int main()
{
    int cas;
    scanf("%d",&cas);
    getchar();

    string s;
    for(int i=0; i<cas; i++)
    {
        mystack mS;
        getline(cin,s);

        if(s=="")
            printf("Yes\n");
        else
        {
            for(int j=0; j<s.size(); j++)
            {
                if(mS.isempty())
                    mS.push(s[j]);
                else
                {
                    char c=mS.Back();
                    if(s[j]==')' && c=='(')
                        mS.pop();
                    else if(c=='[' && s[j]==']')
                        mS.pop();
                    else
                        mS.push(s[j]);
                }
            }

            if(mS.isempty())
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
