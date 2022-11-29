#pragma once
#include "pch.h"
namespace NS_Models {
	ref class CLItems
	{
	private:
		int id_items;
		int quantity;
		//String^ reference;
		String^ type;
		String^ name;
		//float price_df;
	public:
		CLItems();
		~CLItems();
		void setId_items(int);
		void setQuantity(int);
		void setName(String^);
		void setType(String^);
		int getId_items(void);
		int getQuantity(void);
		String^ getName(void);
		String^ getType(void);
	};

}