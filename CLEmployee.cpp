#include "CLEmployee.h"

namespace NS_Models
{
	int Employee::getUpper_hierarchy_id(void) {
		return this->upper_hierarchy_id;
	}
	String^ Employee::getPassword(void) {
		return this->password;
	}
	String^ Employee::getRank(void) {
		return this->rank;
	}
	String^ Employee::getHiring_date(void) {
		return this->hiring_date;
	}				   
	String^ Employee::getEmail(void) {
		return this->email;
	}

	int Employee::getEmployee(void) {
		return getId();
	}

	void Employee::setEmplyeeID(int _eId) {
		this->setId(_eId);
	}
	void Employee::setEmployeeUpperHierarchy(int _id) {
		this->upper_hierarchy_id = _id;
	}

	void Employee::setEmployeeHiringDate(String^ date) {
		this->hiring_date = date;
	}

	void Employee::setEmployeeRank(String^ _rank) {
		this->rank = _rank;
	}

	void Employee::setEmployeePassword(String^ pwd) {
		this->password = pwd;
	}

	void Employee::setEmployeeEmail(String^ _email) {
		this->email = _email;
	}

	String^ Employee::Insert(void) {

	}
}