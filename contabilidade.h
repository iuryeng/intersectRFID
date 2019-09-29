#pragma once

namespace IntersectRFID {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for contabilidade
	/// </summary>
	public ref class contabilidade : public System::Windows::Forms::Form
	{
	public:
		contabilidade(void)
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
		~contabilidade()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	protected: 
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::ComboBox^  comboBox1;

	private: System::Windows::Forms::GroupBox^  groupBox4;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;






	protected: 




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea11 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea12 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(contabilidade::typeid));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea11->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea11);
			legend11->Name = L"Legend1";
			this->chart1->Legends->Add(legend11);
			this->chart1->Location = System::Drawing::Point(12, 59);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series11->ChartArea = L"ChartArea1";
			series11->Legend = L"Legend1";
			series11->Name = L"Acessos";
			this->chart1->Series->Add(series11);
			this->chart1->Size = System::Drawing::Size(387, 267);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &contabilidade::chart1_Click);
			// 
			// chart2
			// 
			chartArea12->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea12);
			legend12->Name = L"Legend1";
			this->chart2->Legends->Add(legend12);
			this->chart2->Location = System::Drawing::Point(424, 59);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series12->Legend = L"Legend1";
			series12->Name = L"Faturado";
			this->chart2->Series->Add(series12);
			this->chart2->Size = System::Drawing::Size(387, 267);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(12, 349);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 30);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Gerar Gráfico";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &contabilidade::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->chart2);
			this->groupBox1->Controls->Add(this->chart1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(807, 385);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Estatística";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox4);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(18, 408);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(600, 223);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Definições de Preço";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Valor :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(62, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(43, 24);
			this->textBox1->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(90, 30);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(208, 26);
			this->comboBox1->TabIndex = 3;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Location = System::Drawing::Point(6, 42);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 154);
			this->groupBox3->TabIndex = 23;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Valor geral :";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button6);
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->textBox2);
			this->groupBox4->Controls->Add(this->comboBox1);
			this->groupBox4->Location = System::Drawing::Point(269, 42);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(325, 154);
			this->groupBox4->TabIndex = 24;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Valor específico :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 18);
			this->label2->TabIndex = 0;
			this->label2->Tag = L"oi";
			this->label2->Text = L"Valor :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(90, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(43, 24);
			this->textBox2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 18);
			this->label3->TabIndex = 25;
			this->label3->Tag = L"oi";
			this->label3->Text = L"Cliente :";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(97, 117);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 30);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Salvar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(97, 117);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 30);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Salvar";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(9, 117);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 30);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Editar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(9, 117);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 30);
			this->button6->TabIndex = 25;
			this->button6->Text = L"Editar";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// contabilidade
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(831, 680);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"contabilidade";
			this->Text = L"contabilidade";
			this->Load += gcnew System::EventHandler(this, &contabilidade::contabilidade_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void contabilidade_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {

				 

			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			     this-> chart1-> Series["Acessos"]-> Points-> AddXY("Janeiro",35 );
				 this-> chart1-> Series["Acessos"]-> Points-> AddXY("Fevereiro",95 );
				 this-> chart1-> Series["Acessos"]-> Points-> AddXY("Março",25 );
				 this-> chart1-> Series["Acessos"]-> Points-> AddXY("Abril",130 );
				 this-> chart1-> Series["Acessos"]-> Points-> AddXY("Maio",190 );
				 this-> chart1-> Series["Acessos"]-> Points-> AddXY("Junho",100 );
				 this-> chart2-> Series["Faturado"]-> Points-> AddXY("Janeiro",35 );
				 this-> chart2-> Series["Faturado"]-> Points-> AddXY("Fevereiro",95 );
				 this-> chart2-> Series["Faturado"]-> Points-> AddXY("Março",25 );
				 this-> chart2-> Series["Faturado"]-> Points-> AddXY("Abril",130 );
				 this-> chart2-> Series["Faturado"]-> Points-> AddXY("Maio",190 );
				 this-> chart2-> Series["Faturado"]-> Points-> AddXY("Junho",100 );

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			     this-> chart2-> Series["Faturado"]-> Points-> AddXY("Janeiro",35 );
				 this-> chart2-> Series["Faturado"]-> Points-> AddXY("Fevereiro",95 );
				 this-> chart2-> Series["Faturado"]-> Points-> AddXY("Março",25 );
				 this-> chart2-> Series["Faturado"]-> Points-> AddXY("Abril",130 );
				 this-> chart2-> Series["Faturado"]-> Points-> AddXY("Maio",190 );
				 this-> chart2-> Series["Faturado"]-> Points-> AddXY("Junho",100 );



		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
