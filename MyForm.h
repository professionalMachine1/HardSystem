#pragma once

#include <math.h>
#include "TMatrix.h"
#include "HardSystem.h"

namespace HardSystemGraph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			DrawGraph();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	public: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;





	public: ZedGraph::ZedGraphControl^  zedGraphControl2;

	public:








	public: ZedGraph::ZedGraphControl^  zedGraphControl3;
	private:
	private: System::Windows::Forms::Label^  label6;
	public:
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Val0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Val1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Val2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Val3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Val4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Val5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Val6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Val7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Val8;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox2;





	private:
	public:
	private:
	private: System::ComponentModel::IContainer^  components;
	public:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->Val0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Val1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Val2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Val3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Val4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Val5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Val6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Val7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Val8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1373, 614);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 28);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(1365, 582);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Val0, this->Val1,
					this->Val2, this->Val3, this->Val4, this->Val5, this->Val6, this->Val7, this->Val8
			});
			this->dataGridView1->Location = System::Drawing::Point(324, 38);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(891, 210);
			this->dataGridView1->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(153, 209);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 39);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Построить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(77, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 19);
			this->label5->TabIndex = 9;
			this->label5->Text = L"N";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(36, 216);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 8;
			this->textBox5->Text = L"1000";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(197, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 19);
			this->label4->TabIndex = 7;
			this->label4->Text = L"H";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(69, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 19);
			this->label3->TabIndex = 6;
			this->label3->Text = L"X0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(182, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 19);
			this->label2->TabIndex = 5;
			this->label2->Text = L"U0(2)";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(160, 126);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"0,001";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(36, 126);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(160, 38);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"13";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"U0(1)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(36, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"7";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->zedGraphControl3);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->zedGraphControl2);
			this->tabPage2->Controls->Add(this->zedGraphControl1);
			this->tabPage2->Location = System::Drawing::Point(4, 28);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(1365, 582);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->BackColor = System::Drawing::Color::Coral;
			this->zedGraphControl3->Location = System::Drawing::Point(722, 8);
			this->zedGraphControl3->Margin = System::Windows::Forms::Padding(9);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(643, 475);
			this->zedGraphControl3->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(34, 500);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(186, 19);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Какой график отобразить\?";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"График точного решения", L"График глобальной погрешности" });
			this->comboBox1->Location = System::Drawing::Point(63, 522);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 27);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->BackColor = System::Drawing::Color::Coral;
			this->zedGraphControl2->Location = System::Drawing::Point(722, 8);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(6);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(643, 475);
			this->zedGraphControl2->TabIndex = 2;
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->BackColor = System::Drawing::Color::Coral;
			this->zedGraphControl1->Location = System::Drawing::Point(9, 8);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(715, 475);
			this->zedGraphControl1->TabIndex = 1;
			// 
			// Val0
			// 
			this->Val0->HeaderText = L"i";
			this->Val0->Name = L"Val0";
			this->Val0->ReadOnly = true;
			this->Val0->Width = 50;
			// 
			// Val1
			// 
			this->Val1->HeaderText = L"x";
			this->Val1->Name = L"Val1";
			this->Val1->ReadOnly = true;
			// 
			// Val2
			// 
			this->Val2->HeaderText = L"h";
			this->Val2->Name = L"Val2";
			this->Val2->ReadOnly = true;
			// 
			// Val3
			// 
			this->Val3->HeaderText = L"V(1)";
			this->Val3->Name = L"Val3";
			this->Val3->ReadOnly = true;
			// 
			// Val4
			// 
			this->Val4->HeaderText = L"V(2)";
			this->Val4->Name = L"Val4";
			this->Val4->ReadOnly = true;
			// 
			// Val5
			// 
			this->Val5->HeaderText = L"E(1)";
			this->Val5->Name = L"Val5";
			this->Val5->ReadOnly = true;
			// 
			// Val6
			// 
			this->Val6->HeaderText = L"E(2)";
			this->Val6->Name = L"Val6";
			this->Val6->ReadOnly = true;
			// 
			// Val7
			// 
			this->Val7->HeaderText = L"U(1)";
			this->Val7->Name = L"Val7";
			this->Val7->ReadOnly = true;
			// 
			// Val8
			// 
			this->Val8->HeaderText = L"U(2)";
			this->Val8->Name = L"Val8";
			this->Val8->ReadOnly = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(324, 254);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(351, 154);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(701, 293);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(307, 115);
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(791, 271);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 19);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Постановка задачи:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(1370, 615);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: TVector<double> ExactSolution(double x){

		TVector<double> u(2);
		u[0] = -3 * exp(-1000 * x) + 10 * exp(-0.01*x);
		u[1] = 3 * exp(-1000 * x) + 10 * exp(-0.01*x);
		return u;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		GraphPane^ panelp = zedGraphControl2->GraphPane;
		panelp->CurveList->Clear();
		GraphPane^ panelph = zedGraphControl3->GraphPane;
		panelph->CurveList->Clear();

		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f4_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f5_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f6_list = gcnew ZedGraph::PointPairList();

		int n = 0, k = 2, sup = 1;
		TMatrix<double> A(k);
		TVector<double> v(k), u(k);
		double x, h;
		A[0][0] = -500.005;
		A[0][1] = 499.995;
		A[1][0] = A[0][1];
		A[1][1] = A[0][0];
		v[0] = Convert::ToDouble(textBox1->Text);
		v[1] = Convert::ToDouble(textBox2->Text);
		x = Convert::ToDouble(textBox3->Text);
		h = Convert::ToDouble(textBox4->Text);
		n = Convert::ToDouble(textBox5->Text);
		HardSystem method(A, v, x, h);

		for (int i = 0; i < n; i++)
		{
			u = ExactSolution(x);
			if ((i / (100 * sup)) == 1)
			{
				method.ChangeH(h * 10);
				sup *= 10;
			}
			f1_list->Add(x, v[0]);
			f2_list->Add(x, v[1]);
			f3_list->Add(x, u[0]);
			f4_list->Add(x, u[1]);
			f5_list->Add(x, u[0] - v[0]);
			f6_list->Add(x, u[1] - v[1]);
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x;
			dataGridView1->Rows[i]->Cells[2]->Value = h;
			dataGridView1->Rows[i]->Cells[3]->Value = v[0];
			dataGridView1->Rows[i]->Cells[4]->Value = v[1];
			dataGridView1->Rows[i]->Cells[5]->Value = u[0] - v[0];
			dataGridView1->Rows[i]->Cells[6]->Value = u[1] - v[1];
			dataGridView1->Rows[i]->Cells[7]->Value = u[0];
			dataGridView1->Rows[i]->Cells[8]->Value = u[1];
			v = method.ImplicitRunKut();
			x = v[k];
			h = v[k + 1];
		}

		LineItem^ f1_Curve = panel->AddCurve("V1(x)", f1_list, Color::Orange, SymbolType::None);
		LineItem^ f2_Curve = panel->AddCurve("V2(x)", f2_list, Color::MediumVioletRed, SymbolType::None);
		LineItem^ f3_Curve = panelp->AddCurve("U1(x)", f3_list, Color::BlueViolet, SymbolType::None);
		LineItem^ f4_Curve = panelp->AddCurve("U2(x)", f4_list, Color::RosyBrown, SymbolType::None);
		LineItem^ f5_Curve = panelph->AddCurve("E1(x)", f5_list, Color::BlueViolet, SymbolType::Plus);
		LineItem^ f6_Curve = panelph->AddCurve("E2(x)", f6_list, Color::Aquamarine, SymbolType::Star);

		panel->XAxis->Scale->Min = 0;
		panel->XAxis->Scale->Max = 1000;
		panel->YAxis->Scale->Min = 0;
		panel->YAxis->Scale->Max = 14;
		panelp->XAxis->Scale->Min = 0;
		panelp->XAxis->Scale->Max = 1000;
		panelp->YAxis->Scale->Min = 0;
		panelp->YAxis->Scale->Max = 14;
		panelph->XAxis->Scale->Min = 0;
		panelph->XAxis->Scale->Max = 1000;
		panelph->YAxis->Scale->Min = -0.5;
		panelph->YAxis->Scale->Max = 0.5;

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
		zedGraphControl2->AxisChange();
		zedGraphControl2->Invalidate();
		zedGraphControl3->AxisChange();
		zedGraphControl3->Invalidate();

	}
	private: void DrawGraph()
	{
		GraphPane^ panel = zedGraphControl1->GraphPane;
		GraphPane^ panelp = zedGraphControl2->GraphPane;
		GraphPane^ panelph = zedGraphControl3->GraphPane;

		panel->XAxis->Title->Text = "X";
		panel->YAxis->Title->Text = "V";
		panel->Title->Text = "График численного решения";
		//panel->XAxis->Title->FontSpec->FontColor = Color::OrangeRed;
		//panel->YAxis->Title->FontSpec->FontColor = Color::Azure;

		panelp->XAxis->Title->Text = "X";
		panelp->YAxis->Title->Text = "U";
		panelp->Title->Text = "График точного решения";
		//panelp->XAxis->Title->FontSpec->FontColor = Color::OrangeRed;
		//panelp->YAxis->Title->FontSpec->FontColor = Color::Azure;

		panelph->XAxis->Title->Text = "X";
		panelph->YAxis->Title->Text = "E";
		panelph->Title->Text = "График глобальной погрешности";
		//panelp->XAxis->Title->FontSpec->FontColor = Color::OrangeRed;
		//panelp->YAxis->Title->FontSpec->FontColor = Color::Azure;

		zedGraphControl2->Visible = false;
		zedGraphControl3->Visible = false;

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
		zedGraphControl2->AxisChange();
		zedGraphControl2->Invalidate();
		zedGraphControl3->AxisChange();
		zedGraphControl3->Invalidate();

	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		if (comboBox1->SelectedIndex == 0)
		{
			zedGraphControl2->Visible = true;
			zedGraphControl3->Visible = false;
		}
		else {
			zedGraphControl2->Visible = false;
			zedGraphControl3->Visible = true;
		}

	}
};
}
