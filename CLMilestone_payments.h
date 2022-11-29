#pragma once
#include "pch.h"
#include "CLOrders.h"
namespace NS_Models {
	ref class CLMilestone_payments: public CLOrders
	{
	private:
		String^ payment_date;
		float price; 
		int id_meant_payment; 
	};
}
