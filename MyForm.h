#pragma once
#include "CustomerAddForm.h"
#include "AddressAddForm.h"
#include "dbConnect.h"
#include "Ctrl_Customers.h"
#include "Ctrl_Employee.h"
#include "UserLogin.h"
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

	private: System::Windows::Forms::TabControl^ Features_tab;
		   int compteur = 0;
		   System::String^ idSelected = "null";

	private:
		NS_Ctrl::Ctrl_Employee^ oSvc;
		NS_Models::dbConnect^ cad;
		System::Data::DataSet^ oDs;
	
	protected:


	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage5;


	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage4;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::TextBox^ lname_text;
	private: System::Windows::Forms::TextBox^ fname_text;
	private: System::Windows::Forms::TextBox^ id_text;
	private: System::Windows::Forms::Button^ searchCust_button;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ deleteCust_button;

	private: System::Windows::Forms::Button^ updateCust_button;

	private: System::Windows::Forms::Button^ addCust_button;

	private: System::Windows::Forms::Label^ label_fname;
	private: System::Windows::Forms::Label^ Title_tab1;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ title_tab4;
	private: System::Windows::Forms::Splitter^ splitter2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Splitter^ splitter3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Splitter^ splitter4;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Button^ button1;

















	protected:







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Features_tab = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->lname_text = (gcnew System::Windows::Forms::TextBox());
			this->fname_text = (gcnew System::Windows::Forms::TextBox());
			this->id_text = (gcnew System::Windows::Forms::TextBox());
			this->searchCust_button = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->deleteCust_button = (gcnew System::Windows::Forms::Button());
			this->updateCust_button = (gcnew System::Windows::Forms::Button());
			this->addCust_button = (gcnew System::Windows::Forms::Button());
			this->label_fname = (gcnew System::Windows::Forms::Label());
			this->Title_tab1 = (gcnew System::Windows::Forms::Label());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->splitter3 = (gcnew System::Windows::Forms::Splitter());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->splitter4 = (gcnew System::Windows::Forms::Splitter());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->title_tab4 = (gcnew System::Windows::Forms::Label());
			this->splitter2 = (gcnew System::Windows::Forms::Splitter());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Features_tab->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// Features_tab
			// 
			this->Features_tab->Controls->Add(this->tabPage1);
			this->Features_tab->Controls->Add(this->tabPage2);
			this->Features_tab->Controls->Add(this->tabPage3);
			this->Features_tab->Controls->Add(this->tabPage4);
			this->Features_tab->Controls->Add(this->tabPage5);
			this->Features_tab->Controls->Add(this->tabPage6);
			resources->ApplyResources(this->Features_tab, L"Features_tab");
			this->Features_tab->Name = L"Features_tab";
			this->Features_tab->SelectedIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->dateTimePicker1);
			this->tabPage1->Controls->Add(this->lname_text);
			this->tabPage1->Controls->Add(this->fname_text);
			this->tabPage1->Controls->Add(this->id_text);
			this->tabPage1->Controls->Add(this->searchCust_button);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->deleteCust_button);
			this->tabPage1->Controls->Add(this->updateCust_button);
			this->tabPage1->Controls->Add(this->addCust_button);
			this->tabPage1->Controls->Add(this->label_fname);
			this->tabPage1->Controls->Add(this->Title_tab1);
			this->tabPage1->Controls->Add(this->splitter1);
			resources->ApplyResources(this->tabPage1, L"tabPage1");
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			resources->ApplyResources(this->dateTimePicker1, L"dateTimePicker1");
			this->dateTimePicker1->MaxDate = System::DateTime(2100, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			// 
			// lname_text
			// 
			resources->ApplyResources(this->lname_text, L"lname_text");
			this->lname_text->Name = L"lname_text";
			// 
			// fname_text
			// 
			resources->ApplyResources(this->fname_text, L"fname_text");
			this->fname_text->Name = L"fname_text";
			// 
			// id_text
			// 
			resources->ApplyResources(this->id_text, L"id_text");
			this->id_text->Name = L"id_text";
			// 
			// searchCust_button
			// 
			resources->ApplyResources(this->searchCust_button, L"searchCust_button");
			this->searchCust_button->Name = L"searchCust_button";
			this->searchCust_button->UseVisualStyleBackColor = true;
			this->searchCust_button->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->dataGridView1, L"dataGridView1");
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			// 
			// deleteCust_button
			// 
			resources->ApplyResources(this->deleteCust_button, L"deleteCust_button");
			this->deleteCust_button->Name = L"deleteCust_button";
			this->deleteCust_button->UseVisualStyleBackColor = true;
			this->deleteCust_button->Click += gcnew System::EventHandler(this, &MyForm::deleteCust_button_Click);
			// 
			// updateCust_button
			// 
			resources->ApplyResources(this->updateCust_button, L"updateCust_button");
			this->updateCust_button->Name = L"updateCust_button";
			this->updateCust_button->UseVisualStyleBackColor = true;
			this->updateCust_button->Click += gcnew System::EventHandler(this, &MyForm::updateCust_button_Click);
			// 
			// addCust_button
			// 
			resources->ApplyResources(this->addCust_button, L"addCust_button");
			this->addCust_button->Name = L"addCust_button";
			this->addCust_button->UseVisualStyleBackColor = true;
			this->addCust_button->Click += gcnew System::EventHandler(this, &MyForm::add_employee_button_Click);
			// 
			// label_fname
			// 
			resources->ApplyResources(this->label_fname, L"label_fname");
			this->label_fname->Name = L"label_fname";
			// 
			// Title_tab1
			// 
			resources->ApplyResources(this->Title_tab1, L"Title_tab1");
			this->Title_tab1->Name = L"Title_tab1";
			// 
			// splitter1
			// 
			this->splitter1->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->splitter1, L"splitter1");
			this->splitter1->Name = L"splitter1";
			this->splitter1->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->splitter3);
			resources->ApplyResources(this->tabPage2, L"tabPage2");
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			resources->ApplyResources(this->textBox4, L"textBox4");
			this->textBox4->Name = L"textBox4";
			// 
			// textBox5
			// 
			resources->ApplyResources(this->textBox5, L"textBox5");
			this->textBox5->Name = L"textBox5";
			// 
			// textBox6
			// 
			resources->ApplyResources(this->textBox6, L"textBox6");
			this->textBox6->Name = L"textBox6";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Name = L"label9";
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->Name = L"label10";
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->Name = L"label11";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			// 
			// button8
			// 
			resources->ApplyResources(this->button8, L"button8");
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			resources->ApplyResources(this->button9, L"button9");
			this->button9->Name = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			resources->ApplyResources(this->button10, L"button10");
			this->button10->Name = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			resources->ApplyResources(this->button11, L"button11");
			this->button11->Name = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// splitter3
			// 
			resources->ApplyResources(this->splitter3, L"splitter3");
			this->splitter3->Name = L"splitter3";
			this->splitter3->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox12);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->textBox11);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->textBox10);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->textBox7);
			this->tabPage3->Controls->Add(this->textBox8);
			this->tabPage3->Controls->Add(this->textBox9);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->button12);
			this->tabPage3->Controls->Add(this->button13);
			this->tabPage3->Controls->Add(this->button14);
			this->tabPage3->Controls->Add(this->button15);
			this->tabPage3->Controls->Add(this->splitter4);
			resources->ApplyResources(this->tabPage3, L"tabPage3");
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox12
			// 
			resources->ApplyResources(this->textBox12, L"textBox12");
			this->textBox12->Name = L"textBox12";
			// 
			// label17
			// 
			resources->ApplyResources(this->label17, L"label17");
			this->label17->Name = L"label17";
			// 
			// textBox11
			// 
			resources->ApplyResources(this->textBox11, L"textBox11");
			this->textBox11->Name = L"textBox11";
			// 
			// label16
			// 
			resources->ApplyResources(this->label16, L"label16");
			this->label16->Name = L"label16";
			// 
			// textBox10
			// 
			resources->ApplyResources(this->textBox10, L"textBox10");
			this->textBox10->Name = L"textBox10";
			// 
			// label15
			// 
			resources->ApplyResources(this->label15, L"label15");
			this->label15->Name = L"label15";
			// 
			// textBox7
			// 
			resources->ApplyResources(this->textBox7, L"textBox7");
			this->textBox7->Name = L"textBox7";
			// 
			// textBox8
			// 
			resources->ApplyResources(this->textBox8, L"textBox8");
			this->textBox8->Name = L"textBox8";
			// 
			// textBox9
			// 
			resources->ApplyResources(this->textBox9, L"textBox9");
			this->textBox9->Name = L"textBox9";
			// 
			// label12
			// 
			resources->ApplyResources(this->label12, L"label12");
			this->label12->Name = L"label12";
			// 
			// label13
			// 
			resources->ApplyResources(this->label13, L"label13");
			this->label13->Name = L"label13";
			// 
			// label14
			// 
			resources->ApplyResources(this->label14, L"label14");
			this->label14->Name = L"label14";
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Name = L"label8";
			// 
			// button12
			// 
			resources->ApplyResources(this->button12, L"button12");
			this->button12->Name = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			resources->ApplyResources(this->button13, L"button13");
			this->button13->Name = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			resources->ApplyResources(this->button14, L"button14");
			this->button14->Name = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			resources->ApplyResources(this->button15, L"button15");
			this->button15->Name = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// splitter4
			// 
			resources->ApplyResources(this->splitter4, L"splitter4");
			this->splitter4->Name = L"splitter4";
			this->splitter4->TabStop = false;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->button5);
			this->tabPage4->Controls->Add(this->textBox1);
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Controls->Add(this->textBox2);
			this->tabPage4->Controls->Add(this->button7);
			this->tabPage4->Controls->Add(this->textBox3);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->title_tab4);
			this->tabPage4->Controls->Add(this->splitter2);
			resources->ApplyResources(this->tabPage4, L"tabPage4");
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			resources->ApplyResources(this->button5, L"button5");
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			// 
			// button6
			// 
			resources->ApplyResources(this->button6, L"button6");
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			// 
			// button7
			// 
			resources->ApplyResources(this->button7, L"button7");
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			resources->ApplyResources(this->textBox3, L"textBox3");
			this->textBox3->Name = L"textBox3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// title_tab4
			// 
			resources->ApplyResources(this->title_tab4, L"title_tab4");
			this->title_tab4->Name = L"title_tab4";
			// 
			// splitter2
			// 
			resources->ApplyResources(this->splitter2, L"splitter2");
			this->splitter2->Name = L"splitter2";
			this->splitter2->TabStop = false;
			// 
			// tabPage5
			// 
			resources->ApplyResources(this->tabPage5, L"tabPage5");
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			resources->ApplyResources(this->tabPage6, L"tabPage6");
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->Controls->Add(this->Features_tab);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Features_tab->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		int customer_id = 0;

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->oSvc = gcnew NS_Ctrl::Ctrl_Employee();
	/*UserLogin^ Form = gcnew UserLogin;
	Form->ShowDialog();
	if (!(Form->DialogResult == System::Windows::Forms::DialogResult::OK))
	{
		this->Close();
	}*/
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//String^ rec1;
	//String^ rec2;

	//rec1 = fname_text->Text->ToString();
	//rec2 = lname_text->Text->ToString();

	//NS_Models::dbConnect^ connection = gcnew NS_Models::dbConnect;
	//dataGridView1->ClearSelection();
	//dataGridView1->Rows->Clear();
	//this->oDs = NS_Ctrl::Ctrl_Customers::listCustomer(rec1);
	//NS_Ctrl::Ctrl_Customers::listCustomer(rec1);
	NS_Ctrl::Ctrl_Customers^ OB_Ctrl_customer = gcnew NS_Ctrl::Ctrl_Customers();
	this->dataGridView1->Refresh();
	this->oDs = OB_Ctrl_customer->listCustomer(fname_text->Text, lname_text->Text);
	this->dataGridView1->DataSource = this->oDs;
	//this->dataGridView1->DataMember = "Clients";
}
private: System::Void add_employee_button_Click(System::Object^ sender, System::EventArgs^ e) {
	CustomerAddForm^ AddCust = gcnew CustomerAddForm;
	AddCust->ShowDialog();

}
private: System::Void updateCust_button_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_Ctrl::Ctrl_Customers^ OB_Ctrl_customer = gcnew NS_Ctrl::Ctrl_Customers();
	this->dataGridView1->Refresh();
	OB_Ctrl_customer->UPDATE(fname_text->Text, lname_text->Text, dateTimePicker1->Value, 0);
	this->dataGridView1->DataSource = OB_Ctrl_customer->getDataSet();
	//this->dataGridView1->DataMember = "Clients";


}
private: System::Void deleteCust_button_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_Ctrl::Ctrl_Customers^ OB_Ctrl_customer = gcnew NS_Ctrl::Ctrl_Customers();
	this->dataGridView1->Refresh();
	OB_Ctrl_customer->DELETE(customer_id);
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	AddressAddForm^ AddressForm = gcnew AddressAddForm();
	AddressForm->getCustomer(customer_id);
	AddressForm->ShowDialog();
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