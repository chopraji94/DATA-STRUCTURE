#include <iostream>

using namespace std;

struct BST
{
    int info;
    BST *left;
    BST *right;
};

BST *root;
class tree
{
private:
    int num;
    BST *check;
public:
    tree()
    {
        root = NULL;
    }
    void insertn()
    {
        cout<<"\nEnter the number and -1 to exit\n";
        cin>>num;
        while(num != -1)
        {
            BST *new_node = new BST;
            new_node->info = num;
            new_node->left = NULL;
            new_node->right = NULL;
            if(root == NULL)
            {
                root = new_node;
            }
            else
            {
                check = root;
                  while(1)
                    {
                        if(check->info < num)
                        {
                            if(check->right == NULL)
                            {
                                check->right = new_node;
                                cout<<"\nParent "<<check->info<<"\n";
                                break;
                            }
                            else
                            {
                                check = check->right;
                            }
                        }
                        else
                        {
                            if(check->left == NULL)
                            {
                                check->left = new_node;
                                cout<<"\nParent "<<check->info<<"\n";
                                break;
                            }
                            else
                            {
                                check = check->left;
                            }
                        }
                    }

            }
            cout<<"\nEnter the number and -1 to exit\n";
            cin>>num;
        }
    }
    void inorder(BST *node)
    {
        if(node == NULL)
            return;
        inorder(node->left);
        cout<<node->info;
        inorder(node->right);
    }
    void search2l(BST *root)
    {
        int c=0;
        search_second(root,c);
    }

    void search_second(BST *root,int &c)
    {
        if (root == NULL || c>=2)
            return;

        search_second(root->right,c);

        c++;

        if(c == 2)
        {
            cout<<"\n"<<root->info<<" is second largest\n";
            return ;
        }

        search_second(root->left,c);

    }

};

int main()
{
    tree t1;
    t1.insertn();
    cout<<"\nInorder is: ";
    t1.inorder(root);
    cout<<endl;
    t1.search2l(root);
}
