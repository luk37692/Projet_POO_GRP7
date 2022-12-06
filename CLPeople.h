#pragma once
#include "pch.h"
#include "CLMaps.h"

namespace NS_Models {
	ref class CLPeople : public CLMaps
	{

	protected :

		int id;
		String^ first_name;
		String^ last_name;
	public:
		CLPeople();

		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;
		virtual String^ UPDATE(void) override;
		virtual String^ DELETE(void) override;
											  
		void setId(int);					  
		void setFirst_name(String^);	  
		void setLast_name(String^);		  
		int getId(void);					  
		String^ getFirst_name(void);		  
		String^ getLast_name(void);			  
	};										  

}

