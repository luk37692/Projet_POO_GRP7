#pragma once
#include "DbConnect.h"
#include "MyForm.h"
namespace ProjetPOOGRP7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de UserLogin
	/// </summary>
	public ref class UserLogin : public System::Windows::Forms::Form
	{
	public:
		UserLogin(void)
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
		~UserLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ email_label;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ email_textBox;
	private: System::Windows::Forms::TextBox^ pswdTextBox;
	private: System::Windows::Forms::Button^ Login_button;


	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->email_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->email_textBox = (gcnew System::Windows::Forms::TextBox());
			this->pswdTextBox = (gcnew System::Windows::Forms::TextBox());
			this->Login_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// email_label
			// 
			this->email_label->AutoSize = true;
			this->email_label->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_label->Location = System::Drawing::Point(103, 20);
			this->email_label->Name = L"email_label";
			this->email_label->Size = System::Drawing::Size(111, 28);
			this->email_label->TabIndex = 0;
			this->email_label->Text = L"E-mail : ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Mot de passe:";
			// 
			// email_textBox
			// 
			this->email_textBox->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_textBox->Location = System::Drawing::Point(229, 20);
			this->email_textBox->Name = L"email_textBox";
			this->email_textBox->Size = System::Drawing::Size(274, 32);
			this->email_textBox->TabIndex = 2;
			// 
			// pswdTextBox
			// 
			this->pswdTextBox->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pswdTextBox->Location = System::Drawing::Point(229, 69);
			this->pswdTextBox->Name = L"pswdTextBox";
			this->pswdTextBox->Size = System::Drawing::Size(274, 32);
			this->pswdTextBox->TabIndex = 3;
			this->pswdTextBox->Text = L"Pswd";
			// 
			// Login_button
			// 
			this->Login_button->Location = System::Drawing::Point(12, 122);
			this->Login_button->Name = L"Login_button";
			this->Login_button->Size = System::Drawing::Size(491, 59);
			this->Login_button->TabIndex = 4;
			this->Login_button->Text = L"Se connecter";
			this->Login_button->UseVisualStyleBackColor = true;
			this->Login_button->Click += gcnew System::EventHandler(this, &UserLogin::Login_button_Click);
			// 
			// UserLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(515, 193);
			this->Controls->Add(this->Login_button);
			this->Controls->Add(this->pswdTextBox);
			this->Controls->Add(this->email_textBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->email_label);
			this->Name = L"UserLogin";
			this->Text = L"UserLogin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Login_button_Click(System::Object^ sender, System::EventArgs^ e) {
		models::DbConnect();

			String^ querry = "SELECT * FROM EMPLOYEES WHERE username = '" + email_textBox->Text + "' AND password = '" + pswdTextBox->Text + "'";
			//this->Close();
			MyForm^ form2 = gcnew MyForm();
			form2->Show();
			


	}
};
}
