#pragma once
#include "pch.h"
#include "CLEmployee.h"
#include "CLAddresses.h"
#include "dbConnect.h"
namespace NS_Ctrl {
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	ref class Ctrl_Employee
	{
	private:
		NS_Models::dbConnect^ OB_connect;
		NS_Models::Employee^ OB_empl;
		NS_Models::CLAddresses^ OB_add;
		DataSet^ ds;
	public:
		Ctrl_Employee();
		DataSet^ listPerson(String^);
		void ADD(String^, String^, int, String^, String^, String^, String^);
		void UPDATE(int, String^, String^, int, String^, String^, String^, String^);
		void DELETE(int);
	};

}