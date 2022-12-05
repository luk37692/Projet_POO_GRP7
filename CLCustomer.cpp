#include "CLCustomer.h"

NS_Models::Customer::Customer(){

	//this->birth_date = gcnew DateTime();
	this->id = NULL;
	this->first_name = "default";
	this->last_name = "default";
}


void NS_Models::Customer::setCustomer_Birth_Date(DateTime _birth_date ) {

	this->birth_date = _birth_date;
}

DateTime NS_Models::Customer::getBirth_date(void) {
	return this->birth_date;
}

String^ NS_Models::Customer::INSERT(void) {
	return "excute InsertCustomer @last_name_c = " + getLast_name() + ", @first_name_c = " + getFirst_name() + ", @birth_date = " + getBirth_date();
}

String^ NS_Models::Customer::SELECT(void) {
	return "excute SelectCustomer @last_name_c = " + getLast_name() + ", @first_name_c = " + getFirst_name();
}

String^ NS_Models::Customer::UPDATE(void) {
	return "excute UpdateCustomer @last_name_c = " + getLast_name() + ", @first_name_c = " + getFirst_name() + ", @birth_date = " + getBirth_date();
}

String^ NS_Models::Customer::DELETE(void) {
	return "excute DeleteCustomer @last_name_c = " + getLast_name() + ", @first_name_c = " + getFirst_name() + ", @birth_date = " + getBirth_date();
}