#include "Ctrl_Orders.h"

namespace NS_Ctrl {
	Ctrl_Orders::Ctrl_Orders() {
		this->OB_connect = gcnew NS_Models::dbConnect();
		this->ds = gcnew System::Data::DataSet();
		this->OB_Orders = gcnew NS_Models::CLOrders();
	}
	DataSet^ Ctrl_Orders::listOrders(String^ sDataTableName) {
		return this->ds = OB_connect->getRows(OB_Orders->SELECT(), sDataTableName);
	}
	void Ctrl_Orders::ADD(String^_issuing_date, String^ ref, String^ _delivery_date, float _total_priceDF, int CustId) {
		this->OB_Orders->setIssuing_date(_issuing_date);
		this->OB_Orders->reference(_issuing_date);
		this->OB_Orders->setDelivery_date(_delivery_date);
		this->OB_Orders->setTotal_price_df(_total_priceDF);
		this->OB_Orders->setCustomer_id(CustId);
		this->OB_connect->actionRows(this->OB_Orders->INSERT());
	}

	void Ctrl_Orders::UPDATE(int _id, String^ _issuing_date, String^ ref, String^ _delivery_date, float _total_priceDF, int CustId) {
		this->OB_Orders->setId_order(_id);
		this->OB_Orders->setIssuing_date(_issuing_date);
		this->OB_Orders->reference(_issuing_date);
		this->OB_Orders->setDelivery_date(_delivery_date);
		this->OB_Orders->setTotal_price_df(_total_priceDF);
		this->OB_Orders->setCustomer_id(CustId);
	}

	void Ctrl_Orders::DELETE(int _id) {
		this->OB_Orders->setId_order(_id);
		this->OB_Orders->DELETE();
	}
}