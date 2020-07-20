//bc180409129: 
//Muhammad Asad khan:  
#include<iostream>

using namespace std;

	struct node{
		node *left;
		node *right; 
	int myrecord ;
	};
	
		class TNode{       
			
			private:
				
					node* root;
			public:	  
					
					TNode();
					int itnull();
					void buildTree(int item);
					void insert(int item,node *,node *);						
					void MinNode(node*);
					void MaximumNode(node*); 
					int NOdes(node*);
					int totalheight(node*);
					void displayBinTree();
		};
		
		TNode::TNode(){     
			
				root = NULL;
			}
			
		int TNode::itnull() {
					
				return (root == NULL);
			}
		
		void TNode::buildTree(int item){      
		
			node *p = new node;
			node *parent;
			
			cout <<"Insert node in BST :" << item <<endl;
			insert(item,p,parent);
		}	
	
		void TNode::insert(int item,node * p,node * parent){   
	
				p->myrecord =item;
				p->left=NULL;
				p->right=NULL;
				parent=NULL;
				
				if(itnull()){
					root = p;
				}					
				else{
					
					node *ptr;
					ptr = root;
					
					while(ptr != NULL){
						parent = ptr;
						if(item > ptr->myrecord ){
							ptr = ptr->right;	
						}							
						else{
							ptr = ptr->left;
						}
							
					}	
					if(item < parent->myrecord ){
						parent->left = p;
					}						
					else{
						parent->right = p;	
					}
						
				}
	}		
		
	void TNode::MinNode(node* p){    

	    while (p->left != NULL){
	
	        p = p->left;
	    }
	        cout <<"******************************************************************** "<<endl;
	    	cout <<"Calculation of Minimum , maximum node, Height and total number of nodes for BST "<<endl;
	    	cout <<"********************************************************************* "<<endl;
	    	
		cout << "Minimum value in Node: " << p->myrecord  <<endl; 
	}
	
	void TNode::MaximumNode(node* p){    

	    while (p->right != NULL){
	
	        p = p->right;
	    }
		cout << "Maximum value in Node : " << p->myrecord  <<endl;
	}
	
	int TNode::NOdes(node* p){
		
		int node =  1;             
	    if (p == NULL){
	    	
	    	return 0;
		}        
	    else{
	    	
	        node += NOdes(p->left);
	        node += NOdes(p->right);
	        return node;
	    }
	}
	
	int TNode::totalheight(node* p){		      
		
	    if (p == NULL) 
		{
			return 0;	
		} 	          
	    else
	    {  
	        
	        int left_side = totalheight(p->left);  
	        int right_side = totalheight(p->right);  
	      
	        
	        if (left_side > right_side)
			{
				return(left_side + 1);	
			} 	              
	        else 
			{
				return(right_side + 1); 	
			} 
	    }  
	    
	}
	
	void TNode::displayBinTree(){                   
		cout <<endl<<endl;		
		MinNode(root);
		MaximumNode(root);
		
		
		cout <<"Height of Binary Search Tree : "<<totalheight(root);       
		cout <<"\nTotal nodes in Binary Search Tree: "<<NOdes(root);
		
	}

	int main(){
		
		TNode b;
		
		int myrecord [] = {7,2,9,1,5,14};
		cout <<"***********************************"<<endl;
		cout <<"VU ID: bc180409129  "<<endl;
		cout <<"************************************* "<<endl;
		     	cout <<"*********************************"<<endl;
		cout <<"Construction Binary Search Tree, based upon given tree myrecord  {7,2,9,1,5,14} "<<endl;
	    cout <<"*****************************************************************"<<endl;
	
		int arrSize = sizeof(myrecord )/sizeof(myrecord [0]);
		
		for(int i = 0; i < arrSize; i++)
		{
			b.buildTree(myrecord [i]);
		}
		
		
		b.displayBinTree();	
		
	}

