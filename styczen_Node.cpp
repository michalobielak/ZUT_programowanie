#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
struct Node {
    int Value;
    Node * Next;
};
 
Node* Create(int value) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->Value = value;
    return node;
}

Node* GetTail(Node* root) {
    while (root->Value != NULL){
    	*root = *root->Next;
	}
	return root;
}

void Add(Node* root, int value) {
	*root = *GetTail(root);
	root->Next = (Node*) malloc(sizeof(Node));
	root->Next->Value = value;
}

void PrintList(Node* root) {
	Node* last = GetTail(root);
	if(root != last) {
		cout<<root->Value<<'->';
		*root = *root->Next;
	}
}

void RemoveNode(Node* root, int value) {
	Node* bufor;
	Node* next;
	while(root->Value != value){
		if (root->Value != NULL) {
			*next = *root->Next;
		} else {
			break;
		}
	}
	*bufor = *next->Next;
	free(&next);
	GetTail(root)->Next = bufor;	
}

void FreeList(Node* root) {
	while(root->Next != NULL) {
		free(GetTail(root));
	}
	free(&root);
}

int Count(Node* root){
	int licznik = 0;
	while (root->Value != NULL){
		licznik++;
    	*root = *root->Next;
	}
	return licznik;
}

 

 
int main() {
    Node * root = Create(2);
    PrintList(root);
    
    Add(root, 4);
    Add(root, 8);
    Add(root, 16);
    PrintList(root);
    
    Add(root, 20);
    PrintList(root);
    
    printf("Ostatni wezel ma wartosc %d", GetTail(root)->Value);
    
    Add(root, 16);
    PrintList(root);
    printf("%d", Count(root));
    
    RemoveNode(root, 8);
    PrintList(root);
    RemoveNode(root, 10);
    PrintList(root);
    RemoveNode(root, 16);
    PrintList(root);
    
    printf("%d", Count(root));
    FreeList(root);
    PrintList(root);
    return 0;
}
