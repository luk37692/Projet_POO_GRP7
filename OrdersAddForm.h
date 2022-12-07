#pragma once
#include "Ctrl_Orders.h"
#include <ctime>

namespace ProjetPOOGRP7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm1
	/// </summary>
	public ref class OrdersAddForm : public System::Windows::Forms::Form
	{
	public:
		OrdersAddForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~OrdersAddForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		int id = 0;
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &OrdersAddForm::MyForm1_Load);
			this->ResumeLayout(false);

		}
	public:
		void getCustomer(int _id)
		{
			NS_Ctrl::Ctrl_Orders^ OB_Ctrl_Orders = gcnew NS_Ctrl::Ctrl_Orders();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			id = _id;
			//return _id;
		}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   NS_Ctrl::Ctrl_Orders^ OB_Ctrl_Orders = gcnew NS_Ctrl::Ctrl_Orders();
	private: System::Void DeleteOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		OB_Ctrl_Orders->DELETE(id.ToString() + time(0));
	}
	private: System::Void DisplayOrders_Click(System::Object^ sender, System::EventArgs^ e) {

		//deux premieres lettres du prenom du client, deux premieres lettres du nom du client, de l annee de la commande, de trois premieres lettres de la ville de livraison et d un numero incrementiel
		OB_Ctrl_Orders->ADD(Convert::ToDateTime(time(0)), id.ToString() + time(0), Convert::ToDateTime(time(0)), 0, id);
	}
	private: System::Void CreateOrder_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	};

}
