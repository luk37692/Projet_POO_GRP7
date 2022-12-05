#include "CLCustomer.h"

namespace NS_Models
{
	Customer::Customer() {

		//this->birth_date = "default";
		this->id = 0;
		this->first_name = "default";
		this->last_name = "default";
	}


	void Customer::setCustomer_Birth_Date(DateTime _birth_date) {

		this->birth_date = _birth_date;
	}


	DateTime Customer::getBirth_date(void) {
		return this->birth_date;
	}

	String^ Customer::SELECT()
	{
		return "excute SelectCustomer @last_name_c = " + getLast_name() + ", @first_name_c = " + getFirst_name();
	}
	String^ Customer::INSERT()
	{
		return "excute InsertCustomer @last_name_c = " + getLast_name() + ", @first_name_c = " + getFirst_name() + ", @birth_date = " + getBirth_date();
	}
	String^ Customer::UPDATE()
	{
		return "excute UpdateCustomer @last_name_c = " + getLast_name() + ", @first_name_c = " + getFirst_name() + ", @birth_date = " + getBirth_date();
	}
	String^ Customer::DELETE()
	{
		return "excute DeleteCustomer @last_name_c = " + getLast_name() + ", @first_name_c = " + getFirst_name() + ", @birth_date = " + getBirth_date();
	}

}

