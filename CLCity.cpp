#include "CLCity.h"

namespace NS_Models
{
	CLCity::CLCity() {
		this->id_city = 0;
		this->name_city = "default";
		this->postal_code = 0;
	}

	void CLCity::setId_city(int cId) {
		this->id_city = cId;
	}
	void CLCity::setName_city(String^ cName) {
		this->name_city = cName;
	}
	void CLCity::setPostal_code(int cPc) {
		this->postal_code = cPc;
	}
	int CLCity::getId_city(void) {
		return this->id_city;
	}
	int CLCity::getPostal_code(void) {
		return this->postal_code;
	}
	String^ CLCity::getName_city(void) {
		return this->name_city;
	}
}