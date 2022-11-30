#pragma once
#include "DbConnect.h"

using namespace System;

namespace controllers
{
	ref class CtrlCustomers
	{
	private:
		models::DbConnect^ oCad;
	public:
		CtrlCustomers();
		Data::DataSet^ CustomersList(String^);
		virtual int ctrlAdd(String^, String^, String^, String^, String^, String^, String^);
		virtual void ctrlEdit(int, String^, String^, String^, String^, String^, String^, String^);
		virtual void ctrlDelete(int);
	};
}