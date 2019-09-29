#pragma once
#include "pesquisar.h"
#include "SensRf.h"

namespace IntersectRFID {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for formCad
	/// </summary>
	public ref class formCad : public System::Windows::Forms::Form
	{
	public:
		formCad(void)
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
		~formCad()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 















	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  cod_text;
	private: System::Windows::Forms::TextBox^  bairro_text;
	private: System::Windows::Forms::TextBox^  cep_text;



	private: System::Windows::Forms::TextBox^  endere_text;

	private: System::Windows::Forms::TextBox^  nome_text;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  tel_text;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  obs_text;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  data_text;

	private: System::Windows::Forms::TextBox^  rg_text;
	private: System::Windows::Forms::TextBox^  cpf_text;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  email_text;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::GroupBox^  groupBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(formCad::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cod_text = (gcnew System::Windows::Forms::TextBox());
			this->bairro_text = (gcnew System::Windows::Forms::TextBox());
			this->cep_text = (gcnew System::Windows::Forms::TextBox());
			this->endere_text = (gcnew System::Windows::Forms::TextBox());
			this->nome_text = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tel_text = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->obs_text = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->data_text = (gcnew System::Windows::Forms::TextBox());
			this->rg_text = (gcnew System::Windows::Forms::TextBox());
			this->cpf_text = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->email_text = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(336, 466);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cancelar";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &formCad::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(219, 466);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 34);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Novo";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &formCad::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nome:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Bairro : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Endereço:";
			// 
			// cod_text
			// 
			this->cod_text->Location = System::Drawing::Point(83, 25);
			this->cod_text->Name = L"cod_text";
			this->cod_text->Size = System::Drawing::Size(43, 24);
			this->cod_text->TabIndex = 4;
			this->cod_text->Text = L"\r\n";
			// 
			// bairro_text
			// 
			this->bairro_text->Location = System::Drawing::Point(83, 187);
			this->bairro_text->Name = L"bairro_text";
			this->bairro_text->Size = System::Drawing::Size(361, 24);
			this->bairro_text->TabIndex = 5;
			// 
			// cep_text
			// 
			this->cep_text->Location = System::Drawing::Point(83, 224);
			this->cep_text->Name = L"cep_text";
			this->cep_text->Size = System::Drawing::Size(75, 24);
			this->cep_text->TabIndex = 6;
			// 
			// endere_text
			// 
			this->endere_text->Location = System::Drawing::Point(83, 156);
			this->endere_text->Name = L"endere_text";
			this->endere_text->Size = System::Drawing::Size(361, 24);
			this->endere_text->TabIndex = 7;
			// 
			// nome_text
			// 
			this->nome_text->Location = System::Drawing::Point(83, 62);
			this->nome_text->Name = L"nome_text";
			this->nome_text->Size = System::Drawing::Size(361, 24);
			this->nome_text->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 18);
			this->label5->TabIndex = 9;
			this->label5->Text = L"CEP:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(255, 259);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 18);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Telefone:";
			// 
			// tel_text
			// 
			this->tel_text->Location = System::Drawing::Point(342, 256);
			this->tel_text->Name = L"tel_text";
			this->tel_text->Size = System::Drawing::Size(102, 24);
			this->tel_text->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(4, 299);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 18);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Observações:";
			// 
			// obs_text
			// 
			this->obs_text->Location = System::Drawing::Point(83, 320);
			this->obs_text->Multiline = true;
			this->obs_text->Name = L"obs_text";
			this->obs_text->Size = System::Drawing::Size(361, 87);
			this->obs_text->TabIndex = 13;
			this->obs_text->TextChanged += gcnew System::EventHandler(this, &formCad::textBox7_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(5, 97);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 18);
			this->label9->TabIndex = 14;
			this->label9->Text = L"RG :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(5, 130);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 18);
			this->label10->TabIndex = 15;
			this->label10->Text = L"CPF:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(210, 97);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(147, 18);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Data de Nascimento:";
			// 
			// data_text
			// 
			this->data_text->Location = System::Drawing::Point(363, 97);
			this->data_text->Name = L"data_text";
			this->data_text->Size = System::Drawing::Size(81, 24);
			this->data_text->TabIndex = 17;
			// 
			// rg_text
			// 
			this->rg_text->Location = System::Drawing::Point(83, 97);
			this->rg_text->Name = L"rg_text";
			this->rg_text->Size = System::Drawing::Size(59, 24);
			this->rg_text->TabIndex = 18;
			// 
			// cpf_text
			// 
			this->cpf_text->Location = System::Drawing::Point(83, 128);
			this->cpf_text->Name = L"cpf_text";
			this->cpf_text->Size = System::Drawing::Size(75, 24);
			this->cpf_text->TabIndex = 19;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->email_text);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->cpf_text);
			this->panel1->Controls->Add(this->rg_text);
			this->panel1->Controls->Add(this->data_text);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->obs_text);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->tel_text);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->nome_text);
			this->panel1->Controls->Add(this->endere_text);
			this->panel1->Controls->Add(this->cep_text);
			this->panel1->Controls->Add(this->bairro_text);
			this->panel1->Controls->Add(this->cod_text);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(17, 33);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(462, 427);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &formCad::panel1_Paint);
			// 
			// email_text
			// 
			this->email_text->Location = System::Drawing::Point(83, 258);
			this->email_text->Name = L"email_text";
			this->email_text->Size = System::Drawing::Size(148, 24);
			this->email_text->TabIndex = 21;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(5, 261);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 18);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Email:";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->panel1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(489, 522);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Cadastro de Clientes";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &formCad::groupBox1_Enter);
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->button4->Location = System::Drawing::Point(100, 466);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 34);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Cadastrar";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &formCad::button4_Click);
			// 
			// formCad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(513, 564);
			this->Controls->Add(this->groupBox1);
			this->Name = L"formCad";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"formCad";
			this->Load += gcnew System::EventHandler(this, &formCad::formCad_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void formCad_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			

		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 // Aqui é a conecção com o Banco de dados 
			 
				 String^ constring = L"datasource=localhost;port=3310;username=root;password=1234";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("insert into DataBase.cadastroClient (codigo,nome,RG,dataNasc,cpf,endereco,bairro,cep,email,telefone,obs) values('"+this->cod_text->Text+"','"+this->nome_text->Text+"','"+this->rg_text->Text+"','"+this->data_text->Text+"','"+this->cpf_text->Text+"','"+this->endere_text->Text+"','"+this->bairro_text->Text+"','"+this->cep_text->Text+"','"+this->email_text->Text+"','"+this->tel_text->Text+"','"+this->obs_text->Text+"')  ;",conDataBase);
				 MySqlDataReader^ myReader;
				 try {
				 
					 conDataBase-> Open();
					 myReader=cmdDataBase-> ExecuteReader();
					 MessageBox::Show("Cadastrado!");
					 while (myReader ->Read() ){
			
					  

					 }
					


				 } catch (Exception^ex){
				    
					 MessageBox::Show(ex->Message);
				 
				 }

            //Aqui termina a Conecção e as designações do Banco de Dados 



		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 cod_text ->    Clear();
			 nome_text->    Clear();
			 rg_text->      Clear();
			 cpf_text->     Clear();
			 data_text ->   Clear();
			 endere_text -> Clear();
			 bairro_text -> Clear();
			 cep_text ->    Clear();
			 email_text->   Clear();
		     tel_text ->    Clear();
			 obs_text->     Clear();
		

		 }


private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 		
			 
			 


		 }
};
}
