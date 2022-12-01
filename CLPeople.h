#pragma once
#include "pch.h"
namespace NS_Models {
	ref class CLPeople
	{
	protected:
		int id;
		String^ first_name;
		String^ last_name;
	public:
		CLPeople();
		virtual String^ Select(void);
		virtual String^ Insert(void);
		virtual String^ Update(void);
		virtual String^ Delete(void);
		void setId(int);
		void setFirst_name(String^);
		void setLast_name(String^);
		int getId(void);
		String^ getFirst_name(void);
		String^ getLast_name(void);
	};
}