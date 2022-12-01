#pragma once
#include "pch.h"
#include"CLPeople.h"
#include"CLCity.h"
namespace NS_Models {
	ref class CLAddresses: public CLPeople
	{
	private:
		int id_address;
		String^ additional_address_data;
		String^ type;
		String^ street_number;
		String^ street_name;
		CLCity objet_city;
	public:
		CLAddresses();
		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;
		virtual String^ UPDATE(void) override;
		virtual String^ DELETE(void) override;
		void setStreet_name(String^);
		void setStreet_data(String^);
		void setStreet_number(String^);
		void setId_addresses(int);
		void setId_person(int);
		void setId_city(int);
		String^ getStreet_name(void);
		String^ getStreet_number(void);
		String^ getStreet_data(void);
		int getId_addresses(void);
		int getId_person(void);
		int getId_city(void);
	};
}
