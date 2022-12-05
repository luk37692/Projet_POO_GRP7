#pragma once
#include "pch.h"
#include "CLMaps.h"

namespace NS_Models {
	ref class CLPeople:CLMaps
	{

	protected :

		int id;
		String^ first_name;
		String^ last_name;
	public:
		CLPeople();

		String^ SELECT(void) override;
		String^ INSERT(void) override;
		String^ UPDATE(void) override;
		String^ DELETE(void) override;
											  
		void setId(int);					  
		void setFirst_name(String^);	  
		void setLast_name(String^);		  
		int getId(void);					  
		String^ getFirst_name(void);		  
		String^ getLast_name(void);			  
	};										  

}

