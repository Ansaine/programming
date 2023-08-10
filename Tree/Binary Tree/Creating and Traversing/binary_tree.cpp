//we create a function that continously takes in input to create the whole tree
// we use help of queue to keep track of present memery address

#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node *left ;
    Node *right ;
};

void create(Node **pointer_to_root_pointer)
{

Node *p, *t;                 // p for present node and t for temporary node
int data;
queue <Node*> q;

Node *root; 
root = new Node;            // initialising root node
root->left = NULL;
root->right = NULL;
*pointer_to_root_pointer = root;

cout<<"Enter root data\n";
cin>>root->data;

q.push(root);

while(!q.empty())
{   
    p = q.front();
    q.pop();

    cout<<"Enter left element\n";                           //for left child 
    cin>>data;

    if(data!= -1)                                           // user doesnt want to input data
    {
        t = new Node;
        t->data = data;t->left = t->right = NULL;

        p->left = t;
        q.push(t);
    }

    cout<<"Enter right element\n";
    cin>>data;

    if(data!= -1)
    {
        t = new Node; 
        t->data = data; t->left = t->right =NULL;

        p->right = t;
        q.push(t);
    }

}
}

// Now we see if its working along with traversals
// preorder , inorder, postorder, level order

void preorder( Node *root)
{
    if( root->data == -1)
    {
        return ;
    }
    else{

        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
        return;

    }
}

int main()
{

Node *tree1;
create(&tree1);
preorder(tree1);


return 0;
}



