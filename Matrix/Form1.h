#pragma once
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <math.h>

int n;//размерность матриц
bool err=false;//нада так
double A[20][20];//Матрица А
double sum;
int l;

int i,j,k,a,b;//для циклов (просит)
double *H;
double *T;
double *F;

namespace Матрицы {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dgA;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button3;

	protected: 
	public: int n;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	public: 


	
	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgA = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgA))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите размеры матрицы";
			// 
			// dgA
			// 
			this->dgA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgA->Location = System::Drawing::Point(15, 71);
			this->dgA->Name = L"dgA";
			this->dgA->Size = System::Drawing::Size(395, 134);
			this->dgA->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 211);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 39);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Получить результат";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(318, 211);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 39);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Выйти";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(437, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Результат:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(437, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Задание:";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Location = System::Drawing::Point(416, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(197, 52);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Найти сумму элементов верхней треугольной матрицы, больших всех элементов нижней";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(121, 32);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"ОК";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(15, 32);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 23);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Location = System::Drawing::Point(440, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 10;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 262);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dgA);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(640, 300);
			this->MinimumSize = System::Drawing::Size(640, 300);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgA))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




		

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {		//Кнопка принятия параметров таблицы
			 if(textBox1->Text!="")
			 {n=Convert::ToInt32(textBox1->Text);
			 if(n)
			 {
			 dgA->RowCount=n;
			 dgA->ColumnCount=n;
			 }
			 }
			 
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			if(n)
			{double A[20][20];
				for ( i=0; i<n; i++)
				for ( j=0; j<n; j++)
				A[i][j]=Convert::ToInt32(dgA[j,i]->Value);

			l=0;
			sum=0;
				 for (i=0;i<n;i++)
					 for(j=n-1;j>i;j--)
						 {l=1;
							 for(a=1;a<n;a++)
							 for(b=0;b<a;b++)
								 if (A[i][j]>A[a][b]&&(l==1))
									 l=1;
								 else
									 l=0;
						 if(l==1)
						 sum=sum+A[i][j];
						 }
				 label2->Text=Convert::ToString(sum);


			 }
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	



	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}

