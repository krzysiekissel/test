#ifndef BSTNODE_H
#define BSTNODE_H


class BSTNode
{
    public:
        BSTNode();
        virtual ~BSTNode();
        BSTNode* GetNewNode(int key)
        {
             BSTNode* newNode = new BSTNode();
             newNode->key=key;
             newNode->left=newNode->rigth=0;
             return newNode;

        }
        BSTNode* Insert(BSTNode* root,int key)
        {
            if(root==0)
            {
                root=GetNewNode(key);
            }
            else if(key<root->key)
            {
                root->left=Insert(root->left,key);
            }
            else
            {
                root->rigth=Insert(root->rigth,key);
            }
            return root;

        }

    protected:
    private:
        int key;
        BSTNode* left;
        BSTNode* rigth;
        BSTNode* root;


};

#endif // BSTNODE_H
# test
