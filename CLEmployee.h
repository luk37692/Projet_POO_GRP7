#pragma once
#include "pch.h"
#include "CLPeople.h"
namespace NS_Models {
	ref class Employee:public CLPeople
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
		void setEmployeeRank(int);
		void setEmployeePassword(String^);
		void setEmployeeEmail(String^);
		int getEmployee(void);
		/*virtual String^ Select(void);
		virtual String^ Insert(void);
		virtual String^ Update(void);
		virtual String^ Delete(void);*/

	};
}