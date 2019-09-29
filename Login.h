#pragma once
#include "form2.h"
#include "stdafx.h"

namespace IntersectRFID {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  usuario_lbl;




	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  senha_lbl;


	private: System::Windows::Forms::GroupBox^  Acesso;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->usuario_lbl = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->senha_lbl = (gcnew System::Windows::Forms::TextBox());
			this->Acesso = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->Acesso->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-9, -18);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(256, 256);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(26, 141);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 33);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Entrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// usuario_lbl
			// 
			this->usuario_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->usuario_lbl->Location = System::Drawing::Point(26, 59);
			this->usuario_lbl->Margin = System::Windows::Forms::Padding(4);
			this->usuario_lbl->MaxLength = 10;
			this->usuario_lbl->Name = L"usuario_lbl";
			this->usuario_lbl->Size = System::Drawing::Size(160, 23);
			this->usuario_lbl->TabIndex = 31;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label2->Location = System::Drawing::Point(23, 89);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 17);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Senha";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 38);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 17);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Usuário";
			// 
			// senha_lbl
			// 
			this->senha_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->senha_lbl->Location = System::Drawing::Point(26, 110);
			this->senha_lbl->Margin = System::Windows::Forms::Padding(4);
			this->senha_lbl->Name = L"senha_lbl";
			this->senha_lbl->PasswordChar = '*';
			this->senha_lbl->Size = System::Drawing::Size(160, 23);
			this->senha_lbl->TabIndex = 32;
			// 
			// Acesso
			// 
			this->Acesso->BackColor = System::Drawing::Color::Transparent;
			this->Acesso->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Acesso->Controls->Add(this->senha_lbl);
			this->Acesso->Controls->Add(this->label1);
			this->Acesso->Controls->Add(this->label2);
			this->Acesso->Controls->Add(this->button1);
			this->Acesso->Controls->Add(this->usuario_lbl);
			this->Acesso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Acesso->ForeColor = System::Drawing::Color::Black;
			this->Acesso->Location = System::Drawing::Point(232, 15);
			this->Acesso->Name = L"Acesso";
			this->Acesso->Size = System::Drawing::Size(214, 194);
			this->Acesso->TabIndex = 35;
			this->Acesso->TabStop = false;
			this->Acesso->Text = L"Acesso";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(469, 221);
			this->Controls->Add(this->Acesso);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->Acesso->ResumeLayout(false);
			this->Acesso->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				  String^ constring = L"datasource=localhost;port=3310;username=root;password=1234";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from DataBase.edata where usuario ='"+this->usuario_lbl->Text+"' and senha= '"+this->senha_lbl->Text+"' ;",conDataBase);
				 MySqlDataReader^ myReader;
				 try {
				 
					 conDataBase-> Open();
					 myReader=cmdDataBase-> ExecuteReader();
					 int count=0;
					 while (myReader ->Read() ){
					
					  count= count +1;

					 }
					 if(count==1){
					 this-> Hide();
					  form2^ F2 = gcnew form2();
					  F2 -> ShowDialog();
					 }
					 else if(count >1){
						 MessageBox::Show("duplo usuario e senha ... acesso negado!");
					 }
					 else
						  MessageBox::Show("usuario e ou senha incorretos! por favor tente novamente.");
							
				 } catch (Exception^ex){
				    
					 MessageBox::Show(ex->Message);
				 
				 }

					/* form2^ F2 = gcnew form2();
					 F2 -> ShowDialog();*/
			

			 }
private: System::Void Login_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
