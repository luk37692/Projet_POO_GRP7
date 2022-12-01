#pragma once
#include "pch.h"
#include "CLOrders.h"
#include "dbConnect.h"

namespace NS_Ctrl {

	ref class Ctrl_Orders
	{
	private:
		NS_Models::dbConnect^ OB_connect;
		NS_Models::CLOrders^ OB_Orders;
		DataSet^ ds;
	public:
		Ctrl_Orders();
		DataSet^ listOrders(String^);
		void ADD(String^, String^, String^, float, int);
		void UPDATE(int, String^, String^, String^, float, int);
		void DELETE(int);
	};

}