#pragma once
#include "CustomerAddForm.h"
#include "Ctrl_Customers.h"
#include "CLCustomer.h"
#include "dbConnect.h"

namespace ProjetPOOGRP7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de CustomerForm
	/// </summary>
	public ref class CustomerForm : public System::Windows::Forms::Form
	{
	public:
		CustomerForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~CustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ fname_label;
	private: System::Windows::Forms::Label^ lname_label;

	private: System::Windows::Forms::TextBox^ fname_text;
	private: System::Windows::Forms::TextBox^ lname_text;
	private: System::Windows::Forms::Button^ add_employee_button;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;




	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->fname_label = (gcnew System::Windows::Forms::Label());
			this->lname_label = (gcnew System::Windows::Forms::Label());
			this->fname_text = (gcnew System::Windows::Forms::TextBox());
			this->lname_text = (gcnew System::Windows::Forms::TextBox());
			this->add_employee_button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// fname_label
			// 
			this->fname_label->AutoSize = true;
			this->fname_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname_label->Location = System::Drawing::Point(29, 41);
			this->fname_label->Name = L"fname_label";
			this->fname_label->Size = System::Drawing::Size(127, 38);
			this->fname_label->TabIndex = 1;
			this->fname_label->Text = L"prénom";
			// 
			// lname_label
			// 
			this->lname_label->AutoSize = true;
			this->lname_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname_label->Location = System::Drawing::Point(29, 140);
			this->lname_label->Name = L"lname_label";
			this->lname_label->Size = System::Drawing::Size(80, 38);
			this->lname_label->TabIndex = 2;
			this->lname_label->Text = L"nom";
			// 
			// fname_text
			// 
			this->fname_text->Location = System::Drawing::Point(168, 56);
			this->fname_text->Name = L"fname_text";
			this->fname_text->Size = System::Drawing::Size(146, 22);
			this->fname_text->TabIndex = 4;
			// 
			// lname_text
			// 
			this->lname_text->Location = System::Drawing::Point(168, 156);
			this->lname_text->Name = L"lname_text";
			this->lname_text->Size = System::Drawing::Size(146, 22);
			this->lname_text->TabIndex = 5;
			// 
			// add_employee_button
			// 
			this->add_employee_button->Location = System::Drawing::Point(516, 30);
			this->add_employee_button->Name = L"add_employee_button";
			this->add_employee_button->Size = System::Drawing::Size(140, 75);
			this->add_employee_button->TabIndex = 6;
			this->add_employee_button->Text = L"Ajouter";
			this->add_employee_button->UseVisualStyleBackColor = true;
			this->add_employee_button->Click += gcnew System::EventHandler(this, &CustomerForm::add_employee_button_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(516, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 75);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Modifier";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CustomerForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(516, 192);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 75);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CustomerForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(367, 28);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 239);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Rechercher";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CustomerForm::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(19, 354);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(675, 239);
			this->dataGridView1->TabIndex = 10;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CustomerForm::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 219);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(288, 38);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Date de naissance";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(34, 278);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(282, 22);
			this->dateTimePicker1->TabIndex = 12;
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(716, 638);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->add_employee_button);
			this->Controls->Add(this->lname_text);
			this->Controls->Add(this->fname_text);
			this->Controls->Add(this->lname_label);
			this->Controls->Add(this->fname_label);
			this->Name = L"CustomerForm";
			this->Text = L"CustomerForm";
			this->Load += gcnew System::EventHandler(this, &CustomerForm::CustomerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int customer_id = 0;

	private: System::Void add_employee_button_Click(System::Object^ sender, System::EventArgs^ e) {
		//CustomerAddForm^ addform = gcnew CustomerAddForm();
		//addform->ShowDialog();

		NS_Ctrl::Ctrl_Customers^ OB_Ctrl_customer = gcnew NS_Ctrl::Ctrl_Customers();
		this->dataGridView1->Refresh();
		OB_Ctrl_customer->ADD(fname_text->Text, lname_text->Text, dateTimePicker1->Value);

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		NS_Ctrl::Ctrl_Customers^ OB_Ctrl_customer = gcnew NS_Ctrl::Ctrl_Customers();
		this->dataGridView1->Refresh();
		this->oDs = OB_Ctrl_customer->listCustomer(this->fname_text->ToString(), this->lname_text->ToString());
		this->dataGridView1->DataSource = this->oDs;
		//this->dataGridView1->DataMember = "CUSTOMERS";
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		NS_Ctrl::Ctrl_Customers^ OB_Ctrl_customer = gcnew NS_Ctrl::Ctrl_Customers();
		this->dataGridView1->Refresh();
		OB_Ctrl_customer->UPDATE(fname_text->Text, lname_text->Text, dateTimePicker1->Value, customer_id);
		this->dataGridView1->DataSource = OB_Ctrl_customer->getDataSet();
		//this->dataGridView1->DataMember = "CUSTOMERS";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_Ctrl::Ctrl_Customers^ OB_Ctrl_customer = gcnew NS_Ctrl::Ctrl_Customers();
	this->dataGridView1->Refresh();
	OB_Ctrl_customer->DELETE(fname_text->Text, lname_text->Text, dateTimePicker1->Value, customer_id);
}
private: System::Void CustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
		customer_id = (int)this->dataGridView1[0, e->RowIndex]->Value;

		NS_Ctrl::Ctrl_Customers^ OB_Ctrl_customer = gcnew NS_Ctrl::Ctrl_Customers();
		this->dataGridView1->Refresh();
		this->dataGridView1->DataSource = OB_Ctrl_customer->getDataSet();
		//this->dataGridView1->DataMember = "Clients";
}
};
}