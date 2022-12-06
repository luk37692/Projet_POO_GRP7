#pragma once
#include "pch.h"
#include "CLPeople.h"
namespace NS_Models {

	ref class CLEmployee:public CLPeople

	{
	private:
		int upper_hierarchy_id;
		String^ hiring_date;
		String^ rank;
		String^ password;
		String^ email;
	public:
		void setEmployeeUpperHierarchy(int);
		void setEmployeeHiringDate(String^);
		void setEmployeeRank(String^);
		void setEmployeePassword(String^);
		void setEmployeeEmail(String^);
		void setEmplyeeID(int);
		int getEmployee(void);
		int getUpper_hierarchy_id(void);
		String^ getHiring_date(void);
		String^ getRank(void);
		String^ getPassword(void);
		String^ getEmail(void);

		 String^ SELECT(void) override;
		 String^ INSERT(void) override;
		 String^ UPDATE(void) override;
		 String^ DELETE(void) override;


	};
}