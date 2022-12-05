#pragma once
#include "CustomerAddForm.h"

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
	private: System::Windows::Forms::Label^ id_label;
	protected:
	private: System::Windows::Forms::Label^ fname_label;
	private: System::Windows::Forms::Label^ lname_label;
	private: System::Windows::Forms::TextBox^ id_text;
	private: System::Windows::Forms::TextBox^ fname_text;
	private: System::Windows::Forms::TextBox^ lname_text;
	private: System::Windows::Forms::Button^ add_employee_button;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;






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
			this->id_label = (gcnew System::Windows::Forms::Label());
			this->fname_label = (gcnew System::Windows::Forms::Label());
			this->lname_label = (gcnew System::Windows::Forms::Label());
			this->id_text = (gcnew System::Windows::Forms::TextBox());
			this->fname_text = (gcnew System::Windows::Forms::TextBox());
			this->lname_text = (gcnew System::Windows::Forms::TextBox());
			this->add_employee_button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// id_label
			// 
			this->id_label->AutoSize = true;
			this->id_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id_label->Location = System::Drawing::Point(25, 30);
			this->id_label->Name = L"id_label";
			this->id_label->Size = System::Drawing::Size(42, 38);
			this->id_label->TabIndex = 0;
			this->id_label->Text = L"id";
			// 
			// fname_label
			// 
			this->fname_label->AutoSize = true;
			this->fname_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname_label->Location = System::Drawing::Point(12, 116);
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
			this->lname_label->Location = System::Drawing::Point(12, 215);
			this->lname_label->Name = L"lname_label";
			this->lname_label->Size = System::Drawing::Size(80, 38);
			this->lname_label->TabIndex = 2;
			this->lname_label->Text = L"nom";
			// 
			// id_text
			// 
			this->id_text->Location = System::Drawing::Point(151, 45);
			this->id_text->Name = L"id_text";
			this->id_text->Size = System::Drawing::Size(146, 22);
			this->id_text->TabIndex = 3;
			// 
			// fname_text
			// 
			this->fname_text->Location = System::Drawing::Point(151, 131);
			this->fname_text->Name = L"fname_text";
			this->fname_text->Size = System::Drawing::Size(146, 22);
			this->fname_text->TabIndex = 4;
			// 
			// lname_text
			// 
			this->lname_text->Location = System::Drawing::Point(151, 230);
			this->lname_text->Name = L"lname_text";
			this->lname_text->Size = System::Drawing::Size(146, 22);
			this->lname_text->TabIndex = 5;
			// 
			// add_employee_button
			// 
			this->add_employee_button->Location = System::Drawing::Point(478, 30);
			this->add_employee_button->Name = L"add_employee_button";
			this->add_employee_button->Size = System::Drawing::Size(140, 75);
			this->add_employee_button->TabIndex = 6;
			this->add_employee_button->Text = L"Ajouter";
			this->add_employee_button->UseVisualStyleBackColor = true;
			this->add_employee_button->Click += gcnew System::EventHandler(this, &CustomerForm::add_employee_button_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(478, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 75);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Modifier";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(478, 194);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 75);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(325, 30);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 239);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Rechercher";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(669, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(675, 239);
			this->dataGridView1->TabIndex = 10;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(669, 401);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(675, 212);
			this->dataGridView2->TabIndex = 11;
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1418, 638);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->add_employee_button);
			this->Controls->Add(this->lname_text);
			this->Controls->Add(this->fname_text);
			this->Controls->Add(this->id_text);
			this->Controls->Add(this->lname_label);
			this->Controls->Add(this->fname_label);
			this->Controls->Add(this->id_label);
			this->Name = L"CustomerForm";
			this->Text = L"CustomerForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void add_employee_button_Click(System::Object^ sender, System::EventArgs^ e) {
		CustomerAddForm^ addform = gcnew CustomerAddForm();
		addform->ShowDialog();

	}
	};
}