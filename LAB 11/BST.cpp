#include <iostream>

using namespace std;

struct BstNode
{
  int Data;
  BstNode *Left;
  BstNode *Right;
};

BstNode *newBstNode(int data)
{
  BstNode *newNode = new BstNode;
  newNode->Data = data;
  newNode->Left = NULL;
  newNode->Right = NULL;

  return newNode;
}

BstNode *Insert(int data, BstNode *root)
{

  if (root == NULL)
  {
    root = newBstNode(data);
  }
  else if (root->Data > data)
  {
    root->Left = Insert(data, root->Left);
  }
  else
  {
    root->Right = Insert(data, root->Right);
  }

  return root;
}

bool searchBst(int data, BstNode *root)
{

  if (root == NULL)
  {
    return false;
  }

  while (root != NULL)
  {

    if (data == root->Data)
    {
      return true;
    }
    else if (root->Data > data)
    {
      root = root->Left;
    }
    else
    {
      root = root->Right;
    }
  }
}

int FindMax(BstNode *root)
{
  if (root == NULL)
    return -1;

  while (root->Right != NULL)
  {
    root = root->Right;
  }

  return root->Data;
}

int FindMin(BstNode *root)
{
  if (root == NULL)
    return -1;

  while (root->Left != NULL)
  {
    root = root->Left;
  }

  return root->Data;
}

int main()
{
  BstNode *root = NULL;

  root = Insert(19, root);
  root = Insert(6, root);
  root = Insert(11, root);
  root = Insert(9, root);
  root = Insert(18, root);
  root = Insert(23, root);
  root = Insert(21, root);
  root = Insert(24, root);

  cout << FindMax(root) << endl;
  cout << FindMin(root) << endl;
}
