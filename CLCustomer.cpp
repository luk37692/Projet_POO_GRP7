#include "CLCustomer.h"
namespace NS_Models
{
	Customer::Customer() {
		this->birth_date = "default";
		this->id = NULL;
		this->first_name = "default";
		this->last_name = "default";
	}

	void Customer::setCustomer_id(int _id) {
		this->setId(_id);
	}
	void Customer::setCustomer_Birth_Date(String^ _birth_date) {
		this->birth_date = _birth_date;
	}
	int Customer::getId_customer(void) {
		return getId();
	}

	String^ Customer::getBirth_date(void) {
		return this->birth_date;
	}
}