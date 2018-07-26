#include <iostream>
using namespace std;

class Node
{
public:
int iData;                		//data item (key)
double dData;             		//data item
Node* pLeftChild;         		//this node's left child
Node* pRightChild;        	//this node's right child
	//------------------------------------------------------------
	//constructor
Node() : iData(0), dData(0.0), pLeftChild(NULL), pRightChild(NULL)
{  }
	//------------------------------------------------------------
void displayNode()       		//display ourself: {75, 7.5}
{
cout << '{' << iData << ", " << dData << "} ";
}
}; //end class Node




class Tree
{
private:
Node* pRoot;              	//first node of tree
public:
	//-------------------------------------------------------------
Tree() : pRoot(NULL)         	//constructor
{  }
	//------------------------------------------------------------
Node* find(int key)          				//find node with given key
{                         					//(assumes non-empty tree)
Node* pCurrent = pRoot;            		//start at root
while(pCurrent->iData != key)       		//while no match,
{
if(key < pCurrent->iData)       		 	//go left?
pCurrent = pCurrent->pLeftChild;
else                             				//or go right?
pCurrent = pCurrent->pRightChild;
if(pCurrent == NULL)             		//if no child,
return NULL;   	               		//didn't find it
}
return pCurrent;					//found it
} 
	//-------------------------------------------------------------


void insert(int id, double dd) 						//insert new node
{
	Node* pNewNode = new Node; 				//make new node
	pNewNode->iData = id; 					//insert data
	pNewNode->dData = dd;
	if(pRoot==NULL) 	
pRoot = pNewNode;
	else 								//root occupied
	{
		Node* pCurrent = pRoot; 				//start at root
		Node* pParent;
		while(true) 						//(exits internally)
		{
			pParent = pCurrent;
			if(id < pCurrent->iData) 				//go left?
			{
				pCurrent = pCurrent->pLeftChild;
				if(pCurrent == NULL) 			//if end of the line,
				{ 					//insert on left
				pParent->pLeftChild = pNewNode;
				return;
				}
			} 						//end if go left
			else 						//or go right?
			{
				pCurrent = pCurrent->pRightChild;
				if(pCurrent == NULL) 			//if end of the line
				{ 					//insert on right
				pParent->pRightChild = pNewNode;
				return;
				}
			} 						//end else go right
		} 							//end while
	} 								//end else not root
} 		

	//------------------------------------------------------------
void traverse(int traverseType)
{ /*body not shown*/ }
	//-------------------------------------------------------------
void displayTree()
{ /*body not shown*/
 }
	//------------------------------------------------------------
	};
 //end class Tree





int main()
{
Tree theTree;                   				//make a tree
theTree.insert(50, 1.5);        				//insert 3 nodes
theTree.insert(25, 1.7);
theTree.insert(75, 1.9);
Node* found = theTree.find(25); 	 		//find node with key 25
if(found != NULL)
cout << "Found the node with key 25" << endl;
else
cout << "Could not find node with key 25" << endl;
return 0;
}  





