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
	/// Summary for pesquisar
	/// </summary>
	public ref class pesquisar : public System::Windows::Forms::Form
	{
	public:
		pesquisar(void)
		{
			InitializeComponent();
		    Fillcombo();
			groupBox3->Enabled=false;
			button3-> Enabled = false;
			button6-> Enabled = false;
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~pesquisar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;







	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ListBox^  listBox1;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;



















	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;


























private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::Button^  button6;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(pesquisar::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(6, 45);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(361, 82);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Pesquisar ";
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(6, 35);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(41, 35);
			this->button2->TabIndex = 2;
			this->button2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &pesquisar::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(53, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(302, 22);
			this->textBox1->TabIndex = 1;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(6, 164);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(361, 228);
			this->listBox1->TabIndex = 10;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &pesquisar::listBox1_SelectedIndexChanged);
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->Location = System::Drawing::Point(359, 472);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 34);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Excluir";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->Location = System::Drawing::Point(100, 472);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(102, 34);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Editar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &pesquisar::button5_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->groupBox4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->groupBox3->Location = System::Drawing::Point(397, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(525, 592);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L" Cadastro";
			// 
			// groupBox4
			// 
			this->groupBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->Controls->Add(this->panel2);
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->groupBox4->Location = System::Drawing::Point(18, 45);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(499, 530);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Dados Gerais";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &pesquisar::groupBox4_Enter);
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(228, 472);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 34);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Atualizar";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &pesquisar::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->textBox11);
			this->panel2->Controls->Add(this->textBox12);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Location = System::Drawing::Point(17, 33);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(462, 427);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &pesquisar::panel2_Paint);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(83, 258);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(148, 24);
			this->textBox2->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 18);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Email:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(83, 128);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(75, 24);
			this->textBox3->TabIndex = 19;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(83, 97);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(59, 24);
			this->textBox4->TabIndex = 18;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(363, 97);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(81, 24);
			this->textBox5->TabIndex = 17;
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
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(83, 320);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(361, 87);
			this->textBox6->TabIndex = 13;
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
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(342, 256);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(102, 24);
			this->textBox7->TabIndex = 11;
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
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(83, 62);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(361, 24);
			this->textBox8->TabIndex = 8;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(83, 156);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(361, 24);
			this->textBox9->TabIndex = 7;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(83, 224);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(75, 24);
			this->textBox10->TabIndex = 6;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(83, 187);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(361, 24);
			this->textBox11->TabIndex = 5;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(83, 25);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(43, 24);
			this->textBox12->TabIndex = 4;
			this->textBox12->Text = L"\r\n";
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
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(6, 428);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 34);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Consultar ";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &pesquisar::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->groupBox1);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Location = System::Drawing::Point(8, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(383, 485);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Consulta ";
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->Location = System::Drawing::Point(114, 428);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(102, 34);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Nova";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &pesquisar::button6_Click_1);
			// 
			// pesquisar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(926, 654);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Name = L"pesquisar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"pesquisar";
			this->Load += gcnew System::EventHandler(this, &pesquisar::pesquisar_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void pesquisar_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
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
						listBox1-> Items -> Add(vNome);



					 }
					


				 } catch (Exception^ex){
				    
					 MessageBox::Show(ex->Message);
				 
				 }





		 
		 
		 }


//fim de fill



private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {



		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			
//Area que faz a pesquisa usando o metodo findString

            int index = 0;
			String^temp = textBox1 -> Text;
			listBox1 -> Text ="";
			listBox1 -> Text = temp;

			while (index < listBox1 -> Text -> LastIndexOf(textBox1->Text))
			{

				listBox1->FindString( temp);
				listBox1->SetSelected( index, true );
				index =   listBox1-> Text -> IndexOf(textBox1-> Text, index)+1;
			
			}
// fim do metodo findString	



		 }

private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			    String^ listboxVal = listBox1-> Text ;


			 // Aqui é a conecção com o Banco de dados 
			 
				 String^ constring = L"datasource=localhost;port=3310;username=root;password=1234";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from database.cadastroClient where nome='"+listboxVal+"'  ;",conDataBase);
				 MySqlDataReader^ myReader;
				 try {
				 
					 conDataBase-> Open();
					 myReader=cmdDataBase-> ExecuteReader();
					
					if(myReader ->Read() ){
						
						button3-> Enabled = true;
						
			

					 }
					


				 } catch (Exception^ex){
				    
					 MessageBox::Show(ex->Message);
				 
				 }

            //Aqui termina a Conecção e as designações do Banco de Dados 





		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

						button1-> Enabled = true;
			 
						textBox12-> ReadOnly=false;
						textBox8->  ReadOnly=false;
						textBox4->  ReadOnly=false;
						textBox5->  ReadOnly=false;
						textBox3->  ReadOnly=false;
						textBox9->  ReadOnly=false;
						textBox11-> ReadOnly=false;
						textBox10-> ReadOnly=false;
						textBox2->  ReadOnly=false;
						textBox7->  ReadOnly=false;
						textBox6->  ReadOnly=false;
						


		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
                 groupBox3->Enabled=true;
				 groupBox1->Enabled=false;
				 button3->Enabled=false;
				 listBox1->Enabled=false;
				 button6-> Enabled = true;
				  

				 String^ listboxVal = listBox1-> Text ;


			 // Aqui é a conecção com o Banco de dados 
			 
				 String^ constring = L"datasource=localhost;port=3310;username=root;password=1234";
				 MySqlConnection^ conDataBase= gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase= gcnew MySqlCommand("select * from database.cadastroClient where nome='"+listboxVal+"'  ;",conDataBase);
				 MySqlDataReader^ myReader;
				 try {
				 
					 conDataBase-> Open();
					 myReader=cmdDataBase-> ExecuteReader();
					
					if(myReader ->Read() ){
						String^ codVal= myReader-> GetInt32("codigo").ToString();
						textBox12-> Text= codVal;
						String^ nomeVal= myReader-> GetString("nome");
						textBox8-> Text= nomeVal;
						String^ rgVal= myReader-> GetInt32("RG").ToString();
						textBox4-> Text= rgVal;
						String^ NascVal= myReader-> GetInt32("dataNasc").ToString();
					    textBox5-> Text= NascVal;
						String^ cpfVal= myReader-> GetInt32("cpf").ToString();
						textBox3-> Text= cpfVal;
						String^ endereVal= myReader-> GetString("endereco");
						textBox9-> Text= endereVal;
						String^ bairroVal= myReader-> GetString("bairro");
						textBox11-> Text= bairroVal;
						String^ cepVal= myReader-> GetInt32("cep").ToString();
						textBox10-> Text= cepVal;
						String^ emailVal= myReader-> GetString("email");
						textBox2-> Text= emailVal;
						String^ foneVal= myReader-> GetInt32("telefone").ToString();
						textBox7-> Text= foneVal;
						String^ obsVal= myReader-> GetInt32("obs").ToString();
						textBox6-> Text= obsVal;
					
						textBox12->  ReadOnly=true;
						textBox8->  ReadOnly=true;
						textBox4->  ReadOnly=true;
						textBox5->  ReadOnly=true;
						textBox3->  ReadOnly=true;
						textBox9->  ReadOnly=true;
						textBox11->  ReadOnly=true;
						textBox10->  ReadOnly=true;
						textBox2->  ReadOnly=true;
						textBox7->  ReadOnly=true;
						textBox6->  ReadOnly=true;
						
						
						
			

					 }
					


				 } catch (Exception^ex){
				    
					 MessageBox::Show(ex->Message);
				 
				 }

            //Aqui termina a Conecção e as designações do Banco de Dados 


		 }
private: System::Void groupBox2_Enter_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void nome_recebido_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {

			     groupBox3->Enabled=false;
				 groupBox1->Enabled=true;
				 button3->Enabled=true;
				 listBox1->Enabled=true;
				 button6-> Enabled = false;


		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {



			
		 }
private: System::Void groupBox4_Enter(System::Object^  sender, System::EventArgs^  e) {

			 button1-> Enabled = false;

		 }
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}
