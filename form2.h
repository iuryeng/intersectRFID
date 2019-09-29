#pragma once
#include "formCad.h"
#include "opcoes.h"
#include "SensRf.h"
#include "cargaCard.h"
#include "pesquisar.h"
#include "contabilidade.h"
#include "stdafx.h"

namespace IntersectRFID {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form2
	/// </summary>
	public ref class form2 : public System::Windows::Forms::Form
	{
	public:
		form2(void)
		{
			InitializeComponent();
			 
			DateTime datetime = DateTime::Now;
			this-> toolStripStatusLabel1 -> Text = datetime.ToString();
		 	 
			timerData -> Start();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  cadastroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  inserirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  consultarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sensorRFIDToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lerCodigoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  configuraçõesToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  contabilidadeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  graficosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pendenciasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saldoToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;


	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;

	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton6;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  excluirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::Timer^  timerData;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form2::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->cadastroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inserirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->excluirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contabilidadeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graficosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pendenciasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saldoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sensorRFIDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lerCodigoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configuraçõesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timerData = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->cadastroToolStripMenuItem, 
				this->contabilidadeToolStripMenuItem, this->sensorRFIDToolStripMenuItem, this->configuraçõesToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(364, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// cadastroToolStripMenuItem
			// 
			this->cadastroToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->inserirToolStripMenuItem, 
				this->consultarToolStripMenuItem, this->excluirToolStripMenuItem});
			this->cadastroToolStripMenuItem->Name = L"cadastroToolStripMenuItem";
			this->cadastroToolStripMenuItem->Size = System::Drawing::Size(80, 24);
			this->cadastroToolStripMenuItem->Text = L"Cadastro";
			// 
			// inserirToolStripMenuItem
			// 
			this->inserirToolStripMenuItem->Name = L"inserirToolStripMenuItem";
			this->inserirToolStripMenuItem->Size = System::Drawing::Size(140, 24);
			this->inserirToolStripMenuItem->Text = L"Inserir ";
			// 
			// consultarToolStripMenuItem
			// 
			this->consultarToolStripMenuItem->Name = L"consultarToolStripMenuItem";
			this->consultarToolStripMenuItem->Size = System::Drawing::Size(140, 24);
			this->consultarToolStripMenuItem->Text = L"Consultar";
			// 
			// excluirToolStripMenuItem
			// 
			this->excluirToolStripMenuItem->Name = L"excluirToolStripMenuItem";
			this->excluirToolStripMenuItem->Size = System::Drawing::Size(140, 24);
			this->excluirToolStripMenuItem->Text = L"Excluir";
			// 
			// contabilidadeToolStripMenuItem
			// 
			this->contabilidadeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->graficosToolStripMenuItem, 
				this->pendenciasToolStripMenuItem, this->saldoToolStripMenuItem});
			this->contabilidadeToolStripMenuItem->Name = L"contabilidadeToolStripMenuItem";
			this->contabilidadeToolStripMenuItem->Size = System::Drawing::Size(115, 24);
			this->contabilidadeToolStripMenuItem->Text = L"Contabilidade";
			// 
			// graficosToolStripMenuItem
			// 
			this->graficosToolStripMenuItem->Name = L"graficosToolStripMenuItem";
			this->graficosToolStripMenuItem->Size = System::Drawing::Size(152, 24);
			this->graficosToolStripMenuItem->Text = L"Graficos";
			// 
			// pendenciasToolStripMenuItem
			// 
			this->pendenciasToolStripMenuItem->Name = L"pendenciasToolStripMenuItem";
			this->pendenciasToolStripMenuItem->Size = System::Drawing::Size(152, 24);
			this->pendenciasToolStripMenuItem->Text = L"Pendencias";
			// 
			// saldoToolStripMenuItem
			// 
			this->saldoToolStripMenuItem->Name = L"saldoToolStripMenuItem";
			this->saldoToolStripMenuItem->Size = System::Drawing::Size(152, 24);
			this->saldoToolStripMenuItem->Text = L"Saldo";
			// 
			// sensorRFIDToolStripMenuItem
			// 
			this->sensorRFIDToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->lerCodigoToolStripMenuItem});
			this->sensorRFIDToolStripMenuItem->Name = L"sensorRFIDToolStripMenuItem";
			this->sensorRFIDToolStripMenuItem->Size = System::Drawing::Size(100, 24);
			this->sensorRFIDToolStripMenuItem->Text = L"Sensor RFID";
			// 
			// lerCodigoToolStripMenuItem
			// 
			this->lerCodigoToolStripMenuItem->Name = L"lerCodigoToolStripMenuItem";
			this->lerCodigoToolStripMenuItem->Size = System::Drawing::Size(128, 24);
			this->lerCodigoToolStripMenuItem->Text = L"Opções";
			this->lerCodigoToolStripMenuItem->Click += gcnew System::EventHandler(this, &form2::lerCodigoToolStripMenuItem_Click);
			// 
			// configuraçõesToolStripMenuItem
			// 
			this->configuraçõesToolStripMenuItem->Name = L"configuraçõesToolStripMenuItem";
			this->configuraçõesToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->configuraçõesToolStripMenuItem->Text = L"Sair";
			this->configuraçõesToolStripMenuItem->Click += gcnew System::EventHandler(this, &form2::configuraçõesToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 399);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(364, 25);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(151, 20);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Click += gcnew System::EventHandler(this, &form2::toolStripStatusLabel1_Click_1);
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::White;
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(64, 64);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->toolStripButton1, 
				this->toolStripButton5, this->toolStripButton6, this->toolStripButton3, this->toolStripButton4});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->toolStrip1->Size = System::Drawing::Size(364, 71);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &form2::toolStrip1_ItemClicked);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->BackColor = System::Drawing::Color::Transparent;
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(68, 68);
			this->toolStripButton1->Text = L"Cadastrar";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &form2::toolStripButton1_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->BackColor = System::Drawing::Color::Transparent;
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(68, 68);
			this->toolStripButton5->Text = L"Pesquisar ";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &form2::toolStripButton5_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->BackColor = System::Drawing::Color::Transparent;
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(68, 68);
			this->toolStripButton6->Text = L"Cartões";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &form2::toolStripButton6_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->BackColor = System::Drawing::Color::Transparent;
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(68, 68);
			this->toolStripButton3->Text = L"Carregar";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &form2::toolStripButton3_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->BackColor = System::Drawing::Color::Transparent;
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(68, 68);
			this->toolStripButton4->Text = L"Balanço";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &form2::toolStripButton4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-42, 102);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(459, 294);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &form2::pictureBox1_Click);
			// 
			// timerData
			// 
			this->timerData->Tick += gcnew System::EventHandler(this, &form2::timer1_Tick);
			// 
			// form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(364, 424);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sistema de Cadastro RFID";
			this->Load += gcnew System::EventHandler(this, &form2::form2_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void toolStripButton4_Click(System::Object^  sender, System::EventArgs^  e) {

			   contabilidade^ conta = gcnew contabilidade();
			   conta-> ShowDialog();


		 }
private: System::Void form2_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 formCad^ Cadastro = gcnew formCad();
			 Cadastro-> ShowDialog();
			
		 }
private: System::Void toolStripButton6_Click(System::Object^  sender, System::EventArgs^  e) {


			 SensRf^ cartao = gcnew SensRf();
			 cartao -> ShowDialog();
			 
		

		 }
private: System::Void lerCodigoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 opcoes^ opc = gcnew opcoes();
			 opc -> ShowDialog();
		 }
private: System::Void configuraçõesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Application::Exit();
		 }
private: System::Void toolStripButton5_Click(System::Object^  sender, System::EventArgs^  e) {

			 pesquisar^ pesq = gcnew pesquisar();
			 pesq-> ShowDialog();

		 }
private: System::Void toolStripButton3_Click(System::Object^  sender, System::EventArgs^  e) {
			  cargaCard^ carga = gcnew cargaCard();
			  carga-> ShowDialog();

		 }
private: System::Void toolStripStatusLabel1_Click(System::Object^  sender, System::EventArgs^  e) {

			

		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void toolStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
			 		
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

			DateTime datetime = DateTime::Now;
			this-> toolStripStatusLabel1 -> Text = datetime.ToString();
		 }
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {


		 }
private: System::Void toolStripSplitButton1_ButtonClick(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void toolStripStatusLabel1_Click_1(System::Object^  sender, System::EventArgs^  e) {

			
		 }
};
}
