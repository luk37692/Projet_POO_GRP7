#pragma once
#include "AddressAddForm.h"

namespace ProjetPOOGRP7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de CustomerAddForm
	/// </summary>
	public ref class CustomerAddForm : public System::Windows::Forms::Form
	{
	public:
		CustomerAddForm(void)
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
		~CustomerAddForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Cust_add_name;
	private: System::Windows::Forms::Label^ Cust_add_lastname;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ Cust_add_name_textBox;

	private: System::Windows::Forms::TextBox^ Cust_add_lastname_textBox;

	private: System::Windows::Forms::Button^ Add_customer_button;
	private: System::Windows::Forms::TextBox^ cust_street_numb_text;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ cust_number_label;
	private: System::Windows::Forms::Label^ cust_street_label;
	private: System::Windows::Forms::TextBox^ cust_street_name_text;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ cust_birthdate_picker;
	private: System::Windows::Forms::RadioButton^ SameBD_button;
	private: System::Windows::Forms::RadioButton^ NotSameBandD;



	private: System::Windows::Forms::TextBox^ textBox4;



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
			this->Cust_add_name = (gcnew System::Windows::Forms::Label());
			this->Cust_add_lastname = (gcnew System::Windows::Forms::Label());
			this->Cust_add_name_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Cust_add_lastname_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Add_customer_button = (gcnew System::Windows::Forms::Button());
			this->cust_street_numb_text = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cust_number_label = (gcnew System::Windows::Forms::Label());
			this->cust_street_label = (gcnew System::Windows::Forms::Label());
			this->cust_street_name_text = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cust_birthdate_picker = (gcnew System::Windows::Forms::DateTimePicker());
			this->SameBD_button = (gcnew System::Windows::Forms::RadioButton());
			this->NotSameBandD = (gcnew System::Windows::Forms::RadioButton());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Cust_add_name
			// 
			this->Cust_add_name->AutoSize = true;
			this->Cust_add_name->Location = System::Drawing::Point(61, 71);
			this->Cust_add_name->Name = L"Cust_add_name";
			this->Cust_add_name->Size = System::Drawing::Size(37, 17);
			this->Cust_add_name->TabIndex = 0;
			this->Cust_add_name->Text = L"Nom";
			// 
			// Cust_add_lastname
			// 
			this->Cust_add_lastname->AutoSize = true;
			this->Cust_add_lastname->Location = System::Drawing::Point(43, 29);
			this->Cust_add_lastname->Name = L"Cust_add_lastname";
			this->Cust_add_lastname->Size = System::Drawing::Size(58, 17);
			this->Cust_add_lastname->TabIndex = 1;
			this->Cust_add_lastname->Text = L"Pr�nom";
			this->Cust_add_lastname->Click += gcnew System::EventHandler(this, &CustomerAddForm::Cust_add_lastname_Click);
			// 
			// Cust_add_name_textBox
			// 
			this->Cust_add_name_textBox->Location = System::Drawing::Point(152, 23);
			this->Cust_add_name_textBox->Name = L"Cust_add_name_textBox";
			this->Cust_add_name_textBox->Size = System::Drawing::Size(133, 22);
			this->Cust_add_name_textBox->TabIndex = 2;
			// 
			// Cust_add_lastname_textBox
			// 
			this->Cust_add_lastname_textBox->Location = System::Drawing::Point(152, 71);
			this->Cust_add_lastname_textBox->Name = L"Cust_add_lastname_textBox";
			this->Cust_add_lastname_textBox->Size = System::Drawing::Size(133, 22);
			this->Cust_add_lastname_textBox->TabIndex = 3;
			// 
			// Add_customer_button
			// 
			this->Add_customer_button->Location = System::Drawing::Point(24, 186);
			this->Add_customer_button->Name = L"Add_customer_button";
			this->Add_customer_button->Size = System::Drawing::Size(218, 116);
			this->Add_customer_button->TabIndex = 4;
			this->Add_customer_button->Text = L"Ajouter Client";
			this->Add_customer_button->UseVisualStyleBackColor = true;
			// 
			// cust_street_numb_text
			// 
			this->cust_street_numb_text->Location = System::Drawing::Point(357, 70);
			this->cust_street_numb_text->Name = L"cust_street_numb_text";
			this->cust_street_numb_text->Size = System::Drawing::Size(86, 22);
			this->cust_street_numb_text->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(331, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 32);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Adresse";
			// 
			// cust_number_label
			// 
			this->cust_number_label->AutoSize = true;
			this->cust_number_label->Location = System::Drawing::Point(328, 76);
			this->cust_number_label->Name = L"cust_number_label";
			this->cust_number_label->Size = System::Drawing::Size(25, 17);
			this->cust_number_label->TabIndex = 7;
			this->cust_number_label->Text = L"n�";
			// 
			// cust_street_label
			// 
			this->cust_street_label->AutoSize = true;
			this->cust_street_label->Location = System::Drawing::Point(460, 76);
			this->cust_street_label->Name = L"cust_street_label";
			this->cust_street_label->Size = System::Drawing::Size(34, 17);
			this->cust_street_label->TabIndex = 8;
			this->cust_street_label->Text = L"Rue";
			// 
			// cust_street_name_text
			// 
			this->cust_street_name_text->Location = System::Drawing::Point(507, 70);
			this->cust_street_name_text->Name = L"cust_street_name_text";
			this->cust_street_name_text->Size = System::Drawing::Size(171, 22);
			this->cust_street_name_text->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(314, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"infos compl�mentaires";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(463, 115);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(215, 22);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(357, 167);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(86, 22);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(507, 167);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(171, 22);
			this->textBox3->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(328, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 17);
			this->label3->TabIndex = 14;
			this->label3->Text = L"CP";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(460, 243);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(12, 17);
			this->label4->TabIndex = 15;
			this->label4->Text = L" ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(126, 17);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Date de naissance";
			// 
			// cust_birthdate_picker
			// 
			this->cust_birthdate_picker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->cust_birthdate_picker->Location = System::Drawing::Point(152, 119);
			this->cust_birthdate_picker->MaxDate = System::DateTime(2100, 12, 31, 0, 0, 0, 0);
			this->cust_birthdate_picker->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->cust_birthdate_picker->Name = L"cust_birthdate_picker";
			this->cust_birthdate_picker->Size = System::Drawing::Size(133, 22);
			this->cust_birthdate_picker->TabIndex = 18;
			// 
			// SameBD_button
			// 
			this->SameBD_button->AutoSize = true;
			this->SameBD_button->Location = System::Drawing::Point(317, 204);
			this->SameBD_button->Name = L"SameBD_button";
			this->SameBD_button->Size = System::Drawing::Size(181, 38);
			this->SameBD_button->TabIndex = 19;
			this->SameBD_button->TabStop = true;
			this->SameBD_button->Text = L"Facturation et Livraison \r\nIDENTIQUE\r\n";
			this->SameBD_button->UseVisualStyleBackColor = true;
			// 
			// NotSameBandD
			// 
			this->NotSameBandD->AutoSize = true;
			this->NotSameBandD->Location = System::Drawing::Point(507, 204);
			this->NotSameBandD->Name = L"NotSameBandD";
			this->NotSameBandD->Size = System::Drawing::Size(181, 38);
			this->NotSameBandD->TabIndex = 20;
			this->NotSameBandD->TabStop = true;
			this->NotSameBandD->Text = L"Facturation et Livraison \r\nDIFFERENTES";
			this->NotSameBandD->UseVisualStyleBackColor = true;
			this->NotSameBandD->Click += gcnew System::EventHandler(this, &CustomerAddForm::NotSameBandD_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(409, 246);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(266, 56);
			this->textBox4->TabIndex = 21;
			// 
			// CustomerAddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 308);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->NotSameBandD);
			this->Controls->Add(this->SameBD_button);
			this->Controls->Add(this->cust_birthdate_picker);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cust_street_name_text);
			this->Controls->Add(this->cust_street_label);
			this->Controls->Add(this->cust_number_label);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cust_street_numb_text);
			this->Controls->Add(this->Add_customer_button);
			this->Controls->Add(this->Cust_add_lastname_textBox);
			this->Controls->Add(this->Cust_add_name_textBox);
			this->Controls->Add(this->Cust_add_lastname);
			this->Controls->Add(this->Cust_add_name);
			this->Name = L"CustomerAddForm";
			this->Text = L"CustomerAddForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		AddressAddForm^ addform = gcnew AddressAddForm();
		addform->ShowDialog();
	}
	private: System::Void NotSameBandD_Click(System::Object^ sender, System::EventArgs^ e) {
		AddressAddForm^ addform = gcnew AddressAddForm();
		addform->ShowDialog();
	}
	private: System::Void Cust_add_lastname_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}