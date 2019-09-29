#pragma once

namespace IntersectRFID {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for opcoes
	/// </summary>
	public ref class opcoes : public System::Windows::Forms::Form
	{
	public:
		opcoes(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			// Botao abrir aberto e fechar , fechado 
			// Abrindo comunicação com a serial 

			 btnabrir->Enabled=true;
			 btnfechar->Enabled=false;
			 cmbporta->Items->AddRange(System::IO::Ports::SerialPort::GetPortNames());
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~opcoes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblrecebido;
	protected: 
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnfechar;
	private: System::Windows::Forms::Button^  btnabrir;
	private: System::Windows::Forms::ComboBox^  cmbbaud;
	private: System::Windows::Forms::ComboBox^  cmbporta;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button1;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(opcoes::typeid));
			this->lblrecebido = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnfechar = (gcnew System::Windows::Forms::Button());
			this->btnabrir = (gcnew System::Windows::Forms::Button());
			this->cmbbaud = (gcnew System::Windows::Forms::ComboBox());
			this->cmbporta = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblrecebido
			// 
			this->lblrecebido->AutoSize = true;
			this->lblrecebido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.9F));
			this->lblrecebido->ForeColor = System::Drawing::Color::Red;
			this->lblrecebido->Location = System::Drawing::Point(75, 40);
			this->lblrecebido->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblrecebido->Name = L"lblrecebido";
			this->lblrecebido->Size = System::Drawing::Size(16, 17);
			this->lblrecebido->TabIndex = 23;
			this->lblrecebido->Text = L"0";
			this->lblrecebido->Click += gcnew System::EventHandler(this, &opcoes::lblrecebido_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label3->Location = System::Drawing::Point(7, 40);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 17);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Código : ";
			this->label3->Click += gcnew System::EventHandler(this, &opcoes::label3_Click);
			// 
			// btnfechar
			// 
			this->btnfechar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnfechar->Location = System::Drawing::Point(109, 150);
			this->btnfechar->Margin = System::Windows::Forms::Padding(4);
			this->btnfechar->Name = L"btnfechar";
			this->btnfechar->Size = System::Drawing::Size(80, 30);
			this->btnfechar->TabIndex = 21;
			this->btnfechar->Text = L"Fechar";
			this->btnfechar->UseVisualStyleBackColor = true;
			this->btnfechar->Click += gcnew System::EventHandler(this, &opcoes::btnfechar_Click);
			// 
			// btnabrir
			// 
			this->btnabrir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnabrir->Location = System::Drawing::Point(10, 150);
			this->btnabrir->Margin = System::Windows::Forms::Padding(4);
			this->btnabrir->Name = L"btnabrir";
			this->btnabrir->Size = System::Drawing::Size(80, 30);
			this->btnabrir->TabIndex = 20;
			this->btnabrir->Text = L"Abrir";
			this->btnabrir->UseVisualStyleBackColor = true;
			this->btnabrir->Click += gcnew System::EventHandler(this, &opcoes::btnabrir_Click);
			// 
			// cmbbaud
			// 
			this->cmbbaud->FormattingEnabled = true;
			this->cmbbaud->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"2400", L"4800", L"9600", L"115200"});
			this->cmbbaud->Location = System::Drawing::Point(109, 90);
			this->cmbbaud->Margin = System::Windows::Forms::Padding(4);
			this->cmbbaud->Name = L"cmbbaud";
			this->cmbbaud->Size = System::Drawing::Size(80, 26);
			this->cmbbaud->TabIndex = 19;
			// 
			// cmbporta
			// 
			this->cmbporta->FormattingEnabled = true;
			this->cmbporta->Location = System::Drawing::Point(109, 45);
			this->cmbporta->Margin = System::Windows::Forms::Padding(4);
			this->cmbporta->Name = L"cmbporta";
			this->cmbporta->Size = System::Drawing::Size(80, 26);
			this->cmbporta->TabIndex = 18;
			this->cmbporta->SelectedIndexChanged += gcnew System::EventHandler(this, &opcoes::cmbporta_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label2->Location = System::Drawing::Point(7, 90);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 17);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Baud Rate";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label1->Location = System::Drawing::Point(7, 45);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 17);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Porta Serial";
			this->label1->Click += gcnew System::EventHandler(this, &opcoes::label1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 200;
			this->timer1->Tick += gcnew System::EventHandler(this, &opcoes::timer1_Tick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnfechar);
			this->groupBox1->Controls->Add(this->btnabrir);
			this->groupBox1->Controls->Add(this->cmbbaud);
			this->groupBox1->Controls->Add(this->cmbporta);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->groupBox1->Location = System::Drawing::Point(20, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(234, 200);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Definições da Porta Serial";
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->Location = System::Drawing::Point(138, 329);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 34);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Sair";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblrecebido);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->groupBox2->Location = System::Drawing::Point(20, 232);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(234, 82);
			this->groupBox2->TabIndex = 27;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Teste de Comunicação Serial ";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &opcoes::groupBox2_Enter);
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(30, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 34);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Salvar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &opcoes::button1_Click);
			// 
			// opcoes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(272, 375);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"opcoes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"opcoes";
			this->Load += gcnew System::EventHandler(this, &opcoes::opcoes_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {


				  String ^rec=serialPort1->ReadExisting();
				if (rec != "")
				{
					lblrecebido->Text=rec;
					rec="";
				}
			 }
private: System::Void btnabrir_Click(System::Object^  sender, System::EventArgs^  e) 
		 {

			 serialPort1->PortName=cmbporta->Text;
			 serialPort1->BaudRate=Double::Parse(cmbbaud->Text);
			 serialPort1->Open();
			 btnabrir->Enabled=false;
			 btnfechar->Enabled=true;
			 timer1->Enabled=true;

		 }

private: System::Void btnfechar_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
 
			 timer1->Enabled=false;
			 btnabrir->Enabled=true;
			 btnfechar->Enabled=false;
			 serialPort1->Close();
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void opcoes_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void lblrecebido_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void cmbporta_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 


			 	 // Aqui é a conecção com o Banco de dados 
			 
				 String^ constring = L"datasource=localhost;port=3310;username=root;password=1234";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("insert into DataBase.configSerial(nomePorta,comVel) values('"+this->cmbporta->Text+"','"+this->cmbbaud->Text+"') ;",conDataBase);
				 MySqlDataReader^ myReader;
				 try {
				 
					 conDataBase-> Open();
					 myReader=cmdDataBase-> ExecuteReader();
					 MessageBox::Show("Salvo com Sucesso!");
					 while (myReader ->Read() ){
			
					  

					 }
					


				 } catch (Exception^ex){
				    
					 MessageBox::Show(ex->Message);
				 
				 }

            //Aqui termina a Conecção e as designações do Banco de Dados 


		 }
};
}
