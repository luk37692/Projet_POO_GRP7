#include "CLOrders.h"

namespace NS_Models
{
	void CLOrders::setId_order(int _order) {
		this->id_order = _order;
	}
	void CLOrders::setId_customer(int cus_ID) {
		this->setId(cus_ID);
	}
	void CLOrders::reference(String^ _ref) {
		this->orders_reference = _ref;
	}
	void CLOrders::setDelivery_date(String^ del_date) {
		this->delivery_date = del_date;
	}
	void CLOrders::setTotal_price(float T_price) {
		this->total_price = T_price;
	}
	void CLOrders::setTotal_price_df(float T_price_df) {
		this->total_price_df = T_price_df;
	}
	void CLOrders::setIssuing_date(String^ issuing_date_) {
		this->issuing_date = issuing_date_;
	}
	int CLOrders::getId_order(void) {
		return this->id_order;
	}
	int CLOrders::getId_customer(void) {
		return getId();
	}
	String^ CLOrders::getIssuing_date(void) {
		return this->issuing_date;
	}
	String^ CLOrders::getOrders_Reference(void) {
		return this->orders_reference;
	}
	String^ CLOrders::getDelivery_date(void) {
		return this->delivery_date;
	}
	float CLOrders::getTotal_price(void) {
		return this->total_price;
	}
	float CLOrders::getTotal_price_df(void) {
		return this->total_price_df;
	}
}