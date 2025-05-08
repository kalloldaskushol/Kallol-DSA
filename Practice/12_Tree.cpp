#include<iostream>
using namespace std;
struct node{
    char data;
    node *left;
    node *right;

    node(char item){
        data = item;
        left = right = NULL;
    }
};

void print(node *x){
    if(x==NULL) return;

    print(x->left);
    print(x->right); 
    cout << x->data << " ";
}
int main(){

    node *a = new node('a');
    node *b = new node('b');
    node *c = new node('c');
    node *d = new node('d');
    node *e = new node('e');
    node *f = new node('f');
    node *g = new node('g');
    node *h = new node('h');
    node *i = new node('i');
    node *j = new node('j');
    node *k = new node('k');

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left = h;
    e->left = i;
    e->right = j;
    g->right = k;

    print(a);
    return 0;
}