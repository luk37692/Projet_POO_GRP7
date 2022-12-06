#include "CLItems.h"

namespace NS_Models {

CLItems::CLItems() {
	this->id_items = NULL;
	this->items_reference = "default";
	this->type = "default";
	this->name = "default";
	this->price_df = 0;
}
void CLItems::setId_items(int _id_items) {
	this->id_items = _id_items;
}


void CLItems::setItems_reference(String^ _items_ref) {
	this->items_reference = _items_ref;
}
void CLItems::setName(String^ _item_name) {
	this->name = _item_name;
}
void CLItems::setType(String^ _items_type) {
	this->type = _items_type;
}
void CLItems::setPrice_df(float _price_df) {
	this->price_df = _price_df;
}
int CLItems::getId_items(void) {
	return this->id_items;
}

String^ CLItems::getItems_reference(void) {
	return this->items_reference;
}
String^ CLItems::getName(void) {
	return this->name;
}
String^ CLItems::getType(void) {
	return this->type;
}
float CLItems::getPrice_df(void) {
	return this->price_df;
}

String^ CLItems::INSERT(void) {
	return "feur";
}

String^ CLItems::SELECT(void) {
	return "feur";
}

String^ CLItems::UPDATE(void) {
	return "feur";
}

String^ CLItems::DELETE(void) {
	return "feur";
}

}