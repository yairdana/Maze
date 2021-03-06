#include "Node.h"



//============================================COUNSTACTOR AND DESTRACTOR===============================================//
Node::Node(Point data, Node* next) :data(data) { this->next = nullptr; }
//---------------------------------------------------------------------------------------------------//
Node::~Node() { next = nullptr; }
//---------------------------------------------------------------------------------------------------//



//============================================PUBLIC METHODS===============================================//
void Node::setData(Point item)
{
	data.setX(item.getX());
	data.setY(item.getY());
}
//---------------------------------------------------------------------------------------------------//
void Node::setNext(Node* next) { this->next = next; }

//---------------------------------------------------------------------------------------------------//
Point Node::getData() { return (data); }
//---------------------------------------------------------------------------------------------------//
Node* Node::getNext() { return (this->next); }
//---------------------------------------------------------------------------------------------------//

