#pragma once
#include "cancelar.h"

namespace IntersectRFID {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for cargaCard
	/// </summary>
	public ref class cargaCard : public System::Windows::Forms::Form
	{
	public:
		cargaCard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~cargaCard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(cargaCard::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(19, 29);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(212, 125);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Identificar Cartão";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 76);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 30);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Identificar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(75, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(108, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID Card :";
			// 
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(19, 178);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(212, 137);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Dados Armazenados ";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button3);
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Location = System::Drawing::Point(259, 29);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(212, 125);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Carregar";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(9, 76);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Carregar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(75, 36);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(108, 22);
			this->textBox3->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 17);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Valor : ";
			// 
			// groupBox3
			// 
			this->groupBox3->Location = System::Drawing::Point(259, 178);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(212, 137);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Resultado de Carga";
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->Location = System::Drawing::Point(19, 339);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(102, 34);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Novo";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(129, 339);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 34);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Cancelar";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &cargaCard::button2_Click);
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->Location = System::Drawing::Point(245, 339);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 34);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Sair";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// cargaCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(483, 385);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"cargaCard";
			this->Text = L"cargaCard";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

              cancelar^ cancel = gcnew cancelar();
				  cancel -> ShowDialog();

		 }
};
}
