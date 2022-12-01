#pragma once
#include "pch.h"
#include "CLPeople.h"

namespace NS_Models {
	ref class Customer :public CLPeople
	{
	private:
		String^ birth_date;
	public:
		Customer();
		void setCustomer_id(int);
		void setCustomer_Birth_Date(String^);
		int getId_customer(void);
		String^ getBirth_date(void);

		virtual String^ Select(void) override;
		virtual String^ Insert(void) override;
		virtual String^ Update(void) override;
		virtual String^ Delete(void) override;
	};

}