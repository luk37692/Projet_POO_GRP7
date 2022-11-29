#pragma once
#include "pch.h"
#include "CLOrders.h"
#include "CLMean_of_payment.h"
namespace NS_Models {
	ref class CLMilestone_payments:  CLOrders
	{
	private:
		String^ payment_date;
		float price; 
		CLMean_of_payment Obj_mean_of_pay;
	};
}
