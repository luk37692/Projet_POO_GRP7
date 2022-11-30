#pragma once
#include "pch.h"
#include "CLCustomer.h"
namespace NS_Models {
	ref class CLOrders :public Customer
	{
	protected:
		int id_order;
		String^ issuing_date;
		String^ orders_reference;
		String^ delivery_date;
		float total_price_df; 
		float total_price;
	public:
		void setId_order(int);
		void setId_customer(int);
		void setIssuing_date(String^);
		void reference(String^);
		void setDelivery_date(String^);
		void setTotal_price(float);
		void setTotal_price_df(float);
		int getId_order(void);
		int getId_customer(void);
		String^ getIssuing_date(void);
		String^ getOrders_Reference(void);
		String^ getDelivery_date(void);
		float getTotal_price(void);
		float getTotal_price_df(void);
		virtual String^ Select(void) override ;
		virtual String^ Insert(void) override;
		virtual String^ Update(void) override;
		virtual String^ Delete(void) override;
	};
}
