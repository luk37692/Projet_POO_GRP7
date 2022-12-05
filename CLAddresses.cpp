#include "CLAddresses.h"
#include "pch.h"


NS_Models::CLAddresses::CLAddresses() {
	this->id_address = 0;
	this->additional_address_data = "default";
	this->type = "default";
	this->street_number = "default";
}
void NS_Models::CLAddresses::setStreet_name(String^ _sName) {
	this->street_name = _sName;
}
void NS_Models::CLAddresses::setStreet_data(String^ _sdata) {
	this->additional_address_data = _sdata;
}
void NS_Models::CLAddresses::setStreet_number(String^ _sNumber) {
	this->street_number = _sNumber;
}
void NS_Models::CLAddresses::setId_addresses(int _sID) {
	this->id_address = _sID;
}
void NS_Models::CLAddresses::setId_person(int _pID) {
	this->id = _pID;
}
void NS_Models::CLAddresses::setId_city(int _cID) {
	this->objet_city.setId_city(_cID);
}
String^ NS_Models::CLAddresses::getStreet_name(void) {
	return this->street_name;
}
String^ NS_Models::CLAddresses::getStreet_number(void) {
	return this->street_number;
}
String^ NS_Models::CLAddresses::getStreet_data(void) {
	return this->additional_address_data;
}
int NS_Models::CLAddresses::getId_addresses(void) {
	return this->id_address;
}
int NS_Models::CLAddresses::getId_person(void) {
	return getId();
}
int NS_Models::CLAddresses::getId_city(void) {
	return objet_city.getId_city();


}