#pragma once
#include <iostream>
#include <string>
#include <math.h>

	double a;
	double b;
	double Toch;
	int n;
	bool epsilon = false;
	
	double f(double x)
	{return sin(3*x)*cos(2*x);} //

	double pram(double a,double b, int n)
	{double dx,sum,x,integ;
	int i;
	dx=(b-a)/n;
	a=a+dx/2;
	sum=0;
	for(i=0;i<n;i++)
		{
			x=a+i*dx;
			sum+=f(x);
		}
	integ=dx*sum;
	return integ;}

	double trap(double a, double b,int n)
	{double dx,sum,x,integ;
	int i;
	dx=(b-a)/n;
	sum=(f(a)+f(b))/2;
	for(i=1;i<n;i++)
		{
			x=a+i*dx;
			sum+=f(x);
		}
	integ=dx*sum;
	return integ;}

	double parab(double a,double b,int n)
	{double dx,sum,x,integ;
	int i;
	if(n%2!=0) 
		n++;
	sum=f(a)+f(b);
	dx=(b-a)/n;
	for(i=1;i<n;i++)
	{
		if(i%2!=0)
			{x=a+i*dx;
			sum+=4*f(x);}
		if(i%2==0)
			{x=a+i*dx;
			sum+=2*f(x);}
	}
	integ=sum*(dx/3);
	return integ;}


namespace Integrali{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;



	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(163, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 49);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(163, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 75);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(163, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 174);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(163, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 200);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(163, 20);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(12, 226);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(163, 20);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(289, 174);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(163, 20);
			this->textBox7->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(289, 200);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(163, 20);
			this->textBox8->TabIndex = 7;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(289, 226);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(163, 20);
			this->textBox9->TabIndex = 8;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(12, 101);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(163, 20);
			this->textBox10->TabIndex = 9;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 143);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(163, 25);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Посчитать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(181, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Нижний предел интегрирования";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(181, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Верхний предел интегрирования";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(181, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Количество интервалов";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(181, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Точность";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(181, 177);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Прямоугольником";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(181, 203);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Трапецией";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(181, 229);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Параболой";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(264, 143);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(248, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Количество интервалов для заданной точности";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(356, 37);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(50, 100);
			this->textBox11->TabIndex = 23;
			this->textBox11->Text = L"∫";
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(391, 49);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(177, 43);
			this->textBox12->TabIndex = 24;
			this->textBox12->Text = L"sin(3x)cos(2x)";
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &Form1::textBox12_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button1->Location = System::Drawing::Point(493, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 65);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(571, 284);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {double a,b,Toch,q1,q2,qn1,qn2,qb1,qb2;
		 int n1,n;
		 a=Convert::ToDouble(textBox1->Text);
		 b=Convert::ToDouble(textBox2->Text);
		 n=Convert::ToInt32(textBox3->Text);
		 Toch=Convert::ToDouble(textBox10->Text);

		 q2=pram(a,b,n);
		 qn2=trap(a,b,n);
		 qb2=parab(a,b,n);
		 n1=n;
		 do{q1=q2;
			n1*=2;
			q2=pram(a,b,n1);
			}while(fabs(q1-q2)>Toch);
		 
		int z=abs(log10(Toch));								//с Этого момента у меня процедура округления до знака
		double degree = pow(10.0,z);
		q2 *= degree;
		double tail = q2 - static_cast<int>(q2);
		if(tail>=0.5)
			tail = 1;
		else
        tail = 0;
			q2 = static_cast<int>(q2+tail);
			q2 /= degree;									//конец

		 textBox4->Text=Convert::ToString(q2);
		 textBox7->Text=Convert::ToString(n1);

		 n1=n;
		 do{qn1=qn2;
			n1*=2;
			qn2=trap(a,b,n1);
			}while(fabs(qn1-qn2)>Toch);

		z=abs(log10(Toch));									//опять
		degree = pow(10.0,z);
		qn2 *= degree;
		tail = qn2 - static_cast<int>(qn2);
		if(tail>=0.5)
			tail = 1;
		else
			tail = 0;
    qn2 = static_cast<int>(qn2+tail);
    qn2 /= degree;											//конец

		 textBox5->Text=Convert::ToString(qn2);
		 textBox8->Text=Convert::ToString(n1);

		 n1=n;
		 do{qb1=qb2;
		 n1*=2;
		 qb2=parab(a,b,n1);
		 }while(fabs(qb1-qb2)>Toch);

		 z=abs(log10(Toch));								//Снова
		 degree = pow(10.0,z);
    qb2 *= degree;
    tail = qb2 - static_cast<int>(qb2);
    if(tail>=0.5)
        tail = 1;
    else
        tail = 0;
    qb2 = static_cast<int>(qb2+tail);
    qb2 /= degree;											//КОнец

		 textBox6->Text=Convert::ToString(qb2);
		 textBox9->Text=Convert::ToString(n1);
		 

		 }
private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		  this->Close();
		 }

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
