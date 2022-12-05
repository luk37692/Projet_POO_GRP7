#pragma once
#include "pch.h"
#include "CLItems.h"
#include "dbConnect.h"

namespace NS_Ctrl {
	ref class Ctrl_Items
	{
	private:
		NS_Models::dbConnect^ OB_connect;
		NS_Models::CLItems^ OB_Items;
		DataSet^ ds;
	public:
		Ctrl_Items();
		DataSet^ listItems(String^);
		void ADD(String^, String^, String^, float);
		void UPDATE(int, String^, String^, String^, float);
		void DELETE(int);
	};
}
