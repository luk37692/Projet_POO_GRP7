#include "DbConnect.h"

namespace models {
	DbConnect::DbConnect()
	{
		this->r_sql = "RIEN";
		this->connection = "Data Source=LAPTOP-6RJGB3RI\\MSSQL_LUC;" + "Initial Catalog=POO_GRP7;" + "Integrated Security = True;" + "User ID=CNX"; "Password = cesi123;";
		this->cnt = gcnew SqlConnection(this->connection);
		this->cmd = gcnew SqlCommand(this->r_sql, this->cnt);
		this->cmd->CommandType = CommandType::Text;
	}
	int DbConnect::actionRowsID(String^ rq_sql)
	{
		int id;
		this->setSQL(rq_sql);
		this->cmd->CommandText = this->r_sql;
		this->cnt->Open();
		id = Convert::ToInt32(this->cmd->ExecuteScalar());
		this->cnt->Close();
		return id;
	}
	void DbConnect::actionRows(String^ rq_sql)
	{
		this->setSQL(rq_sql);
		this->cmd->CommandText = this->r_sql;
		this->cnt->Open();
		this->cmd->ExecuteNonQuery();
		this->cnt->Close();
	}

	DataSet^ DbConnect::getRows(String^ rq_sql, String^ dataTableName)
	{
		this->setSQL(rq_sql);
		this->da = gcnew SqlDataAdapter(this->cmd);
		this->cmd->CommandText = this->r_sql;
		this->ds = gcnew DataSet();
		this->da->Fill(this->ds, dataTableName);
		return this->ds;
	}

	void DbConnect::setSQL(String^ rq_sql)
	{
		if (rq_sql == "" || rq_sql == "RIEN")
		{
			this->r_sql = "RIEN";
		}
		else
		{
			this->r_sql = rq_sql;
		}
	}
}