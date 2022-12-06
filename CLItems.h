#pragma once
#include "pch.h"
namespace NS_Models {
	ref class CLItems
	{
	private:
		int id_items;
		String^ items_reference;
		String^ type;
		String^ name;
		float price_df;
	public:
		CLItems();
		void setId_items(int);

		void setItems_reference(String^);
		void setName(String^);
		void setType(String^);
		void setPrice_df(float);
		int getId_items(void);
		String^ getItems_reference(void);
		String^ getName(void);
		String^ getType(void);
		float getPrice_df(void);

		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;
		virtual String^ UPDATE(void) override;
		virtual String^ DELETE(void) override;

	};

}