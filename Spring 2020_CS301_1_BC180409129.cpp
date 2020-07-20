// bc180409129
// Muhammad Asad Khan

#include<iostream>
using namespace std;
class MYBok
{
     private :
        int recent;
        int bok;
        int siz;
        int *stack;
            public :
        MYBok(int s, int b)
        {siz=s;
        stack= new int[siz];
        bok=b;
        recent=-1;
        }
        void push(int x)
{
      
     stack[++recent]=x; 
}
int pop()
{
    return stack[recent--];
}
int top()
    {
        return stack[recent];
    }
   int isEmpty()
   {
    return (recent==-1);
   }
   int isFull()
   {
   
   return (recent==siz-1);
   }

};

main()
{

    int s, b, id;
    int s_bok=0, h_bok=0, o_bok=0;
    cout<<"Set The Magnitude Of Stack : ";
    cin>>s;
    cout<<endl;
    cout<<"How Many Books You Want To Add In Stack : ";
    cin>>b;
    MYBok book(s,b);
  
    for(int i=0; i<b; i++)
    {
        if(!book.isFull())
        {
           cout<<endl;
           cout<<"Enter Book Identification Number That You Want To Insert Into Stack :";
           cin>>id;
           book.push(id);
       }
   }

   for(int i=0; i<b; i++)
   {
    if(!book.isEmpty())
    {
         int idd=book.pop();

            if(idd%8==0)
            {
                s_bok++;
            }
            else if (idd%5==0)
            {
                h_bok++;
            }
            else
            {
                o_bok++;
                }
            }
        }
    if(b>0)
    {
        cout<<endl;
        cout<<"Total Software Book/Books : "<<s_bok;
        cout<<endl;
        cout<<"Total Hardware Book/Books : "<<h_bok;
        cout<<endl;
        cout<<"Total Other Book/Books : "<<o_bok;
    }
    else
    {
        cout<<endl;
        cout<<"Books not found";
        }
        }

