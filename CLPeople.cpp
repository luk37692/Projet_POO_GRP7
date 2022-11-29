#include "CLPeople.h"
NS_Models::CLPeople::CLPeople() {
	this->id = NULL;
	this->first_name = "Default";
	this->last_name = "Default";
}
NS_Models::CLPeople::~CLPeople() {
	
}

void NS_Models::CLPeople::setId(int i) {
	this->id = i;
}

void NS_Models::CLPeople::setFirst_name(String^ prenom) {
	this->first_name = prenom;
}

void NS_Models::CLPeople::setLast_name(String^ nom) {
	this->last_name = nom;
}
int NS_Models::CLPeople::getId(void) {
	return id;
}

String^ NS_Models::CLPeople::getFirst_name(void) {
	return first_name;
}

String^ NS_Models::CLPeople::getLast_name(void) {
	return last_name;
}

String^ NS_Models::CLPeople::Insert(void) {

}

String^ NS_Models::CLPeople::Select(void) {

}

String^ NS_Models::CLPeople::Update(void) {

}

String^ NS_Models::CLPeople::Delete(void) {

}
