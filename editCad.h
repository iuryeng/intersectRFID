#pragma once

namespace IntersectRFID {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for editCad
	/// </summary>
	public ref class editCad : public System::Windows::Forms::Form
	{
	public:
		editCad(void)
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
		~editCad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  email_text;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  cpf_text;
	private: System::Windows::Forms::TextBox^  rg_text;
	private: System::Windows::Forms::TextBox^  data_text;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  obs_text;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  tel_text;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  nome_text;
	private: System::Windows::Forms::TextBox^  endere_text;
	private: System::Windows::Forms::TextBox^  cep_text;
	private: System::Windows::Forms::TextBox^  bairro_text;
	private: System::Windows::Forms::TextBox^  cod_text;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(editCad::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->email_text = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->cpf_text = (gcnew System::Windows::Forms::TextBox());
			this->rg_text = (gcnew System::Windows::Forms::TextBox());
			this->data_text = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->obs_text = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tel_text = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->nome_text = (gcnew System::Windows::Forms::TextBox());
			this->endere_text = (gcnew System::Windows::Forms::TextBox());
			this->cep_text = (gcnew System::Windows::Forms::TextBox());
			this->bairro_text = (gcnew System::Windows::Forms::TextBox());
			this->cod_text = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->panel1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->groupBox1->Location = System::Drawing::Point(17, -44);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(489, 630);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Cadastro de Clientes";
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->button4->Location = System::Drawing::Point(100, 526);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 34);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Cadastrar";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(219, 526);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 34);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Novo";
			this->button3->UseVisualStyleBackColor = true;
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
			this->panel1->Location = System::Drawing::Point(21, 66);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(462, 427);
			this->panel1->TabIndex = 0;
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
			// cpf_text
			// 
			this->cpf_text->Location = System::Drawing::Point(83, 128);
			this->cpf_text->Name = L"cpf_text";
			this->cpf_text->Size = System::Drawing::Size(75, 24);
			this->cpf_text->TabIndex = 19;
			// 
			// rg_text
			// 
			this->rg_text->Location = System::Drawing::Point(83, 97);
			this->rg_text->Name = L"rg_text";
			this->rg_text->Size = System::Drawing::Size(59, 24);
			this->rg_text->TabIndex = 18;
			// 
			// data_text
			// 
			this->data_text->Location = System::Drawing::Point(363, 97);
			this->data_text->Name = L"data_text";
			this->data_text->Size = System::Drawing::Size(81, 24);
			this->data_text->TabIndex = 17;
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
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(5, 130);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 18);
			this->label10->TabIndex = 15;
			this->label10->Text = L"CPF:";
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
			// obs_text
			// 
			this->obs_text->Location = System::Drawing::Point(83, 320);
			this->obs_text->Multiline = true;
			this->obs_text->Name = L"obs_text";
			this->obs_text->Size = System::Drawing::Size(361, 87);
			this->obs_text->TabIndex = 13;
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
			// tel_text
			// 
			this->tel_text->Location = System::Drawing::Point(342, 256);
			this->tel_text->Name = L"tel_text";
			this->tel_text->Size = System::Drawing::Size(102, 24);
			this->tel_text->TabIndex = 11;
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
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 18);
			this->label5->TabIndex = 9;
			this->label5->Text = L"CEP:";
			// 
			// nome_text
			// 
			this->nome_text->Location = System::Drawing::Point(83, 62);
			this->nome_text->Name = L"nome_text";
			this->nome_text->Size = System::Drawing::Size(361, 24);
			this->nome_text->TabIndex = 8;
			// 
			// endere_text
			// 
			this->endere_text->Location = System::Drawing::Point(83, 156);
			this->endere_text->Name = L"endere_text";
			this->endere_text->Size = System::Drawing::Size(361, 24);
			this->endere_text->TabIndex = 7;
			// 
			// cep_text
			// 
			this->cep_text->Location = System::Drawing::Point(83, 224);
			this->cep_text->Name = L"cep_text";
			this->cep_text->Size = System::Drawing::Size(75, 24);
			this->cep_text->TabIndex = 6;
			// 
			// bairro_text
			// 
			this->bairro_text->Location = System::Drawing::Point(83, 187);
			this->bairro_text->Name = L"bairro_text";
			this->bairro_text->Size = System::Drawing::Size(361, 24);
			this->bairro_text->TabIndex = 5;
			// 
			// cod_text
			// 
			this->cod_text->Location = System::Drawing::Point(83, 25);
			this->cod_text->Name = L"cod_text";
			this->cod_text->Size = System::Drawing::Size(43, 24);
			this->cod_text->TabIndex = 4;
			this->cod_text->Text = L"\r\n";
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Bairro : ";
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(336, 526);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cancelar";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->panel2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->groupBox2->Location = System::Drawing::Point(0, 54);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(489, 522);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Editar Cadastro";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->textBox11);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Location = System::Drawing::Point(17, 33);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(462, 427);
			this->panel2->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(83, 258);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 24);
			this->textBox1->TabIndex = 21;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(5, 261);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 18);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Email:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(83, 128);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(75, 24);
			this->textBox2->TabIndex = 19;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(83, 97);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(59, 24);
			this->textBox3->TabIndex = 18;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(363, 97);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(81, 24);
			this->textBox4->TabIndex = 17;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(210, 97);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(147, 18);
			this->label13->TabIndex = 16;
			this->label13->Text = L"Data de Nascimento:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(5, 130);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(42, 18);
			this->label14->TabIndex = 15;
			this->label14->Text = L"CPF:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(5, 97);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(39, 18);
			this->label15->TabIndex = 14;
			this->label15->Text = L"RG :";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(83, 320);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(361, 87);
			this->textBox5->TabIndex = 13;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(4, 299);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(101, 18);
			this->label16->TabIndex = 12;
			this->label16->Text = L"Observações:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(342, 256);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(102, 24);
			this->textBox6->TabIndex = 11;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(255, 259);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(69, 18);
			this->label17->TabIndex = 10;
			this->label17->Text = L"Telefone:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(4, 224);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(43, 18);
			this->label18->TabIndex = 9;
			this->label18->Text = L"CEP:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(83, 62);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(361, 24);
			this->textBox7->TabIndex = 8;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(83, 156);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(361, 24);
			this->textBox8->TabIndex = 7;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(83, 224);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(75, 24);
			this->textBox9->TabIndex = 6;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(83, 187);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(361, 24);
			this->textBox10->TabIndex = 5;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(83, 25);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(43, 24);
			this->textBox11->TabIndex = 4;
			this->textBox11->Text = L"\r\n";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(4, 161);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(76, 18);
			this->label19->TabIndex = 3;
			this->label19->Text = L"Endereço:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(4, 187);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(60, 18);
			this->label20->TabIndex = 2;
			this->label20->Text = L"Bairro : ";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(5, 67);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(53, 18);
			this->label21->TabIndex = 1;
			this->label21->Text = L"Nome:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(3, 28);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(60, 18);
			this->label22->TabIndex = 0;
			this->label22->Text = L"Código:";
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(100, 472);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 34);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Atualizar";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// editCad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(523, 542);
			this->Controls->Add(this->groupBox1);
			this->Name = L"editCad";
			this->Text = L"editCad";
			this->groupBox1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
