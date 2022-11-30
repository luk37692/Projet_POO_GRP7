#include "CLOrders.h"
void NS_Models::CLOrders::setId_order(int _order) {
	this->id_order = _order;
}
void NS_Models::CLOrders::setId_customer(int cus_ID) {
	this->setId(cus_ID);
}
void NS_Models::CLOrders::reference(String^ _ref) {
	this->orders_reference = _ref;
}
void NS_Models::CLOrders::setDelivery_date(String^ del_date) {
	this->delivery_date = del_date;
}
void NS_Models::CLOrders::setTotal_price(float T_price) {
	this->total_price = T_price;
}
void NS_Models::CLOrders::setTotal_price_df(float T_price_df) {
	this->total_price_df = T_price_df;
}
void NS_Models::CLOrders::setIssuing_date(String^ issuing_date_) {
	this->issuing_date = issuing_date_;
}

int NS_Models::CLOrders::getId_order(void) {
	return this->id_order;
}
int NS_Models::CLOrders::getId_customer(void) {
	return getId();
}

String^ NS_Models::CLOrders::getIssuing_date(void) {
	return this->issuing_date;
}
String^ NS_Models::CLOrders::getOrders_Reference(void) {
	return this->orders_reference;
}
String^ NS_Models::CLOrders::getDelivery_date(void) {
	return this->delivery_date;
}
float NS_Models::CLOrders::getTotal_price(void) {
	return this->total_price;
}
float NS_Models::CLOrders::getTotal_price_df(void) {
	return this->total_price_df;
}