#pragma once

namespace ProjetPOOGRP7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AddressAddForm
	/// </summary>
	public ref class AddressAddForm : public System::Windows::Forms::Form
	{
	public:
		AddressAddForm(void)
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
		~AddressAddForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ cust_street_name_text;
	private: System::Windows::Forms::Label^ cust_street_label;
	private: System::Windows::Forms::Label^ cust_number_label;
	private: System::Windows::Forms::TextBox^ cust_street_numb_text;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cust_street_name_text = (gcnew System::Windows::Forms::TextBox());
			this->cust_street_label = (gcnew System::Windows::Forms::Label());
			this->cust_number_label = (gcnew System::Windows::Forms::Label());
			this->cust_street_numb_text = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(61, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 16);
			this->label3->TabIndex = 23;
			this->label3->Text = L"CP";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(284, 213);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(171, 22);
			this->textBox3->TabIndex = 22;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(97, 213);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(86, 22);
			this->textBox2->TabIndex = 21;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(229, 148);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(215, 22);
			this->textBox1->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 16);
			this->label2->TabIndex = 19;
			this->label2->Text = L"infos complémentaires";
			// 
			// cust_street_name_text
			// 
			this->cust_street_name_text->Location = System::Drawing::Point(284, 92);
			this->cust_street_name_text->Name = L"cust_street_name_text";
			this->cust_street_name_text->Size = System::Drawing::Size(171, 22);
			this->cust_street_name_text->TabIndex = 18;
			// 
			// cust_street_label
			// 
			this->cust_street_label->AutoSize = true;
			this->cust_street_label->Location = System::Drawing::Point(226, 100);
			this->cust_street_label->Name = L"cust_street_label";
			this->cust_street_label->Size = System::Drawing::Size(32, 16);
			this->cust_street_label->TabIndex = 17;
			this->cust_street_label->Text = L"Rue";
			// 
			// cust_number_label
			// 
			this->cust_number_label->AutoSize = true;
			this->cust_number_label->Location = System::Drawing::Point(61, 100);
			this->cust_number_label->Name = L"cust_number_label";
			this->cust_number_label->Size = System::Drawing::Size(18, 16);
			this->cust_number_label->TabIndex = 16;
			this->cust_number_label->Text = L"n°";
			// 
			// cust_street_numb_text
			// 
			this->cust_street_numb_text->Location = System::Drawing::Point(97, 92);
			this->cust_street_numb_text->Name = L"cust_street_numb_text";
			this->cust_street_numb_text->Size = System::Drawing::Size(86, 22);
			this->cust_street_numb_text->TabIndex = 15;
			// 
			// AddressAddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 272);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cust_street_name_text);
			this->Controls->Add(this->cust_street_label);
			this->Controls->Add(this->cust_number_label);
			this->Controls->Add(this->cust_street_numb_text);
			this->Name = L"AddressAddForm";
			this->Text = L"AddressAddForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
