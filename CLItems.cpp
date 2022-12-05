#include "CLItems.h"
NS_Models::CLItems::CLItems() {
	this->id_items = 0;
	this->items_reference = "default";
	this->type = "default";
	this->name = "default";
	this->price_df = 0;
}
void NS_Models::CLItems::setId_items(int _id_items) {
	this->id_items = _id_items;
}


void NS_Models::CLItems::setItems_reference(String^ _items_ref) {
	this->items_reference = _items_ref;
}
void NS_Models::CLItems::setName(String^ _item_name) {
	this->name = _item_name;
}
void NS_Models::CLItems::setType(String^ _items_type) {
	this->type = _items_type;
}
void NS_Models::CLItems::setPrice_df(float _price_df) {
	this->price_df = _price_df;
}
int NS_Models::CLItems::getId_items(void) {
	return this->id_items;
}

String^ NS_Models::CLItems::getItems_reference(void) {
	return this->items_reference;
}
String^ NS_Models::CLItems::getName(void) {
	return this->name;
}
String^ NS_Models::CLItems::getType(void) {
	return this->type;
}
float NS_Models::CLItems::getPrice_df(void) {
	return this->price_df;
}
String^ NS_Models::CLItems::SELECT()
{
	return "feur";
	}
String^ NS_Models::CLItems::INSERT()
{
	return "feur";
	}
String^ NS_Models::CLItems::UPDATE()
{
	return "feur";

	}
String^ NS_Models::CLItems::DELETE()
{
	return "feur";
}
