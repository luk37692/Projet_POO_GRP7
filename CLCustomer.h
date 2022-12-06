#pragma once
#include "pch.h"
#include "CLPeople.h"
#include "CLMaps.h"

namespace NS_Models {
	ref class Customer : public CLPeople
	{
	private :
		DateTime birth_date;
	public :


		Customer();
		void setCustomer_Birth_Date(DateTime);
		DateTime getBirth_date(void);


		String^ SELECT(void) override;
		String^ INSERT(void) override;
		String^ UPDATE(void) override;
		String^ DELETE(void) override;
	};

}