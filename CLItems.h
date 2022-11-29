#pragma once
#include "pch.h"
namespace NS_Models {
	ref class CLItems
	{
	private:
		int id_items;
		int quantity;
		String^ items_reference;
		String^ type;
		String^ name;
		float price_df;
	public:
		CLItems();
		~CLItems();
		void setId_items(int);
		void setQuantity(int);
		void setItems_reference(String^);
		void setName(String^);
		void setType(String^);
		void setPrice_df(float);
		int getId_items(void);
		int getQuantity(void);
		String^ getItems_reference(void);
		String^ getName(void);
		String^ getType(void);
		float getPrice_df(void);
	};

}