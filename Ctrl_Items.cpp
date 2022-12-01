#include "Ctrl_Items.h"
namespace NS_Ctrl {
	Ctrl_Items::Ctrl_Items() {
		this->OB_connect = gcnew NS_Models::dbConnect();
		this->ds = gcnew System::Data::DataSet();
		this->OB_Items = gcnew NS_Models::CLItems();
	}
	DataSet^ Ctrl_Items::listItems(String^ sDataTableName) {
		return this->ds = OB_connect->getRows(OB_Items->SELECT(), sDataTableName);
	}
	void Ctrl_Items::ADD(String^ ref, String^ type, String^ name, float pricedf) {
		this->OB_Items->setItems_reference(ref);
		this->OB_Items->setType(type);
		this->OB_Items->setName(name);
		this->OB_Items->setPrice_df(pricedf);
		this->OB_connect->actionRows(this->OB_Items->INSERT());
	}
	void Ctrl_Items::UPDATE(int id, String^ ref, String^ type, String^ name, float pricedf) {
		this->OB_Items->setId_items(id);
		this->OB_Items->setItems_reference(ref);
		this->OB_Items->setType(type);
		this->OB_Items->setName(name);
		this->OB_Items->setPrice_df(pricedf);
		this->OB_Items->UPDATE();
	}
	void Ctrl_Items::DELETE(int id) {
		this->OB_Items->setId_items(id);
		this->OB_Items->DELETE();
	}
}