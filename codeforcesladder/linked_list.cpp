// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;node *next;
//     node(int x){
//         data=x;
//         next=NULL;
//     }
// };
// void traverse(node*head){
//     node *curr=head;
//     while(curr!=NULL){
//         cout<<(curr->data)<<" ";
//         curr=curr->next;
//     }
// }
// int main(){
//     node *head=new node(10);
//     node *temp1= new node(20);
//     node *temp2= new node(30);
//     node *temp3= new node(40);
//     head->next=temp1;
//     temp1->next=temp2;
//     temp2->next=temp3;
//     traverse(head);
// }
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        cout << "Printing linked list " << endl;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    cout << endl;
}
Node *take_input()
{
    cout << "Enter data : ";
    int data;
    cin >> data;
    Node *head = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cout << "Enter data  to continue otherwise enter -1 to stop : ";
        cin >> data;
    }
    return head;
}
int size(Node *head)
{
    Node *temp = head;
    int size = 0;
    while (temp)
    {
        size++;
        temp = temp->next;
    }
    return size;
}
Node *delete_node(Node *head, int pos)
{
    if (size(head) <= pos)
    {
        cout << "You enter a invalid position !!!" << endl;
        return head;
    }
    Node *temp = head;
    int c = 0;
    if (pos == 0)
    {
        head = temp->next;
        delete[] temp;
        return head;
    }
    while (temp && c < (pos - 1))
    {
        temp = temp->next;
        c++;
    }
    if (temp == NULL)
    {
        return head;
    }
    else
    {
        Node *a = temp->next;
        temp->next = a->next;
        delete[] a;
    }
    return head;
}
Node *swap_node(Node *head)
{
    /* METHOD 1 SWAPPING THE VALUES OF ADJACENT NODES
    Node *temp = head;
    if (head == NULL || head->next == NULL)
      return head;
    else
    {
      swap(temp->data, temp->next->data);
      swap_node(temp->next->next);
    }
    return head;
    */
    /*  METHOD TWO SWAPPING THE NODES */
    if (!head || !head->next)
    {
        return head;
    }
    Node *dummy = new Node(0);
    Node *curr = head;
    Node *prev = dummy;
    while (curr && curr->next)
    {
        prev->next = curr->next;
        curr->next = prev->next->next;
        prev->next->next = curr;
        prev = curr;
        curr = curr->next;
    }
    return dummy->next;
}
Node *reverse_ll(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr)
    {
        Node *nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}
Node *insert_ll(Node *head, int pos, int data)
{
    if (pos > size(head))
    {
        cout << "INVALID POSITION" << endl;
        return head;
    }
    Node *temp = head;
    Node *newnode = new Node(data);
    if (pos == 0)
    {
        newnode->next = head;
        head = newnode;
    }
    else if (pos - 1 == size(head))
    {
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = NULL;
    }
    else
    {
        int count = 0;
        Node *temp1 = head;
        while (count < (pos - 1) && temp1)
        {
            count++;
        }
    }
}
        Node *insert_ll(Node * head, int pos, int data)
        {
            if (pos > size(head))
            {
                cout << "INVALID POSITION" << endl;
                return head;
            }
            Node *temp = head;
            Node *newnode = new Node(data);
            if (pos == 0)
            {
                newnode->next = head;
                head = newnode;
            }
            else if (pos - 1 == size(head))
            {
                while (temp->next)
                {
                    temp = temp->next;
                }
                temp->next = newnode;
                newnode->next = NULL;
            }
            else
            {
                int count = 0;
                Node *temp1 = head;
                while (count < (pos - 1) && temp1)
                {
                    count++;
                    temp1 = temp1->next;
                }
                Node *nxt = temp1->next;
                temp1->next = newnode;
                newnode->next = nxt;
            }
            return head;
        }
        int main()
        {
            int stop = 1;
            Node *head = NULL;
            while (stop)
            {
                int choice;
                cout << "1.INPUT\n2.PRINT\n3.DELETE\n4.SWAP\n5.REVERSE LL\n6.INSERT\n7.EXIT" << endl;
                cout << "Enter your choice " << endl;
                cout << "------------------------------" << endl;
                cin >> choice;

                if (choice == 1)
                {
                    head = take_input();
                }
                else if (choice == 2)
                {
                    print(head);
                }
                else if (choice == 3)
                {
                    int pos;
                    cout << "Enter the position/index you want to delete the node : " << endl;
                    cin >> pos;
                    Node *t = delete_node(head, pos);
                    print(t);
                }
                else if (choice == 4)
                {
                    Node *t = swap_node(head);
                    cout << "Printing after swapping the adjacents : " << endl;
                    print(t);
                }
                else if (choice == 5)
                {
                    Node *t = reverse_ll(head);
                    cout << "PRINTING REVERSED LL : \n";
                    print(t);
                }
                else if (choice == 6)
                {
                    int pos, data;
                    cout << "Enter the position you want to insert the data : ";
                    cin >> pos;
                    cout << "Enter the data you want to add in ll : " << endl;
                    cin >> data;
                    Node *t = insert_ll(head, pos, data);
                    print(t);
                }
                else
                {
                    exit(0);
                }
                cout << "Enter -1 to exit or 1 to continue " << endl;
                cin>>stop;
                if(stop==-1) break;
            };
        }
