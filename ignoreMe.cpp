#include <iostream>
using namespace std;
//this is a branch test lol//////////////////////////////////////////////////////////////////////////////////////////////
class node {
public:
int generation;
string name;
class node* l;
class node* r;
node(int gen, string n);
void print();

};
int main() {
cout << "hello data structures!" << endl; node* root = new node(0, "ben"); //my grandmother
root->print();
root->l = new node(1, "jen");
root->r = new node(1, "ken");

root->l->l = new node(2, "hen");  
root->l->r = new node(2, "ren");

root->l->l->l = new node(3, "ten");
root->l->l->r = new node(3, "ben jr");
root->l->l->r->print();

}
node::node(int gen, string n) {
generation = gen;
name = n;
}
void node::print() {
cout << "my name is " << name << " and my generation is " << generation << "." << endl;
}
/*void printTree(class node* node) {
if (node == NULL)
return;
//recursive call on left node
printTree(node->l);
//print the info
cout << "Hello, I'm " << node->name << " and I'm generation " << node->generation << endl;
//recursive call on right node
printTree(node->r);
*/
