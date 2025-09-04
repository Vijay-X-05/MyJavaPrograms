#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ORDER 5
#define MIN_KEYS(ORDER/2)
typedef Struct Node{
    int keys[ORDER-1];
    Struct Node*children[ORDER];
    int leaf;
    int num_keys;
}Node;
Node*create_Node(int leaf){
    Node*node=(node*)malloc(sizeof(Node));
    node->leaf=leaf;
    node->num_keys=0;
    int i;
    for(i=0;i<ORDER;i++){
        node->children[i]=NULL;
    }
    return node;
}
Void insert_keys(Node*node, int key){
    int i=node->num_keys-1;
    while(i>=0 && key<node->keys[i]){
        node->keys[i+1]=node->keys[i];
        i--;
    }
    node->keys[i+1]=key;
    node->num_keys++;
}
void split_child(Node*parent, int index){
    Node*child=parent->children[index];
    Node*new_child=Create_node(child->leaf);
    int mid=(ORDER-1)/2, i;
    for(i=mid+1;i<ORDER-1;i++){
        new_child->keys[i-mid-1]=child->children[i];
        child->childrean[i]=NULL;
    }
}
parent->chidren[index+1]=new_child;
for(i=parent->num_keys;i>=index+1;i--){
    parent->children[i+1]=parent->children[i];
}
for(i=parent->num_keys-1;i>=index;i--){
    parent->keys[i+1]=parent->keys[i];
}
parent->keys[index]=child->keys[mid];
child->num_keys=mid;
new_child->num_keys=ORDER-1-mid;
parent->num_keys++;
