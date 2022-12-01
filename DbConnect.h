#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace models {
	ref class DbConnect
	{
	private:
		String^ connection;
		String^ r_sql;
		SqlConnection^ cnt;
		SqlCommand^ cmd;
		SqlDataAdapter^ da;
		DataSet^ ds;
		void setSQL(String^);
	public:
		DbConnect();
		int actionRowsID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);
	};
}