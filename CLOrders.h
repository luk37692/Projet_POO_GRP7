#pragma once
#include "pch.h"
namespace NS_Models {
	ref class CLOrders
	{
	private:
		int id_order;
		String^ issuing_date;
		String^ reference;
		String^ delivery_date;
		float total_price_df; 
		float total_price;
	public:
		void setId_order(int);
		void reference(String^);
		void setDelivery_date(String^);
		void setTotal_price(float);
		void setTotal_price_df(float);
		int getId_order(void);
		String^ getReference(void);
		String^ getDelivery_date(void);
		float getTotal_price(void);
		float getTotal_price_df(void);
		virtual String^ Select(void);
		virtual String^ Insert(void);
		virtual String^ Update(void);
		virtual String^ Delete(void);
	};
}
