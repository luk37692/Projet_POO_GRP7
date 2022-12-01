#include "CLEmployee.h"

namespace NS_Models
{
	int CLEmployee::getUpper_hierarchy_id(void) {
		return this->upper_hierarchy_id;
	}
	String^ CLEmployee::getPassword(void) {
		return this->password;
	}
	String^ CLEmployee::getRank(void) {
		return this->rank;
	}
	String^ CLEmployee::getHiring_date(void) {
		return this->hiring_date;
	}
	String^ CLEmployee::getEmail(void) {
		return this->email;
	}

	int CLEmployee::getEmployee(void) {
		return getId();
	}

	void CLEmployee::setEmplyeeID(int _eId) {
		this->setId(_eId);
	}
	void CLEmployee::setEmployeeUpperHierarchy(int _id) {
		this->upper_hierarchy_id = _id;
	}

	void CLEmployee::setEmployeeHiringDate(String^ date) {
		this->hiring_date = date;
	}

	void CLEmployee::setEmployeeRank(String^ _rank) {
		this->rank = _rank;
	}

	void CLEmployee::setEmployeePassword(String^ pwd) {
		this->password = pwd;
	}

	void CLEmployee::setEmployeeEmail(String^ _email) {
		this->email = _email;
	}

	String^ CLEmployee::INSERT(void) {
		return "feur";
	}
}