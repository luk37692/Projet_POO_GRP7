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
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ CreateOrder;
	private: System::Windows::Forms::Button^ DeleteOrder;
	protected:


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ DisplayOrders;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ AddAndDeleteItems;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:

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
		void InitializeComponent(void)
		{
			this->CreateOrder = (gcnew System::Windows::Forms::Button());
			this->DeleteOrder = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DisplayOrders = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->AddAndDeleteItems = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// CreateOrder
			// 
			this->CreateOrder->Location = System::Drawing::Point(37, 129);
			this->CreateOrder->Name = L"CreateOrder";
			this->CreateOrder->Size = System::Drawing::Size(162, 71);
			this->CreateOrder->TabIndex = 0;
			this->CreateOrder->Text = L"Nouvelle Commande";
			this->CreateOrder->UseVisualStyleBackColor = true;
			this->CreateOrder->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// DeleteOrder
			// 
			this->DeleteOrder->Location = System::Drawing::Point(37, 206);
			this->DeleteOrder->Name = L"DeleteOrder";
			this->DeleteOrder->Size = System::Drawing::Size(162, 71);
			this->DeleteOrder->TabIndex = 1;
			this->DeleteOrder->Text = L"Supprimer Commande";
			this->DeleteOrder->UseVisualStyleBackColor = true;
			this->DeleteOrder->Click += gcnew System::EventHandler(this, &MyForm1::DeleteOrder_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(252, 386);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(249, 365);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre de paiement";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(252, 68);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(454, 286);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm1::dataGridView1_CellContentClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(249, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Contenu et prix de la commande";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// DisplayOrders
			// 
			this->DisplayOrders->Location = System::Drawing::Point(37, 52);
			this->DisplayOrders->Name = L"DisplayOrders";
			this->DisplayOrders->Size = System::Drawing::Size(162, 71);
			this->DisplayOrders->TabIndex = 6;
			this->DisplayOrders->Text = L"Afficher les commandes";
			this->DisplayOrders->UseVisualStyleBackColor = true;
			this->DisplayOrders->Click += gcnew System::EventHandler(this, &MyForm1::DisplayOrders_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(370, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(336, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"La modif de la commande se fait dans le popup item";
			// 
			// AddAndDeleteItems
			// 
			this->AddAndDeleteItems->Location = System::Drawing::Point(37, 283);
			this->AddAndDeleteItems->Name = L"AddAndDeleteItems";
			this->AddAndDeleteItems->Size = System::Drawing::Size(162, 71);
			this->AddAndDeleteItems->TabIndex = 8;
			this->AddAndDeleteItems->Text = L"Ajouter / Supprimer des Articles";
			this->AddAndDeleteItems->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(447, 365);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Moyen de paiment";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(450, 386);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 10;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 469);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->AddAndDeleteItems);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->DisplayOrders);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->DeleteOrder);
			this->Controls->Add(this->CreateOrder);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int id = 0;
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void DeleteOrder_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void DisplayOrders_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_Ctrl::Ctrl_Orders^ OB_Ctrl_Orders = gcnew NS_Ctrl::Ctrl_Orders();
	//deux premières lettres du prénom du client, deux premières lettres du nom du client, de l’année de la commande, de trois premières lettres de la ville de livraison et d’un numéro incrémentiel
	OB_Ctrl_Orders->ADD(time(0), id.ToString() + time(0), '000-00-00', 0, id);
}
};
}
