#pragma once
#include "pch.h"
namespace NS_Models {
	ref class CLAddresses
	{
		int id_address;
		String^ additional_address_data;
		String^ type;
		String^ street_number;
	public:
		CLAddresses();
		~CLAddresses();
		virtual String^ Select(void);
		virtual String^ Insert(void);
		virtual String^ Update(void);
		virtual String^ Delete(void);
		void setStreet_name(String^);
		void setStreet_data(String^);
		void setStreet_number(String^);
		void setId_addresses(int);
		String^ getStreet_name(void);
		String^ getStreet_number(void);
		String^ getStreet_data(void);
		String^ getId_addresses(void);
	};
}
