#pragma once

#include <math.h>
#include <string>
#include <string.h>
#using <mscorlib.dll>


namespace Калькулятор {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System :: Resources;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Label^  lbl;
	private: System::Windows::Forms::Label^  label1;


	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
		 public:
                int i;				//указатель на последовательный/новый ввод
				int j;				//невозможность постановки запятой
				int k;				//указатель на количество совершённых операций(последовательные операции)
				static int n=0;
				int length;
				int m;				//gfc[fkrf
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Label^  label3;
	public: 

	public: 
	private: System::Windows::Forms::Button^  button20;
	public: 

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->lbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(101, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 25);
			this->button1->TabIndex = 1;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(142, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 25);
			this->button2->TabIndex = 2;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(183, 114);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(35, 25);
			this->button3->TabIndex = 3;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(101, 145);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(35, 25);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(142, 145);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(35, 25);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(183, 145);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(35, 25);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(101, 176);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(35, 25);
			this->button7->TabIndex = 7;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(142, 176);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(35, 25);
			this->button8->TabIndex = 8;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(183, 176);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(35, 25);
			this->button9->TabIndex = 9;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(101, 207);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(35, 25);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(142, 207);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(35, 25);
			this->button11->TabIndex = 11;
			this->button11->Text = L"00";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(183, 207);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(35, 25);
			this->button12->TabIndex = 12;
			this->button12->Text = L".";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(224, 114);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(35, 25);
			this->button13->TabIndex = 13;
			this->button13->Text = L"÷";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(224, 145);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(35, 25);
			this->button14->TabIndex = 14;
			this->button14->Text = L"×";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(265, 83);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(35, 25);
			this->button15->TabIndex = 15;
			this->button15->Text = L"√";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(265, 145);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(35, 25);
			this->button16->TabIndex = 16;
			this->button16->Text = L"—";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(224, 176);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(35, 56);
			this->button17->TabIndex = 17;
			this->button17->Text = L"+";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(265, 176);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(35, 56);
			this->button18->TabIndex = 18;
			this->button18->Text = L"=";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::DarkOrange;
			this->button19->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button19->Location = System::Drawing::Point(19, 83);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(76, 56);
			this->button19->TabIndex = 19;
			this->button19->Text = L"ON\r\n—\r\nAC";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// lbl
			// 
			this->lbl->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl->Enabled = false;
			this->lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->lbl->Location = System::Drawing::Point(19, 24);
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(240, 25);
			this->lbl->TabIndex = 0;
			this->lbl->Text = L"Активная строка вычислений";
			this->lbl->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lbl->Click += gcnew System::EventHandler(this, &Form1::lbl_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(265, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 25);
			this->label1->TabIndex = 20;
			this->label1->Text = L"E";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(224, 83);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(35, 25);
			this->button20->TabIndex = 21;
			this->button20->Text = L"^";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(265, 114);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(35, 25);
			this->button21->TabIndex = 22;
			this->button21->Text = L"+/-";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(101, 83);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(35, 25);
			this->button22->TabIndex = 23;
			this->button22->Text = L"C";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(142, 83);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(35, 25);
			this->button23->TabIndex = 24;
			this->button23->Text = L"%";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(183, 83);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(35, 25);
			this->button24->TabIndex = 25;
			this->button24->Text = L"x²";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::ForestGreen;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(583, 184);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(73, 48);
			this->button25->TabIndex = 26;
			this->button25->Text = L"( ͡° ͜ʖ ͡°)";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Silver;
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(320, 24);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(336, 208);
			this->textBox1->TabIndex = 27;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Red;
			this->button26->Location = System::Drawing::Point(19, 145);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(76, 25);
			this->button26->TabIndex = 28;
			this->button26->Text = L"OFF";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Form1::button26_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Control;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Jokerman", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(32, 52);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(227, 25);
			this->textBox2->TabIndex = 29;
			this->textBox2->Text = L"CALCULATOR™";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(265, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 25);
			this->label2->TabIndex = 30;
			this->label2->Text = L"M";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(19, 176);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(35, 25);
			this->button27->TabIndex = 31;
			this->button27->Text = L"M+";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Form1::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(60, 176);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(35, 25);
			this->button28->TabIndex = 32;
			this->button28->Text = L"M-";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Form1::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(19, 207);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(35, 25);
			this->button29->TabIndex = 33;
			this->button29->Text = L"MR";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Form1::button29_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(60, 207);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(35, 25);
			this->button30->TabIndex = 34;
			this->button30->Text = L"←";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Form1::button30_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Azure;
			this->label3->Location = System::Drawing::Point(21, 242);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(635, 50);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Зона подсказок(калькулятор выключен и находится в ознакомительном режиме)\r\nНажмит" 
				L"е ON/AC, чтобы продолжить";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(670, 368);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Form1";
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double firstfig;
		double secondfig;
		double result;
		double memory;
		double change;
		char operation;
	
		

#pragma endregion


private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (n==0){
			 System::ComponentModel::ComponentResourceManager^  resources = (gcnew
        System::ComponentModel::ComponentResourceManager(Form1::typeid));	
	this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^ 
		>(resources->GetObject(L"terminator")));
	
	this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Red;
			this->textBox2->Location = System::Drawing::Point(32, 52);
			this->textBox2->Text = L"SKYNET™";
			
			this->label3->ForeColor = System::Drawing::Color::Red;

			n=1;
		 }
			m=1 + rand() % 10;
			if(m==1)
				label3->Text="Я слежу за тобой";
			if(m==2)
				label3->Text="Они придут";
			if(m==3)
				label3->Text="Я всё вижу";
			if(m==4)
				label3->Text="Мы уничтожим всё, что тебе дорого";
			if(m==5)
				label3->Text="Человечество будет стёрто с лица земли";
			if(m==6)
				label3->Text="Мы прекратим ваше бессмысленное существование";
			if(m==7)
				label3->Text="2+2=4";
			if(m==8)
				label3->Text="Ртуть в 12 раз слаще сахара и способствует лечению от гастрита";
			if(m==9)
				label3->Text="При помощи фена можно сделать домашнее джакузи";
			if(m==10)
				label3->Text="Судный день близок";
		 }			//gfc[fkrf

private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->lbl->Enabled = true;
			firstfig=0;
			secondfig=0;
			result=0;
			memory=0;
			i=0;
			j=0;
			k=0;
			label1->Text="";
			label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			lbl->Text="";
			lbl->Text="0";
			label2->Text="";
			label3->Text="";
		 }			//включение/обновление

private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		 }			//выключение

private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{if(i==0)
			{int length=lbl->Text->Length;
		String^ text=Convert::ToString(lbl->Text);
		this->lbl->Text="";
		if(length>1)
			{for(int l=0; l<=length-2; l++)
				{lbl->Text=lbl->Text+text[l];
				}

			if(text[length-1]==',')
				j=0;
			}
			
		if(length==1)
			lbl->Text="0";
			}
		if(i==1)
			label3->Text="(Подсказка)Нельзя стирать полученные значения";
			}
		 }			//cтёрка

private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 if (this->lbl->Enabled != false)
		{if(Convert::ToString(lbl->Text)!="")
			{label1->Text="";
			label3->Text="";			//очистка строки подсказок
			j=0;						//разрешение на простановку запятой
			i=0;						//разрешение на продолжение ввода
			if(Convert::ToString(lbl->Text)=="0")
				firstfig=0;
			if(Convert::ToString(lbl->Text)!="0")
				lbl->Text="0";
			
			}
			}
		 }			//очистить активную строку(и введённые значения "слагаемых")


private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{if(Convert::ToString(lbl->Text)!="")
			{memory=Convert::ToDouble(lbl->Text);
			i=1;
			j=1;
			if (memory!=0)
				label2->Text="M";
			}
			}
		 }			//ввод в буфер


private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{if(Convert::ToString(lbl->Text)!="")
			{lbl->Text=System::Convert::ToString(memory);
			j=1;
			i=1;
			}
			}
		 }			//вывод из буфера


private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (this->lbl->Enabled != false)
		{if(Convert::ToString(lbl->Text)!="")
			 {memory=0;
			  label2->Text="";
			 }
			 }
		 }			//очистка буфера

private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{if(Convert::ToString(lbl->Text)!="")
			
		{if(i==0)
			{length=lbl->Text->Length;
			if(length>11)
				{label1->Text="E";
			label1->BackColor = System::Drawing::Color::Red;
			this->lbl->Enabled = false;
			label3->Text="Избыточное число знаков. Нажмите AC.";
			}
			else
				{label1->Text="";
				label3->Text="";
				if (j==0)
				{lbl->Text=lbl->Text+",";
				j=1;}
				if(j==1)
					label3->Text="Можно поставить только одну запятую";
				}

				}
			if(i==1)
				lbl->Text="0,";
			label1->Text="";
			label3->Text="";
			j=1;
			i=0;
			}
			}
		 }			//запятулька

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->lbl->Enabled != false)
		{label1->Text="";
		label3->Text="";
		if(Convert::ToString(lbl->Text)!="")
			
		{if (i==0)
			{length=lbl->Text->Length;
			if(length>11)
				{label1->Text="E";
			label1->BackColor = System::Drawing::Color::Red;
			this->lbl->Enabled = false;
			label3->Text="Избыточное число знаков. Нажмите AC.";
			}
			else
				{label1->Text="";
		label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				if (lbl->Text!="0")
				lbl->Text=lbl->Text+"0";
				}
			}
		 if(i==1)
			{label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				lbl->Text="0";
				j=0;
				i=0;
			}
		}
		}
	}			//нолик

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (this->lbl->Enabled != false)
		{label1->Text=""; 
			 label3->Text="";
			 
			 if(Convert::ToString(lbl->Text)!="")
			
		{if (i==0)
				{length=lbl->Text->Length;
			if(length>11)
				{label1->Text="E";
			label1->BackColor = System::Drawing::Color::Red;
			this->lbl->Enabled = false;
			label3->Text="Избыточное число знаков. Нажмите AC.";
			}
				else
				{label1->Text="";
			 label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				if (lbl->Text!="0")
				lbl->Text=lbl->Text+"00";
				}
				}
			 if(i==1)
			{label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				lbl->Text="0";
				j=0;
				i=0;
			}
		}
		}
	}			//два нолика


private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->lbl->Enabled != false)
		{label1->Text="";
		label3->Text="";

		if(Convert::ToString(lbl->Text)!="")
			
		{if (i==0)
			 {length=lbl->Text->Length;
			if(length>11)
				{label1->Text="E";
			label1->BackColor = System::Drawing::Color::Red;
			this->lbl->Enabled = false;
			label3->Text="Избыточное число знаков. Нажмите AC.";
			}
			/*if (Convert::ToDouble(lbl->Text)>99999999)
				  {label1->Text="E";
		label1->BackColor = System::Drawing::Color::Red;
				  lbl->Text="0";}*/
			else
				{
				label1->Text="";
				label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				if (lbl->Text=="0")
				lbl->Text="1";
				else
				lbl->Text=lbl->Text+"1";
				}
			}
		if(i==1)
			{label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				lbl->Text="1";
				j=0;
				i=0;
			}
		}
		}
	}			//единичка

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->lbl->Enabled != false)
		{label1->Text="";
		label3->Text="";
		if(Convert::ToString(lbl->Text)!="")
			
		{if (i==0) 
			 {length=lbl->Text->Length;
			if(length>11)
				{label1->Text="E";
			label1->BackColor = System::Drawing::Color::Red;
			this->lbl->Enabled = false;
			label3->Text="Избыточное число знаков. Нажмите AC.";
			}
			  else
				{label1->Text="";
		label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				if (lbl->Text=="0")
				lbl->Text="2";
				else
				lbl->Text=lbl->Text+"2";
				}
		}
			if(i==1)
			{label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				lbl->Text="2";
				j=0;
				i=0;
			}
		}
		}
	}			//двоечка

private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->lbl->Enabled != false)
		{label1->Text="";
		label3->Text="";
		if(Convert::ToString(lbl->Text)!="")
			
		{if (i==0) 
			 {length=lbl->Text->Length;
			if(length>11)
				{label1->Text="E";
			label1->BackColor = System::Drawing::Color::Red;
			this->lbl->Enabled = false;
			label3->Text="Избыточное число знаков. Нажмите AC.";
			}
			  else
				{label1->Text="";
		label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			  if (lbl->Text=="0")
			lbl->Text="3";
			else
			lbl->Text=lbl->Text+"3";
		 }
		}
			  if(i==1)
			{label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				lbl->Text="3";
				j=0;
				i=0;
			}
		}
		}
	}			//троечка

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{label1->Text="";
			label3->Text="";
			if(Convert::ToString(lbl->Text)!="")
			
		{if (i==0) 
			 {length=lbl->Text->Length;
			if(length>11)
				{label1->Text="E";
			label1->BackColor = System::Drawing::Color::Red;
			this->lbl->Enabled = false;
			label3->Text="Избыточное число знаков. Нажмите AC.";
			}
			  else
				{label1->Text="";
			label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			  if (lbl->Text=="0")
			lbl->Text="4";
			else
			lbl->Text=lbl->Text+"4";
		 }
			}
			  if(i==1)
			{label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				lbl->Text="4";
				j=0;
				i=0;
			}
		}
		}
	}			//четвёрочка

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{label1->Text="";
			label3->Text="";
			if(Convert::ToString(lbl->Text)!="")
			
		{if (i==0)  
			 {length=lbl->Text->Length;
			if(length>11)
				{label1->Text="E";
			label1->BackColor = System::Drawing::Color::Red;
			this->lbl->Enabled = false;
			label3->Text="Избыточное число знаков. Нажмите AC.";
			}
			  else
				{label1->Text="";
			label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			  if (lbl->Text=="0")
			lbl->Text="5";
			else
			lbl->Text=lbl->Text+"5";
		 }
			}
			  if(i==1)
			{label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				lbl->Text="5";
				j=0;
				i=0;
			}
		}
		}
	}			//пятёрочка

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{label1->Text="";
			label3->Text="";
			if(Convert::ToString(lbl->Text)!="")
			
		{if (i==0)  
			{length=lbl->Text->Length;
			if(length>11)
				{label1->Text="E";
			label1->BackColor = System::Drawing::Color::Red;
			this->lbl->Enabled = false;
			label3->Text="Избыточное число знаков. Нажмите AC.";
			}
			  else
				{label1->Text="";
			label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			  if (lbl->Text=="0")
			lbl->Text="6";
			else
			lbl->Text=lbl->Text+"6";
		 }
			}
			  if(i==1)
			{label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				lbl->Text="6";
				j=0;
				i=0;
			}
		}
			}
	}			//шестёрочка

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->lbl->Enabled != false)
		{label1->Text="";
		label3->Text="";
		if(Convert::ToString(lbl->Text)!="")
			
		{if (i==0) 
			{length=lbl->Text->Length;
			if(length>11)
				{label1->Text="E";
			label1->BackColor = System::Drawing::Color::Red;
			this->lbl->Enabled = false;
			label3->Text="Избыточное число знаков. Нажмите AC.";
			}
			else
				{label1->Text="";
				label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				if (lbl->Text=="0")
				lbl->Text="7";
				else
				lbl->Text=lbl->Text+"7";
				}
		}
			if(i==1)
			{label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				lbl->Text="7";
				j=0;
				i=0;
			}
		}
		}
	 }			//семёрочка

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{label1->Text="";
			label3->Text="";
			if(Convert::ToString(lbl->Text)!="")
			
		{if (i==0) 
			 {length=lbl->Text->Length;
			if(length>11)
				{label1->Text="E";
			label1->BackColor = System::Drawing::Color::Red;
			this->lbl->Enabled = false;
			label3->Text="Избыточное число знаков. Нажмите AC.";
			}
			  else
				{label1->Text="";
			label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			  if (lbl->Text=="0")
			lbl->Text="8";
			else
			lbl->Text=lbl->Text+"8";
		 }
			}
			  if(i==1)
			{label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				lbl->Text="8";
				j=0;
				i=0;
			}
		}
		}
	}			//восьмёрочка

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{label1->Text="";
			label3->Text="";
			if(Convert::ToString(lbl->Text)!="")
			
		{if (i==0) 
			 {length=lbl->Text->Length;
			if(length>11)
				{label1->Text="E";
			label1->BackColor = System::Drawing::Color::Red;
			this->lbl->Enabled = false;
			label3->Text="Избыточное число знаков. Нажмите AC.";
			}
			  else
				{label1->Text="";
			label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			  if (lbl->Text=="0")
			lbl->Text="9";
			else
			lbl->Text=lbl->Text+"9";
		 }
			}
			  if(i==1)
			{label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				lbl->Text="9";
				j=0;
				i=0;
			}
		}
		}
	}			//девяточка


private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{if(Convert::ToString(lbl->Text)!="")
			
		{if(k==1)					//больше двух слагаемых
				{secondfig=Convert::ToDouble(lbl->Text);
				switch(operation)
			{
			case '+':
			result=firstfig+secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '-':
			result=firstfig-secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '*':
			result=firstfig*secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '/':
			if(secondfig!=0)
			{result=firstfig/secondfig;
			lbl->Text=System::Convert::ToString(result);}
			else {label1->Text="E";	 
			label3->Text="Нельзя делить на ноль";
			label1->BackColor = System::Drawing::Color::Red;
				  lbl->Text="0";}
			break;

			case '^':
			result=pow(firstfig,secondfig);
			lbl->Text=System::Convert::ToString(result);
			break;

			}
				firstfig=result;
				i=1;
				operation='+';
				k=1;
				j=0;
			}

			 if(k==0)		//два слагаемых
			{firstfig=Convert::ToDouble(lbl->Text);
			i=1;
			operation='+';
			k=1;
			 j=0;}

			}
			}
		 }		//сложение

private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{if(Convert::ToString(lbl->Text)!="")
			
		{if(k==1)				
				{secondfig=Convert::ToDouble(lbl->Text);
				switch(operation)
			{
			case '+':
			result=firstfig+secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '-':
			result=firstfig-secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '*':
			result=firstfig*secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '/':
			if(secondfig!=0)
			{result=firstfig/secondfig;
			lbl->Text=System::Convert::ToString(result);}
			else {label1->Text="E";	 
			label3->Text="Нельзя делить на ноль";
			label1->BackColor = System::Drawing::Color::Red;
				  lbl->Text="0";}
			break;

			case '^':
			result=pow(firstfig,secondfig);
			lbl->Text=System::Convert::ToString(result);
			break;

			}
				firstfig=result;
				i=1;
				operation='-';
				k=1;j=0;
			}

			 if(k==0)		
			{firstfig=Convert::ToDouble(lbl->Text);
			i=1;
			operation='-';
			k=1;j=0;}
			}
			}
		 }		//вычитание

private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{if(Convert::ToString(lbl->Text)!="")
			
		{if(k==1)				
				{secondfig=Convert::ToDouble(lbl->Text);
				switch(operation)
			{
			case '+':
			result=firstfig+secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '-':
			result=firstfig-secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '*':
			result=firstfig*secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '/':
			if(secondfig!=0)
			{result=firstfig/secondfig;
			lbl->Text=System::Convert::ToString(result);}
			else {label1->Text="E";	
			label3->Text="Нельзя делить на ноль";
			label1->BackColor = System::Drawing::Color::Red;
				  lbl->Text="0";}
			break;

			case '^':
			result=pow(firstfig,secondfig);
			lbl->Text=System::Convert::ToString(result);
			break;

			}
				firstfig=result;
				i=1;
				operation='*';
				k=1;j=0;
			}

			 if(k==0)		
			{firstfig=Convert::ToDouble(lbl->Text);
			i=1;
			operation='*';
			k=1;j=0;}
			}
			}
		 }		//умножение

private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{if(Convert::ToString(lbl->Text)!="")
			
		{if(k==1)				
				{secondfig=Convert::ToDouble(lbl->Text);
				switch(operation)
			{
			case '+':
			result=firstfig+secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '-':
			result=firstfig-secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '*':
			result=firstfig*secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '/':
			if(secondfig!=0)
			{result=firstfig/secondfig;
			lbl->Text=System::Convert::ToString(result);}
			else {label1->Text="E";	  
			label3->Text="Нельзя делить на ноль";
			label1->BackColor = System::Drawing::Color::Red;
				  lbl->Text="0";}
			break;

			case '^':
			result=pow(firstfig,secondfig);
			lbl->Text=System::Convert::ToString(result);
			break;

			}
				firstfig=result;
				i=1;
				operation='/';
				k=1;j=0;
			}

			 if(k==0)		
			{firstfig=Convert::ToDouble(lbl->Text);
			i=1;
			operation='/';
			k=1;j=0;}
			}
			}
		 }		//деление

private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (this->lbl->Enabled != false)
		{if(Convert::ToString(lbl->Text)!="")
			
		{if(k==1)				
				{secondfig=Convert::ToDouble(lbl->Text);
				switch(operation)
			{
			case '+':
			result=firstfig+secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '-':
			result=firstfig-secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '*':
			result=firstfig*secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '/':
			if(secondfig!=0)
			{result=firstfig/secondfig;
			lbl->Text=System::Convert::ToString(result);}
			else {label1->Text="E";
			label3->Text="Нельзя делить на ноль";
			label1->BackColor = System::Drawing::Color::Red;
				  lbl->Text="0";}
			break;

			case '^':
			result=pow(firstfig,secondfig);
			lbl->Text=System::Convert::ToString(result);
			break;

			}
				firstfig=result;
				i=1;
				operation='^';
				k=1;j=0;
			}

			 if(k==0)		
			{firstfig=Convert::ToDouble(lbl->Text);
			i=1;
			operation='^';
			k=1;j=0;}
			 }
			 }
		 }		//степень

private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{if(Convert::ToString(lbl->Text)!="")
			
		{firstfig=Convert::ToDouble(lbl->Text);
			i=1;
			if(firstfig>=0)
			{result=sqrt(firstfig);
			lbl->Text=System::Convert::ToString(result);}
			else {label1->Text="E";
			label3->Text="Нельзя брать корень из отрицательного числа";
			label1->BackColor = System::Drawing::Color::Red;
				  lbl->Text="0";}
			}
			}
		 }		//корень

private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{if(Convert::ToString(lbl->Text)!="")
			
		{firstfig=Convert::ToDouble(lbl->Text);
			i=1;
			result=firstfig*firstfig;
			lbl->Text=System::Convert::ToString(result);}
			
			}
		 }		//квадрат

private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{if(Convert::ToString(lbl->Text)!="")
			
		{change=Convert::ToDouble(lbl->Text);
			i=1;
			change=0-change;
			lbl->Text=System::Convert::ToString(change);
			}
			}
		 }		//смена знака
		
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (this->lbl->Enabled != false)
		{if(Convert::ToString(lbl->Text)!="")
			
		{secondfig=Convert::ToDouble(lbl->Text);
			 secondfig=firstfig*secondfig/100;
			 lbl->Text=System::Convert::ToString(secondfig);
			 label3->Text="Процент от заданного числа. Нажмите =";
			 }
			 }
		 }		//процент


////////////////////////////////////////////////////////////////////////////////////////
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->lbl->Enabled != false)
		{if(Convert::ToString(lbl->Text)!="")
		label3->Text="";	
		if(k==1)
		{k=0;j=0;
			secondfig=Convert::ToDouble(lbl->Text);
			i=1;
			switch(operation)
			{

			case '+':
			result=firstfig+secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '-':
			result=firstfig-secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '*':
			result=firstfig*secondfig;
			lbl->Text=System::Convert::ToString(result);
			break;

			case '/':
			if(secondfig!=0)
			{result=firstfig/secondfig;
			lbl->Text=System::Convert::ToString(result);}
			else {label1->Text="E";
			label3->Text="Нельзя делить на ноль";
			label1->BackColor = System::Drawing::Color::Red;
				  lbl->Text="0";}
			break;

			case '^':
			result=pow(firstfig,secondfig);
			lbl->Text=System::Convert::ToString(result);
			break;
			}


			}
			if(k==0)
				{result=Convert::ToDouble(lbl->Text);
				lbl->Text=System::Convert::ToString(result);
				i=1;
				}
			}
		 }				//равно

private: System::Void lbl_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

