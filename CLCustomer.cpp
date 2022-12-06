#include "CLCustomer.h"

namespace NS_Models {

Customer::Customer(){

	//this->birth_date = gcnew DateTime();
	this->id = NULL;
	this->first_name = "default";
	this->last_name = "default";
}


void Customer::setCustomer_Birth_Date(DateTime _birth_date ) {

	this->birth_date = _birth_date;
}

DateTime Customer::getBirth_date(void) {
	return this->birth_date;
}

String^ Customer::INSERT(void) {
	return "EXECUTE InsertCustomer @last_name_c = '" + getLast_name() + "', @first_name_c = '" + getFirst_name() + "', @birth_date = '" + getBirth_date() + "'";
}

String^ Customer::SELECT(void) {
	if (getLast_name() != "" && getFirst_name() != "") {
		return "EXECUTE getPersonWithBillingAddress @last_name_c = '" + getLast_name() + "', @first_name_c = '" + getFirst_name()+"'";
	}
	else {
		return "EXECUTE SelectCustomers";
	}
	
}

String^ Customer::UPDATE(void) {
	return "EXECUTE UpdateCustomer @last_name_c = " + getLast_name() + ", @first_name_c = " + getFirst_name() + ", @birth_date = " + getBirth_date();
}

String^ Customer::DELETE(void) {
	return "EXECUTE DeleteCustomer @customer_id = " + getId();
}

}