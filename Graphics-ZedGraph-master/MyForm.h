#pragma once
#include <math.h>

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  xi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  vi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ v2i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ vi_v2i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OLP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ hi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ui;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ modui_vi;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ОЛП;




	protected:
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
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vi_v2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ОЛП = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ui = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->modui_vi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(14, 37);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(668, 402);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(844, 475);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->i, this->xi,
					this->vi, this->v2i, this->vi_v2i, this->ОЛП, this->hi, this->C1, this->C2, this->ui, this->modui_vi
			});
			this->dataGridView1->Location = System::Drawing::Point(700, 37);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(431, 402);
			this->dataGridView1->TabIndex = 2;
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->MinimumWidth = 6;
			this->i->Name = L"i";
			this->i->ReadOnly = true;
			this->i->Width = 35;
			// 
			// xi
			// 
			this->xi->HeaderText = L"xi";
			this->xi->MinimumWidth = 6;
			this->xi->Name = L"xi";
			this->xi->ReadOnly = true;
			this->xi->Width = 35;
			// 
			// vi
			// 
			this->vi->HeaderText = L"vi";
			this->vi->MinimumWidth = 6;
			this->vi->Name = L"vi";
			this->vi->ReadOnly = true;
			this->vi->Width = 35;
			// 
			// v2i
			// 
			this->v2i->HeaderText = L"v2i";
			this->v2i->MinimumWidth = 6;
			this->v2i->Name = L"v2i";
			this->v2i->ReadOnly = true;
			this->v2i->Width = 35;
			// 
			// vi_v2i
			// 
			this->vi_v2i->HeaderText = L"vi-v2i";
			this->vi_v2i->MinimumWidth = 6;
			this->vi_v2i->Name = L"vi_v2i";
			this->vi_v2i->ReadOnly = true;
			this->vi_v2i->Width = 50;
			// 
			// ОЛП
			// 
			this->ОЛП->HeaderText = L"ОЛП";
			this->ОЛП->MinimumWidth = 6;
			this->ОЛП->Name = L"ОЛП";
			this->ОЛП->ReadOnly = true;
			this->ОЛП->Width = 45;
			// 
			// hi
			// 
			this->hi->HeaderText = L"hi";
			this->hi->MinimumWidth = 6;
			this->hi->Name = L"hi";
			this->hi->ReadOnly = true;
			this->hi->Width = 35;
			// 
			// C1
			// 
			this->C1->HeaderText = L"C1";
			this->C1->MinimumWidth = 6;
			this->C1->Name = L"C1";
			this->C1->ReadOnly = true;
			this->C1->Width = 35;
			// 
			// C2
			// 
			this->C2->HeaderText = L"C2";
			this->C2->MinimumWidth = 6;
			this->C2->Name = L"C2";
			this->C2->ReadOnly = true;
			this->C2->Width = 35;
			// 
			// ui
			// 
			this->ui->HeaderText = L"ui";
			this->ui->MinimumWidth = 6;
			this->ui->Name = L"ui";
			this->ui->ReadOnly = true;
			this->ui->Width = 35;
			// 
			// modui_vi
			// 
			this->modui_vi->HeaderText = L"|ui-vi|";
			this->modui_vi->MinimumWidth = 6;
			this->modui_vi->Name = L"modui_vi";
			this->modui_vi->ReadOnly = true;
			this->modui_vi->Width = 45;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(79, 485);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"a";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(104, 485);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(63, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(228, 487);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"b";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(253, 484);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(64, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(383, 490);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(408, 485);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(80, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(844, 538);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 36);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Zoom";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(253, 538);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(64, 22);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(228, 542);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"b";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(104, 537);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(63, 22);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(79, 539);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"a";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1144, 612);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		double k1(double xi, double vi){
			return 2*vi;
		}

		double k2(double xi, double vi, double k1, double hi) {
			return 2*(vi + (hi * k1)/4);
		}

		double k3(double xi, double vi, double k2, double hi) {
			return 2 * (vi + (hi * k2) / 2);
		}

		double k4(double xi, double vi, double k1, double k2, double k3, double hi) {
			return 2 * (vi + hi*(k1 - 2*k2 + 2*k3));
		}

		double next_x(double xi, double hi) {
			return xi + hi;
		}

		double next_v(double xi, double vi, double hi, double k1, double k3, double k4) {
			return vi + hi * (k1 + 4 * k3 + k4) / 6;
		}
		


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ reshenie_list = gcnew ZedGraph::PointPairList();
		PointPairList^ reshenie2_list = gcnew ZedGraph::PointPairList();

		// Интервал, где есть данные
		double xmin = Convert::ToDouble(textBox1->Text);
		double xmax = Convert::ToDouble(textBox2->Text);

		double hi = Convert::ToDouble(textBox3->Text);

		double _k1, _k2, _k3, _k4;
		double _k1_2, _k2_2, _k3_2, _k4_2;

		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmax + 0.1;
/*
		double ymin_limit = -1.0;
		double ymax_limit = 100.0;


*/
		// Список точек
		int i = 0;
		double x2i = xmin;
		double vi = 1;
		double v2i = 1;

		reshenie_list->Add(x2i, vi);
		reshenie2_list->Add(x2i, v2i);
		dataGridView1->Rows->Clear();
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Cells[0]->Value = i;
		dataGridView1->Rows[i]->Cells[1]->Value = floor(x2i * 1000) / 1000;
		dataGridView1->Rows[i]->Cells[2]->Value = floor(vi * 1000) / 1000;
		dataGridView1->Rows[i]->Cells[3]->Value = floor(v2i * 1000) / 1000;
		dataGridView1->Rows[i]->Cells[6]->Value = hi;
		dataGridView1->Rows[i / 2]->Cells[4]->Value = floor((vi - v2i) * 1000) / 1000;

		i++;

		
		while (x2i <= xmax)
		{	
			_k1_2 = k1(x2i, v2i);
			_k2_2 = k2(x2i, v2i, _k1_2, hi/2);
			_k3_2 = k3(x2i, v2i, _k1_2, hi/2);
			_k4_2 = k4(x2i, v2i, _k1_2, _k2_2, _k3_2, hi/2);

			x2i = x2i + hi / 2;

			v2i = next_v(x2i, v2i, hi/2, _k1_2, _k3_2, _k4_2);


			if (i % 2 == 0) {
				_k1 = k1(x2i, vi);
				_k2 = k2(x2i, vi, _k1, hi);
				_k3 = k3(x2i, vi, _k1, hi);
				_k4 = k4(x2i, vi, _k1, _k2, _k3, hi);

				vi = next_v(x2i, vi, hi, _k1, _k3, _k4);

				//Добавление на график
				reshenie_list->Add(x2i, vi);
				reshenie2_list->Add(x2i, v2i);
				//Печать в таблицу
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i/2]->Cells[0]->Value = i / 2;
				dataGridView1->Rows[i/2]->Cells[1]->Value = floor(x2i * 1000) / 1000;
				dataGridView1->Rows[i/2]->Cells[2]->Value = floor(vi * 1000) / 1000;
				dataGridView1->Rows[i/2]->Cells[6]->Value = hi;
				dataGridView1->Rows[i/2]->Cells[3]->Value = floor(v2i * 1000) / 1000;
				dataGridView1->Rows[i / 2]->Cells[4]->Value = floor((vi-v2i) * 1000) / 1000;
				//dataGridView1->Rows[i]->Cells[2]->Value = floor(f2(x) * 1000) / 1000;
			}
			
			i++;
		}

		LineItem^ Curve1 = panel->AddCurve("du/dx=2u", reshenie_list, Color::Red,SymbolType::Plus);
		LineItem^ Curve2 = panel->AddCurve("du/dx=2u", reshenie2_list, Color::Blue, SymbolType::Plus);

		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;
/*
		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = ymin_limit;
		panel->YAxis->Scale->Max = ymax_limit;
*/
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	GraphPane^ panel = zedGraphControl1->GraphPane;
	double xmin = Convert::ToDouble(textBox5->Text);
	double xmax = Convert::ToDouble(textBox4->Text);
	// Устанавливаем интересующий нас интервал по оси X
	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;

	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl1->AxisChange();
	// Обновляем график
	zedGraphControl1->Invalidate();

}
};
}
