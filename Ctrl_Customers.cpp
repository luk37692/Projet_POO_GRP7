#include "Ctrl_Customers.h"
namespace NS_Ctrl {
	Ctrl_Customers::Ctrl_Customers() {
		this->OB_connect = gcnew NS_Models::dbConnect();
		this->ds = gcnew System::Data::DataSet();
		this->OB_customer = gcnew NS_Models::Customer();
	}
	DataSet^ Ctrl_Customers::listCustomer(String^ sDataTableName) {
		String^ sql;
		sql = this->OB_customer->SELECT();
		return this->ds = OB_connect->getRows(sql, sDataTableName);
	}


	void Ctrl_Customers::ADD(String^ _nom, String^ _prenom, DateTime _date_birth) {
		this->OB_customer->setLast_name(_nom);
		this->OB_customer->setFirst_name(_prenom);
		this->OB_customer->setCustomer_Birth_Date(_date_birth);
		this->OB_connect->actionRows(this->OB_customer->INSERT());
	}

	void Ctrl_Customers::UPDATE(String^ _nom, String^ _prenom, DateTime _date_birth) {
		if (this->OB_customer->getId() == 0) {
			this->ds = listCustomer("sDataTableName");
		}
		else {
			this->OB_customer->setLast_name(_nom);
			this->OB_customer->setFirst_name(_prenom);
			this->OB_customer->setCustomer_Birth_Date(_date_birth);
			this->OB_connect->actionRows(this->OB_customer->UPDATE());
		}

	}

	void Ctrl_Customers::DELETE(String^ _nom, String^ _prenom, DateTime _date_birth) {
		if (this->OB_customer->getId() == 0) {
			this->ds = listCustomer("sDataTableName");
		}
		else {
			this->OB_customer->setLast_name(_nom);
			this->OB_customer->setFirst_name(_prenom);
			this->OB_customer->setCustomer_Birth_Date(_date_birth);
			this->OB_connect->actionRows(this->OB_customer->DELETE());
		}
	}
	
	DataSet^ Ctrl_Customers::getDataSet() {
		return this->ds;
	};
}