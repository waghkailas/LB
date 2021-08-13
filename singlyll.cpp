#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;

}NODE ,*PNODE;

class SinglyLL
{
    private:
    PNODE Head;
    int isize;


    public:
         SinglyLL()  // default constructor
         {
             Head=NULL;
             isize=0;
         }

         int count()
         {
             return isize;
         }
        
        void insertFirst(int ivalue)
         {
             PNODE newn =NULL;
             newn=new NODE;
             newn->data=ivalue;
             newn->next=NULL;
            
            if(Head==NULL) // ll is empty
             {
                 Head=newn;

                
             }
             else // ll contains at least one node
             {
                 newn->next=Head;
                 Head=newn;


             }
             isize++;

         }

         void insertLast(int ivalue)
         
         {
             PNODE newn =NULL;
             newn=new NODE;
             newn->data=ivalue; 
             newn->next=NULL;
             PNODE temp=Head;
             


            
            if(Head==NULL) // ll is empty
             {
                 Head=newn;

                
             }
             else // ll contains at least one node
             {
                 while(temp->next!=NULL)
                 {
                     temp=temp->next;
                 }
                 temp->next=newn;


             }
             isize++;


         }


};

int main()
{
    int ichoice=1,ivalue=0;
    SinglyLL obj1;

    while(ichoice!=0)
    {
        cout<<"Enter your choice:"<<"\n";
        cout<<"1:insert at first position"<<"\n";
         cout<<"2:insert at kast position"<<"\n";

        cout<<"3:insert at give position"<<"\n";

        cout<<"4:Delete first node"<<"\n";

        cout<<"5:Delete last node"<<"\n";
        cout<<"6:Delete node at given position"<<"\n";
        cout<<"7:Display the content"<<"\n";
        cout<<"8:count the numbe of nodes"<<"\n";
        cout<<"0:exite the application"<<"\n";
          
          cin>>ichoice;
          switch(ichoice)
          {
              case 1:
              cout<<"enter the number to insert\n";
              cin>>ivalue;
              obj1.insertFirst(ivalue);
              break;
              case 2:
              break;
              case 3:
              break;
              case 4:
              break;
              case 5:
              break;
              case 6:
              break;
              case 7:
              break;
              case 8:
              break;
              case 0:
              cout<<"thankyou for using kmws application"<<"\n";
              break;
              default:
              cout<<"enter the valid number"<<"\n";
              break;

          }
    }

    return 0;
}
