#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node* left;
    int data;
    Node* right;
}*tree1=NULL;

void insert( int data)

{   
    Node* trav = tree1;
    Node* follow = NULL;

    if(trav == NULL)
    {
        Node* temp = new Node;
        temp->left =temp->right= NULL;
        temp->data = data;

        tree1 = temp;
        return;
    }

    else{    
    
    while(trav!= NULL)
    {   
        follow = trav;

        if(data<trav->data)
            trav= trav->left;
        else if( data>trav->data)
            trav = trav->right;
        else
            return ;                 //stop funtion if data already found     

    }

    Node* temp = new Node;          // now we add the node to the tree
    temp->left =temp->right= NULL;
    temp->data = data;

    if(data<follow->data)
        follow->left = temp;
    else
        follow->right = temp;
    
    }
}

void inorder(Node* root)
{
    if(root == NULL)
        return;
    else
    {   
        inorder(root->left);   
        cout<<root->data<<" ";     
        inorder(root->right);
    }    

}

int main()
{
    
    insert(5);
    insert(7);
    insert(3);
    insert(9);
    insert(6);   

    inorder(tree1);
}