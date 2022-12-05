#include "dbConnect.h"
NS_Models::dbConnect::dbConnect(void)
{
    this->sCnx = "Data Source=LAPTOP-16SKBVQI\MSSQL_ROMAIN;Initial Catalog=POO_GRP7;Persist Security Info=True;User ID=CNX;Password=azerty";

    this->sSql = "Rien";

    this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
    this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
    this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
    this->oDs = gcnew System::Data::DataSet();

    this->oCmd->CommandType = System::Data::CommandType::StoredProcedure;
}
System::Data::DataSet^ NS_Models::dbConnect::getRows(System::String^ sSql, System::String^ sDataTableName)
{
    this->oDs->Clear();
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oDA->SelectCommand = this->oCmd;
    this->oDA->Fill(this->oDs, sDataTableName);

    return this->oDs;
}
void NS_Models::dbConnect::actionRows(System::String^ sSql)
{
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oDA->SelectCommand = this->oCmd;
    this->oCnx->Open();
    this->oCmd->ExecuteNonQuery();
    this->oCnx->Close();
}