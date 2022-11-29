#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;


namespace NS_Composants
{
	ref class Address
	{
	private:
		int id_address;
		String^ street_name;
		String^ additional_address_data;
		String^ type;
	public:

		Address();
		virtual String^ SELECT(void);
		virtual String^ INSERT(void);
		virtual String^ UPDATE(void);
		virtual String^ DELETE(void);
		void setId(void);
		void setStreetName(String^);
		void setStreetNumber(String^);
		void setAdditionalData(String^);
		void setType(String^);
		String^ getStreetName(void);
		String^ getAdditionalData(void);
		String^ getType(void);
	};
}