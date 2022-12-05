#pragma once
#include "CustomerForm.h"
namespace ProjetPOOGRP7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Manage_Cust_button;
	protected:

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
			this->Manage_Cust_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Manage_Cust_button
			// 
			this->Manage_Cust_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Manage_Cust_button->Location = System::Drawing::Point(37, 33);
			this->Manage_Cust_button->Name = L"Manage_Cust_button";
			this->Manage_Cust_button->Size = System::Drawing::Size(162, 519);
			this->Manage_Cust_button->TabIndex = 0;
			this->Manage_Cust_button->Text = L"Gestion Client";
			this->Manage_Cust_button->UseVisualStyleBackColor = true;
			this->Manage_Cust_button->Click += gcnew System::EventHandler(this, &MyForm::Manage_Cust_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 572);
			this->Controls->Add(this->Manage_Cust_button);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Manage_Cust_button_Click(System::Object^ sender, System::EventArgs^ e) {
		CustomerForm^ addform = gcnew CustomerForm();
		addform->ShowDialog();
	}
	};
}