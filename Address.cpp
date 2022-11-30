#include "Address.h"

namespace NS_Composants
{
	Address::Address() {};
	String^ Address::DELETE() {
		return "oui";
	};
	String^ Address::INSERT() {
		return "oui";
	};
	String^ Address::UPDATE() {
		return "oui";
	};
	String^ Address::SELECT() {
		return "oui";
	};
	void Address::setId(void) {};
	void Address::setStreetName(String^) {};
	void Address::setStreetNumber(String^) {};
	void Address::setAdditionalData(String^) {};
	void Address::setType(String^) {};
	String^ Address::getStreetName(void) {
		return "oui";
	};
	String^ Address::getAdditionalData(void) {
		return "oui";
	};
	String^ Address::getType(void) {
		return "oui";
	};

}