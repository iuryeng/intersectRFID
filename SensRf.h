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
	/// Summary for SensRf
	/// </summary>
	public ref class SensRf : public System::Windows::Forms::Form
	{
	public:
		SensRf(void)
		{
			InitializeComponent();

			
			Fillcombo();
			AcharPorta();
			progressBar2 -> Hide();
		    btnSalvar->Enabled=false;
			btnAss->Enabled=false;
	




			
		
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SensRf()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnLer;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnAss;


	private: System::Windows::Forms::GroupBox^  groupBox3;


	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  rg_recebido;
	private: System::Windows::Forms::Label^  id_recebido;


	private: System::Windows::Forms::Label^  nome_recebido;

	private: System::Windows::Forms::Label^  cod_recebido;
	private: System::Windows::Forms::ProgressBar^  progressBar2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::TextBox^  cmbbaud;
	private: System::Windows::Forms::TextBox^  cmbporta;
	private: System::Windows::Forms::Button^  btnSalvar;









	private: System::ComponentModel::IContainer^  components;



	protected: 








	protected: 








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SensRf::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnSalvar = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnLer = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->cmbbaud = (gcnew System::Windows::Forms::TextBox());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->cmbporta = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnAss = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->rg_recebido = (gcnew System::Windows::Forms::Label());
			this->id_recebido = (gcnew System::Windows::Forms::Label());
			this->nome_recebido = (gcnew System::Windows::Forms::Label());
			this->cod_recebido = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnSalvar);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->btnLer);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(6, 38);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(223, 132);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ler Cartão";
			// 
			// btnSalvar
			// 
			this->btnSalvar->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnSalvar->Location = System::Drawing::Point(128, 79);
			this->btnSalvar->Name = L"btnSalvar";
			this->btnSalvar->Size = System::Drawing::Size(80, 30);
			this->btnSalvar->TabIndex = 3;
			this->btnSalvar->Text = L"Salvar";
			this->btnSalvar->UseVisualStyleBackColor = true;
			this->btnSalvar->Click += gcnew System::EventHandler(this, &SensRf::btnSalvar_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(42, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(163, 24);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ID : ";
			// 
			// btnLer
			// 
			this->btnLer->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnLer->Location = System::Drawing::Point(42, 79);
			this->btnLer->Name = L"btnLer";
			this->btnLer->Size = System::Drawing::Size(80, 30);
			this->btnLer->TabIndex = 0;
			this->btnLer->Text = L"Ler";
			this->btnLer->UseVisualStyleBackColor = true;
			this->btnLer->Click += gcnew System::EventHandler(this, &SensRf::btnLer_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->cmbbaud);
			this->groupBox2->Controls->Add(this->progressBar2);
			this->groupBox2->Controls->Add(this->cmbporta);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->btnAss);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->groupBox2->Location = System::Drawing::Point(235, 38);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(421, 132);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Associar ";
			// 
			// cmbbaud
			// 
			this->cmbbaud->Location = System::Drawing::Point(350, 89);
			this->cmbbaud->Name = L"cmbbaud";
			this->cmbbaud->Size = System::Drawing::Size(64, 24);
			this->cmbbaud->TabIndex = 22;
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(161, 79);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(118, 30);
			this->progressBar2->TabIndex = 6;
			this->progressBar2->Click += gcnew System::EventHandler(this, &SensRf::progressBar2_Click);
			// 
			// cmbporta
			// 
			this->cmbporta->Location = System::Drawing::Point(351, 59);
			this->cmbporta->Name = L"cmbporta";
			this->cmbporta->Size = System::Drawing::Size(64, 24);
			this->cmbporta->TabIndex = 21;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(75, 27);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(340, 26);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &SensRf::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Cliente : ";
			// 
			// btnAss
			// 
			this->btnAss->Location = System::Drawing::Point(75, 79);
			this->btnAss->Name = L"btnAss";
			this->btnAss->Size = System::Drawing::Size(80, 30);
			this->btnAss->TabIndex = 3;
			this->btnAss->Text = L"Associar";
			this->btnAss->UseVisualStyleBackColor = true;
			this->btnAss->Click += gcnew System::EventHandler(this, &SensRf::button2_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->groupBox2);
			this->groupBox3->Controls->Add(this->groupBox1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->groupBox3->Location = System::Drawing::Point(22, 29);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(662, 187);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Associar Cartão ao Cliente";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->rg_recebido);
			this->groupBox4->Controls->Add(this->id_recebido);
			this->groupBox4->Controls->Add(this->nome_recebido);
			this->groupBox4->Controls->Add(this->cod_recebido);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->groupBox4->Location = System::Drawing::Point(22, 235);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(662, 159);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Resultados Gerados";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &SensRf::groupBox4_Enter);
			// 
			// rg_recebido
			// 
			this->rg_recebido->AutoSize = true;
			this->rg_recebido->Location = System::Drawing::Point(132, 92);
			this->rg_recebido->Name = L"rg_recebido";
			this->rg_recebido->Size = System::Drawing::Size(56, 18);
			this->rg_recebido->TabIndex = 8;
			this->rg_recebido->Text = L"\?\?\?\?\?\?";
			// 
			// id_recebido
			// 
			this->id_recebido->AutoSize = true;
			this->id_recebido->Location = System::Drawing::Point(132, 120);
			this->id_recebido->Name = L"id_recebido";
			this->id_recebido->Size = System::Drawing::Size(56, 18);
			this->id_recebido->TabIndex = 7;
			this->id_recebido->Text = L"\?\?\?\?\?\?";
			// 
			// nome_recebido
			// 
			this->nome_recebido->AutoSize = true;
			this->nome_recebido->Location = System::Drawing::Point(132, 61);
			this->nome_recebido->Name = L"nome_recebido";
			this->nome_recebido->Size = System::Drawing::Size(56, 18);
			this->nome_recebido->TabIndex = 6;
			this->nome_recebido->Text = L"\?\?\?\?\?\?";
			// 
			// cod_recebido
			// 
			this->cod_recebido->AutoSize = true;
			this->cod_recebido->Location = System::Drawing::Point(132, 33);
			this->cod_recebido->Name = L"cod_recebido";
			this->cod_recebido->Size = System::Drawing::Size(56, 18);
			this->cod_recebido->TabIndex = 5;
			this->cod_recebido->Text = L"\?\?\?\?\?\?";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(18, 61);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 18);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Nome : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 120);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 18);
			this->label6->TabIndex = 3;
			this->label6->Text = L"ID Associado:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 18);
			this->label5->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 18);
			this->label4->TabIndex = 1;
			this->label4->Text = L"RG : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 18);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Codigo : ";
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->Location = System::Drawing::Point(582, 407);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(102, 34);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Sair";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &SensRf::button5_Click);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &SensRf::timer1_Tick);
			// 
			// timer1
			// 
			this->timer1->Interval = 200;
			this->timer1->Tick += gcnew System::EventHandler(this, &SensRf::timer1_Tick_1);
			// 
			// SensRf
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(696, 453);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"SensRf";
			this->Text = L"SensRf";
			this->Load += gcnew System::EventHandler(this, &SensRf::SensRf_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 this-> Hide();
			 }
private: System::Void SensRf_Load(System::Object^  sender, System::EventArgs^  e) {
			 
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {


			 btnAss->Enabled=false;
			/* int cont = 0;
			 
			if(btnLer->Enabled==false && btnSalvar->Enabled==false && btnAss->Enabled==false){
			 progressBar2->Show();
			 this ->timer3-> Start(); 
			 btnAss->Enabled=false;
			 btnLer->Enabled=true;
			 cont = cont ++;
			 if (cont >0){progressBar2-> Value =0;}
			 }

			*/
			 // Aqui é a conecção com o Banco de dados 
	
			   String^ codVal = cod_recebido-> Text;

				 String^ constring = L"datasource=localhost;port=3310;username=root;password=1234";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("update DataBase.cadastroClient set idCard='"+this->textBox1->Text+"' where codigo='"+codVal +"'  ;",conDataBase);
				 MySqlDataReader^ myReader;
				 try {
				 
					 conDataBase-> Open();
					 myReader=cmdDataBase-> ExecuteReader();
					 MessageBox::Show("Associado!");
					 while (myReader ->Read() ){
			
					  

					 }
					


				 } catch (Exception^ex){
				    
					 MessageBox::Show(ex->Message);
				 
				 }




			
		 }

private: void AcharPorta(void){
				  
				String^ constring = L"datasource=localhost;port=3310;username=root;password=1234";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from database.configSerial ;",conDataBase);
				 MySqlDataReader^ myReader;
				 try {
				 
					 conDataBase-> Open();
					 myReader=cmdDataBase-> ExecuteReader();
					
					while(myReader ->Read() ){
							String^ portaval= myReader-> GetString("nomePorta");
						    cmbporta-> Text= portaval;
							String^ codVal= myReader-> GetInt32("comVel").ToString();
						    cmbbaud-> Text= codVal;

					 }
					


				 } catch (Exception^ex){
				    
					 MessageBox::Show(ex->Message);
				 
				 }

				  
				  
				  
				  
				  }
//função que executa a rolagem buscada pelo banco de dados 
private: void Fillcombo(void){
		 
		 
			 	 String^ constring = L"datasource=localhost;port=3310;username=root;password=1234";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from database.cadastroClient ;",conDataBase);
				 MySqlDataReader^ myReader;
				 try {
				 
					 conDataBase-> Open();
					 myReader=cmdDataBase-> ExecuteReader();
					
					while(myReader ->Read() ){
						String^ vNome;
						vNome= myReader-> GetString("nome");
						comboBox1-> Items -> Add(vNome);



					 }
					


				 } catch (Exception^ex){
				    
					 MessageBox::Show(ex->Message);
				 
				 }





		 
		 
		 }


//fim de fill


private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {


			    String^ comboval=comboBox1-> Text ;


			 // Aqui é a conecção com o Banco de dados 
			 
				 String^ constring = L"datasource=localhost;port=3310;username=root;password=1234";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from database.cadastroClient where nome='"+comboval +"'  ;",conDataBase);
				 
				 MySqlDataReader^ myReader;
				 try {
				 
					 conDataBase-> Open();
					 myReader=cmdDataBase-> ExecuteReader();
					
					if(myReader ->Read() ){
						String^ codVal= myReader-> GetInt32("codigo").ToString();
						cod_recebido-> Text= codVal;
						String^ nomeVal= myReader-> GetString("nome");
						nome_recebido-> Text= nomeVal;
						String^ rgVal= myReader-> GetInt32("RG").ToString();
						rg_recebido-> Text= rgVal;
						
			
			

					 }
					


				 } catch (Exception^ex){
				    
					 MessageBox::Show(ex->Message);
				 
				 }

            //Aqui termina a Conecção e as designações do Banco de Dados 




		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

			 this-> Hide();
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
/*			 
				  if ( this-> progressBar2-> Value < 100){
				 
				 this-> progressBar2-> Value = this-> progressBar2 ->Value +5 ;
				 	 
				 }
				 else {
			     timer3-> Enabled = false;
				 progressBar2-> Hide();
				 
				 }
				
				*/
		 }
private: System::Void progressBar2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 btnSalvar->Enabled=false;
			 btnAss->Enabled=true;
			  timer1->Enabled=false;
			 serialPort1->Close();
			  
		 }
private: System::Void btnLer_Click(System::Object^  sender, System::EventArgs^  e) {

			 btnLer->Enabled=false;
			   btnSalvar->Enabled=true;

             serialPort1->PortName=cmbporta->Text;
			 serialPort1->BaudRate=Double::Parse(cmbbaud->Text);
	
			 serialPort1->Open();
			 timer1->Enabled=true;

		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			  btnLer->Enabled=true;
		 }
private: System::Void groupBox4_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void timer1_Tick_1(System::Object^  sender, System::EventArgs^  e) {

			 

				  String ^rec=serialPort1->ReadExisting();
				if (rec != "")
				{
					textBox1->Text=rec;
					rec="";
				}
		 }
private: System::Void cmbporta_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void cmbbaud_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnSalvar_Click(System::Object^  sender, System::EventArgs^  e) {

			 btnAss ->Enabled=true;
		 }
};
}
