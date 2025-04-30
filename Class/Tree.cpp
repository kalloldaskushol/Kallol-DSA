#include <iostream>
using namespace std;

struct Node {
    char data;
    Node *left, *right;
    Node(char item) {
        data = item;
        left = NULL;
        right = NULL;
    }
};

void print(Node *x) {
    if(x == NULL) return;

    print(x->left);
    print(x->right);
    cout << x->data << " ";
}

int main() {

    Node *a = new Node('a');
    Node *b = new Node('b');
    Node *c = new Node('c');
    Node *d = new Node('d');
    Node *e = new Node('e');
    Node *f = new Node('f');
    Node *g = new Node('g');
    Node *h = new Node('h');
    Node *i = new Node('i');
    Node *j = new Node('j');
    Node *k = new Node('k');

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
