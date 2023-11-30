#pragma once
#include <math.h>

double round(double number)
    {
        double tail = number - static_cast<int>(number);
        if(tail>=0.5)
            tail = 1;
        else
            tail = 0;
        number = static_cast<int>(number+tail);
        ;
     
        return number;
    }

		
namespace Рисовашка {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	float pi=-3.14159265358979323846;
	float grad=-0.01745329251;
	int s=0;			//счётчик числа тиков для перемещения и полёта

	int i=0;			//счётчик дискретных масштабирований
	
	int j=0;			//счётчик дискретных поворотов
	double da;			//величина дискретного поворота(во времени)


	
	

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
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		
	
		          
			
			int k,l;
			int S,I;			//нереально крутые парни, которые всем здесь ПОКАЖУТ
			double dmx;			//величина дискретного масштабирования(во времени)
			double dmy;

			double a,kx,ky,xcm,ycm,xc,yc;


		int xc0;		//центры постоянного масштабирования
		int yc0;
		int xc0D;
		int	yc0D;
	

				  double x0;double y0;
                  double x1;double y1;
				  double x2;double y2;
                  double x3;double y3;
                  double x4;double y4;
                  double x5;double y5;
                  double x6;double y6;
				  double x7;double y7;
				  double x8;double y8;
				  double x9;double y9;
				  double x10;double y10;
				  double x11;double y11;
				  double x12; double y12;
				  double x13;double y13;

				  double x0D;double y0D;
                  double x1D;double y1D;
				  double x2D;double y2D;
                  double x3D;double y3D;
                  double x4D;double y4D;
                  double x5D;double y5D;
                  double x6D;double y6D;
				  double x7D;double y7D;
				  double x8D;double y8D;
				  double x9D;double y9D;
				  double x10D;double y10D;
				  double x11D;double y11D;
				  double x12D; double y12D;
				  double x13D;double y13D;

				  double x0DD;double y0DD;
                  double x1DD;double y1DD;
				  double x2DD;double y2DD;
                  double x3DD;double y3DD;
                  double x4DD;double y4DD;
                  double x5DD;double y5DD;
                  double x6DD;double y6DD;
				  double x7DD;double y7DD;
				  double x8DD;double y8DD;
				  double x9DD;double y9DD;
				  double x10DD;double y10DD;
				  double x11DD;double y11DD;
				  double x12DD; double y12DD;
				  double x13DD;double y13DD;
				  

				int xc1;			//центры вращения
				int yc1;
				int xc2;
				int yc2;

				int st11x;			//координаты первого стержня
				int st12x;
				int st11y;				
				int st12y;

				int st21x;			//координаты второго стержня
				int st22x;
				int st21y;				
				int st22y;

				int sh1x;			//координаты шасси 1
				int sh1y;
				double dsh1x;				
				double dsh1y;

				int sh2x;			// координаты шасси 2
				int sh2y;
				double dsh2x;				
				double dsh2y;

				int kr111x;			//Х крестиков
				int kr111x2;
				int kr112x;
				int kr112x2;
				int kr121x;
				int kr121x2;
				int kr122x;
				int kr122x2;

				int kr211x;
				int kr211x2;
				int kr212x;
				int kr212x2;
				int kr221x;
				int kr221x2;
				int kr222x;
				int kr222x2;

				int kr111y;			//Y крестиков
				int kr111y2;
				int kr112y;
				int kr112y2;
				int kr121y;
				int kr121y2;
				int kr122y;
				int kr122y2;

				int kr211y;
				int kr211y2;
				int kr212y;
				int kr212y2;
				int kr221y;
				int kr221y2;
				int kr222y;
				int kr222y2;

				int wing11x;		//координаты крыла
				int wing12x;
				int wing11y;			
				int wing12y;

				int wing21x;			
				int wing22x;
				int wing21y;
				int wing22y;

				int xcd;			//координаты дороги
				int ycd;
				int xd;
				int yd;


				/////////////////////////////Дублированные координаты


				double xc1D;				//центры вращения
				double yc1D;
				double xc2D;
				double yc2D;

				double st11xD;				//координаты первого стержня
				double st12xD;
				double st11yD;				
				double st12yD;

				double st21xD;				//координаты второго стержня
				double st22xD;
				double st21yD;				
				double st22yD;

				double sh1xD;				//координаты шасси 1
				double sh1yD;
				double dsh1xD;				
				double dsh1yD;

				double sh2xD;				//координаты шасси 2
				double sh2yD;
				double dsh2xD;				
				double dsh2yD;

				double kr111xD;			//Х крестиков
				double kr111x2D;
				double kr112xD;
				double kr112x2D;
				double kr121xD;
				double kr121x2D;
				double kr122xD;
				double kr122x2D;

				double kr211xD;
				double kr211x2D;
				double kr212xD;
				double kr212x2D;
				double kr221xD;
				double kr221x2D;
				double kr222xD;
				double kr222x2D;

				double kr111yD;			//Y крестиков
				double kr111y2D;
				double kr112yD;
				double kr112y2D;
				double kr121yD;
				double kr121y2D;
				double kr122yD;
				double kr122y2D;

				double kr211yD;
				double kr211y2D;
				double kr212yD;
				double kr212y2D;
				double kr221yD;
				double kr221y2D;
				double kr222yD;
				double kr222y2D;

				double wing11xD;			//координаты крыла
				double wing12xD;
				double wing11yD;			
				double wing12yD;

				double wing21xD;			
				double wing22xD;
				double wing21yD;
				double wing22yD;

				int xcdD;				//координаты дороги
				int ycdD;
				int xdD;
				int ydD;




				//ДУБЛИРОВАННЫЕ ДУБЛИРОВАННЫЕ ПЕРЕМЕННЫЕ


				double xc1DD;				//центры вращения
				double yc1DD;
				double xc2DD;
				double yc2DD;

				double st11xDD;				//координаты первого стержня
				double st12xDD;
				double st11yDD;				
				double st12yDD;

				double st21xDD;				//координаты второго стержня
				double st22xDD;
				double st21yDD;				
				double st22yDD;

				double sh1xDD;				//координаты шасси 1
				double sh1yDD;
				double dsh1xDD;				
				double dsh1yDD;

				double sh2xDD;				//координаты шасси 2
				double sh2yDD;
				double dsh2xDD;				
				double dsh2yDD;

				double kr111xDD;			//Х крестиков
				double kr111x2DD;
				double kr112xDD;
				double kr112x2DD;
				double kr121xDD;
				double kr121x2DD;
				double kr122xDD;
				double kr122x2DD;

				double kr211xDD;
				double kr211x2DD;
				double kr212xDD;
				double kr212x2DD;
				double kr221xDD;
				double kr221x2DD;
				double kr222xDD;
				double kr222x2DD;

				double kr111yDD;			//Y крестиков
				double kr111y2DD;
				double kr112yDD;
				double kr112y2DD;
				double kr121yDD;
				double kr121y2DD;
				double kr122yDD;
				double kr122y2DD;

				double kr211yDD;
				double kr211y2DD;
				double kr212yDD;
				double kr212y2DD;
				double kr221yDD;
				double kr221y2DD;
				double kr222yDD;
				double kr222y2DD;

				double wing11xDD;			//координаты крыла
				double wing12xDD;
				double wing11yDD;			
				double wing12yDD;

				double wing21xDD;			
				double wing22xDD;
				double wing21yDD;
				double wing22yDD;

				int xcdDD;				//координаты дороги
				int ycdDD;
				int xdDD;
				int ydDD;

				



	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Timer^  tm;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::TextBox^  textBox8;
private: System::Windows::Forms::Button^  button11;

	private: System::Windows::Forms::Button^  button7;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tm = (gcnew System::Windows::Forms::Timer(this->components));
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(40, 514);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(69, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Рисовать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(750, 581);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 73);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox1->Location = System::Drawing::Point(406, 558);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"1,3";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(202, 565);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Коэффициент масштабирования по X";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(842, 581);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(94, 73);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Вернуть рисунок в исходное состояние";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(184, 514);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 31);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Масштабировать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(202, 595);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(198, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Коэффициент масштабирования по Y";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox2->Location = System::Drawing::Point(406, 592);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(110, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"1,3";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(406, 514);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 31);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Повернуть";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox3->Location = System::Drawing::Point(406, 626);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(110, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"290";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox4->Location = System::Drawing::Point(406, 659);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(110, 20);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"345";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(202, 629);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"X центра масштабирования";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(202, 662);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(148, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Y центра масштабирования";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(638, 595);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Y центра вращения";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(638, 561);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(106, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"X центра вращения";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox5->Location = System::Drawing::Point(522, 558);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(110, 20);
			this->textBox5->TabIndex = 15;
			this->textBox5->Text = L"450";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox6->Location = System::Drawing::Point(522, 592);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(110, 20);
			this->textBox6->TabIndex = 14;
			this->textBox6->Text = L"325";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox7->Location = System::Drawing::Point(522, 626);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(110, 20);
			this->textBox7->TabIndex = 18;
			this->textBox7->Text = L"45";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(638, 629);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Угол поворота";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(626, 514);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(94, 31);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Перемещать";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(750, 514);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(86, 31);
			this->button7->TabIndex = 21;
			this->button7->Text = L"Полететь";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// tm
			// 
			this->tm->Tick += gcnew System::EventHandler(this, &Form1::tm_Tick);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(842, 514);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(94, 31);
			this->button8->TabIndex = 22;
			this->button8->Text = L"Стоп";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(5, 565);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(191, 89);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Коэффициенты лучше <2\r\nДробные ч-з тчк/зпт (по-разному).";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(807, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(162, 32);
			this->label9->TabIndex = 24;
			this->label9->Text = L"السلام والخير لك";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(750, 550);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(186, 23);
			this->button9->TabIndex = 25;
			this->button9->Text = L"Продолжить";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(942, 514);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(212, 140);
			this->button10->TabIndex = 26;
			this->button10->Text = L"СУПЕРКОМБОУЛЬТРАКНОПКА\r\n(Перемещение, полёт, вращение и масштабирование в одном)";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::HotTrack;
			this->textBox8->Location = System::Drawing::Point(522, 659);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(110, 20);
			this->textBox8->TabIndex = 27;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(641, 657);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 28;
			this->button11->Text = L"Тик";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1187, 706);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->KeyPreview = true;
			this->MaximumSize = System::Drawing::Size(100000, 100000);
			this->Name = L"Form1";
			this->Text = L"ЦУП";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 tm->Interval=100;			//КНОПКА РИСОВАНИЯ

				  Graphics ^im=this->CreateGraphics();	

				  Pen ^pen2 =gcnew Pen (SystemColors::Control);
				  im->FillRectangle(pen2->Brush,0,0,3000,3000);		//закрашивание

				  Color ^col=gcnew Color();	
				  Pen ^pen =gcnew Pen (col->Red);
					
				  x0=100;y0=250;	//координаты корпуса самолёта
                  x1=150;y1=300;
				  x2=425;y2=300;
                  x3=435;y3=310;
                  x4=440;y4=315;
                  x5=450;y5=325;
                  x6=440;y6=335;
				  x7=435;y7=340;
				  x8=425;y8=345;
				  x9=415;y9=350;
				  x10=200;y10=350;
				  x11=150;y11=300;
				  x12=75; y12=325;
				  x13=125;y13=300;


				xc1=230;				//центры вращения
				yc1=385;
				xc2=350;
				yc2=385;

				st11x=230;				//координаты первого стержня
				st12x=230;
				st11y=350;				
				st12y=370;

				st21x=350;				//координаты второго стержня
				st22x=350;
				st21y=350;				
				st22y=370;


				sh1x=215;				//шасси 1
				sh1y=370;
				dsh1x=30;				
				dsh1y=30;

				sh2x=335;				//шасси 2
				sh2y=370;
				dsh2x=30;				
				dsh2y=30;

				kr111x=230;				//Х крестиков
				kr112x=230;
				kr121x=215;
				kr122x=245;

				kr211x=350;
				kr212x=350;
				kr221x=335;
				kr222x=365;

				kr111y=370;				//Y крестиков
				kr112y=400;
				kr121y=385;
				kr122y=385;

				kr211y=370;
				kr212y=400;
				kr221y=385;
				kr222y=385;

				wing11x=250;			//координаты крыла
				wing12x=140;
				wing11y=330;			
				wing12y=370;

				wing21x=320;
				wing22x=140;
				wing21y=330;
				wing22y=370;

				xcd=0;					//координаты дороги
				ycd=400;
				xd=3000;
				yd=20;

				  int mm=14;
				   
			      array <PointF > ^y=gcnew array<PointF > (mm);
                  y[0].X=x0;y[0].Y=y0;
                  y[1].X=x1;y[1].Y=y1;
				  y[2].X=x2;y[2].Y=y2;
                  y[3].X=x3;y[3].Y=y3;
                  y[4].X=x4;y[4].Y=y4;
                  y[5].X=x5;y[5].Y=y5;
                  y[6].X=x6;y[6].Y=y6;
				  y[7].X=x7;y[7].Y=y7;
				  y[8].X=x8;y[8].Y=y8;
				  y[9].X=x9;y[9].Y=y9;
				  y[10].X=x10;y[10].Y=y10;
				  y[11].X=x11;y[11].Y=y11;
				  y[12].X=x12;y[12].Y=y12;
				  y[13].X=x13;y[13].Y=y13;
				  
                  im->DrawPolygon(pen,y);									//рисование корпуса самолёта

				  

				  im->DrawLine(pen,st11x,st11y,st12x,st12y);				//стержень шасси 1
				  im->DrawLine(pen,st21x,st21y,st22x,st22y);				//стержень шасси 2

				  im->DrawEllipse(pen,sh1x,sh1y,dsh1x,dsh1y);				//шасся 1
				  im->DrawEllipse(pen,sh2x,sh2y,dsh2x,dsh2y);				//шасся 2

				  im->DrawLine(pen,kr111x,kr111y,kr112x,kr112y);			//крестик первой шасси
				  im->DrawLine(pen,kr121x,kr121y,kr122x,kr122y);

				  im->DrawLine(pen,kr211x,kr211y,kr212x,kr212y);			//крестик второй шасси
				  im->DrawLine(pen,kr221x,kr221y,kr222x,kr222y);

				  im->DrawLine(pen,wing11x,wing11y,wing12x,wing12y);		//крыло
				  im->DrawLine(pen,wing21x,wing21y,wing22x,wing22y);

				 im->FillRectangle(pen->Brush,xcd,ycd,xd,yd);				//дорога


				
				 /////////////////////////////Дублированные координаты


				



			/*	 //Дублированные координаты



				  x0D=x0-997;		y0D=y0;
				  x1D=x1-997;		y1D=y1;
				  x2D=x2-997;		y2D=y2;
				  x3D=x3-997;		y3D=y3;
				  x4D=x4-997;		y4D=y4;
				  x5D=x5-997;		y5D=y5;
				  x6D=x6-997;		y6D=y6;
				  x7D=x7-997;		y7D=y7;
				  x8D=x8-997;		y8D=y8;
				  x9D=x9-997;		y9D=y9;
				  x10D=x10-997;	y10D=y10;
				  x11D=x11-997;	y11D=y11;
				  x12D=x12-997;	y12D=y12;
				  x13D=x13-997;	y13D=y13;


				xc1D=xc1-997;				//центры вращения
				yc1D=yc1;
				xc2D=xc2-997;
				yc2D=yc2;

				st11xD=st11x-997;				//координаты первого стержня
				st12xD=st12x-997;
				st11yD=st11y;				
				st12yD=st12y;

				st21xD=st21x-997;				//координаты второго стержня
				st22xD=st22x-997;
				st21yD=st21y;				
				st22yD=st22y;


				sh1xD=sh1x-997;				//шасси 1
				sh1yD=sh1y;
				dsh1xD=dsh1x;				
				dsh1yD=dsh1y;

				sh2xD=sh2x-997;				//шасси 2
				sh2yD=sh2y;
				dsh2xD=dsh2x;				
				dsh2yD=dsh2y;

				kr111xD=kr111x-997;				//Х крестиков
				kr112xD=kr112x-997;
				kr121xD=kr121x-997;
				kr122xD=kr122x-997;

				kr211xD=kr211x-997;
				kr212xD=kr212x-997;
				kr221xD=kr221x-997;
				kr222xD=kr222x-997;

				kr111yD=kr111y;				//Y крестиков
				kr112yD=kr112y;
				kr121yD=kr121y;
				kr122yD=kr122y;

				kr211yD=kr211y;
				kr212yD=kr212y;
				kr221yD=kr221y;
				kr222yD=kr222y;

				wing11xD=wing11x-997;			//координаты крыла
				wing12xD=wing12x-997;
				wing11yD=wing11y;			
				wing12yD=wing12y;

				wing21xD=wing21x-997;
				wing22xD=wing22x-997;
				wing21yD=wing21y;
				wing22yD=wing22y;

				xcdD=xcd;					//координаты дороги
				ycdD=ycd;
				xdD=xd;
				ydD=yd;*/





				  /*ФОРМУЛЫ:			x=x1+dx*l;
										y=y1-exp(dx*l);
				  */

				 }							   

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();				//КНОПКА ВЫХОДА
		 }
					 
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 		//КНОПКА МАСШТАБИРОВАНИЯ

			 tm->Interval=100;
			 tm->Enabled = true;				
			 l=1;					//Индикатор масштабирования/поворота
			 i=1;

			 kx=Convert::ToDouble(textBox1->Text);
			 ky=Convert::ToDouble(textBox2->Text);
			 xcm=Convert::ToDouble(textBox3->Text);
			 ycm=Convert::ToDouble(textBox4->Text);

			 dmx=(kx-1)/10;
			 dmy=(ky-1)/10;
			 kx=1+dmx;
			 ky=1+dmy;

			 //Дублированные координаты



				  x0D=x0;		y0D=y0;
				  x1D=x1;		y1D=y1;
				  x2D=x2;		y2D=y2;
				  x3D=x3;		y3D=y3;
				  x4D=x4;		y4D=y4;
				  x5D=x5;		y5D=y5;
				  x6D=x6;		y6D=y6;
				  x7D=x7;		y7D=y7;
				  x8D=x8;		y8D=y8;
				  x9D=x9;		y9D=y9;
				  x10D=x10;	y10D=y10;
				  x11D=x11;	y11D=y11;
				  x12D=x12;	y12D=y12;
				  x13D=x13;	y13D=y13;


				xc1D=xc1;				//центры вращения
				yc1D=yc1;
				xc2D=xc2;
				yc2D=yc2;

				st11xD=st11x;				//координаты первого стержня
				st12xD=st12x;
				st11yD=st11y;				
				st12yD=st12y;

				st21xD=st21x;				//координаты второго стержня
				st22xD=st22x;
				st21yD=st21y;				
				st22yD=st22y;


				sh1xD=sh1x;				//шасси 1
				sh1yD=sh1y;
				dsh1xD=dsh1x;				
				dsh1yD=dsh1y;

				sh2xD=sh2x;				//шасси 2
				sh2yD=sh2y;
				dsh2xD=dsh2x;				
				dsh2yD=dsh2y;

				kr111xD=kr111x;				//Х крестиков
				kr112xD=kr112x;
				kr121xD=kr121x;
				kr122xD=kr122x;

				kr211xD=kr211x;
				kr212xD=kr212x;
				kr221xD=kr221x;
				kr222xD=kr222x;

				kr111yD=kr111y;				//Y крестиков
				kr112yD=kr112y;
				kr121yD=kr121y;
				kr122yD=kr122y;

				kr211yD=kr211y;
				kr212yD=kr212y;
				kr221yD=kr221y;
				kr222yD=kr222y;

				wing11xD=wing11x;			//координаты крыла
				wing12xD=wing12x;
				wing11yD=wing11y;			
				wing12yD=wing12y;

				wing21xD=wing21x;
				wing22xD=wing22x;
				wing21yD=wing21y;
				wing22yD=wing22y;

				xcdD=xcd;					//координаты дороги
				ycdD=ycd;
				xdD=xd;
				ydD=yd;



		 }




private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
						//КНОПКА ПОВОРОТА
			 Graphics ^im=this->CreateGraphics();

			 xc=Convert::ToDouble(textBox5->Text);
			 yc=Convert::ToDouble(textBox6->Text);
			 a=Convert::ToDouble(textBox7->Text);
			 da=a/1000;
			 a=da;

			 if(a*1000>720)
				{
					

					tm->Interval=50;
					tm->Enabled = true;				
					l=2;					//Индикатор масштабирования/поворота
					j=1;
				}

			 if (a*1000<=720)
						{
							a=a*1000;
				  Pen ^pen2 =gcnew Pen (SystemColors::Control);
				  im->FillRectangle(pen2->Brush,0,0,3000,3000);		//закрашивание

				  Color ^col=gcnew Color();	
				  Pen ^pen =gcnew Pen (col->Red);

				 x0D=round(xc+((x0-xc)*cos(grad*a)+(y0-yc)*sin(grad*a)));	//координаты корпуса самолёта
				 y0D=round(yc+((y0-yc)*cos(grad*a)-(x0-xc)*sin(grad*a)));
				 x0=x0D;
				 y0=y0D;

				 x1D=round(xc+((x1-xc)*cos(grad*a)+(y1-yc)*sin(grad*a)));
				 y1D=round(yc+((y1-yc)*cos(grad*a)-(x1-xc)*sin(grad*a)));
				 x1=x1D;
				 y1=y1D;

				 x2D=round(xc+((x2-xc)*cos(grad*a)+(y2-yc)*sin(grad*a)));
				 y2D=round(yc+((y2-yc)*cos(grad*a)-(x2-xc)*sin(grad*a)));
				 x2=x2D;
				 y2=y2D;

				 x3D=round(xc+((x3-xc)*cos(grad*a)+(y3-yc)*sin(grad*a)));
				 y3D=round(yc+((y3-yc)*cos(grad*a)-(x3-xc)*sin(grad*a)));
				 x3=x3D;
				 y3=y3D;

				 x4D=round(xc+((x4-xc)*cos(grad*a)+(y4-yc)*sin(grad*a)));
				 y4D=round(yc+((y4-yc)*cos(grad*a)-(x4-xc)*sin(grad*a)));
				 x4=x4D;
				 y4=y4D;

				 x5D=round(xc+((x5-xc)*cos(grad*a)+(y5-yc)*sin(grad*a)));
				 y5D=round(yc+((y5-yc)*cos(grad*a)-(x5-xc)*sin(grad*a)));
				 x5=x5D;
				 y5=y5D;

				 x6D=round(xc+((x6-xc)*cos(grad*a)+(y6-yc)*sin(grad*a)));
				 y6D=round(yc+((y6-yc)*cos(grad*a)-(x6-xc)*sin(grad*a)));
				 x6=x6D;
				 y6=y6D;

				 x7D=round(xc+((x7-xc)*cos(grad*a)+(y7-yc)*sin(grad*a)));
				 y7D=round(yc+((y7-yc)*cos(grad*a)-(x7-xc)*sin(grad*a)));
				 x7=x7D;
				 y7=y7D;

				 x8D=round(xc+((x8-xc)*cos(grad*a)+(y8-yc)*sin(grad*a)));
				 y8D=round(yc+((y8-yc)*cos(grad*a)-(x8-xc)*sin(grad*a)));
				 x8=x8D;
				 y8=y8D;

				 x9D=round(xc+((x9-xc)*cos(grad*a)+(y9-yc)*sin(grad*a)));
				 y9D=round(yc+((y9-yc)*cos(grad*a)-(x9-xc)*sin(grad*a)));
				 x9=x9D;
				 y9=y9D;

				 x10D=round(xc+((x10-xc)*cos(grad*a)+(y10-yc)*sin(grad*a)));
				 y10D=round(yc+((y10-yc)*cos(grad*a)-(x10-xc)*sin(grad*a)));
				 x10=x10D;
				 y10=y10D;

				 x11D=round(xc+((x11-xc)*cos(grad*a)+(y11-yc)*sin(grad*a)));
				 y11D=round(yc+((y11-yc)*cos(grad*a)-(x11-xc)*sin(grad*a)));
				 x11=x11D;
				 y11=y11D;

				 x12D=round(xc+((x12-xc)*cos(grad*a)+(y12-yc)*sin(grad*a)));
				 y12D=round(yc+((y12-yc)*cos(grad*a)-(x12-xc)*sin(grad*a)));
				 x12=x12D;
				 y12=y12D;

				 x13D=round(xc+((x13-xc)*cos(grad*a)+(y13-yc)*sin(grad*a)));
				 y13D=round(yc+((y13-yc)*cos(grad*a)-(x13-xc)*sin(grad*a)));
				 x13=x13D;
				 y13=y13D;

				 

				 
                  


				xc1D=round(xc+((xc1-xc)*cos(grad*a)+(yc1-yc)*sin(grad*a)));				//центры вращения
				yc1D=round(yc+((yc1-yc)*cos(grad*a)-(xc1-xc)*sin(grad*a)));
				xc1=xc1D;
				yc1=yc1D;

				xc2D=round(xc+((xc2-xc)*cos(grad*a)+(yc2-yc)*sin(grad*a)));
				yc2D=round(yc+((yc2-yc)*cos(grad*a)-(xc2-xc)*sin(grad*a)));
				xc2=xc2D;
				yc2=yc2D;

								
				st11xD=round(xc+((st11x-xc)*cos(grad*a)+(st11y-yc)*sin(grad*a)));		//координаты первого стержня
				st11yD=round(yc+((st11y-yc)*cos(grad*a)-(st11x-xc)*sin(grad*a)));
				st11x=st11xD;
				st11y=st11yD;
				
				st12xD=round(xc+((st12x-xc)*cos(grad*a)+(st12y-yc)*sin(grad*a)));
				st12yD=round(yc+((st12y-yc)*cos(grad*a)-(st12x-xc)*sin(grad*a)));
				st12x=st12xD;
				st12y=st12yD;

				st21xD=round(xc+((st21x-xc)*cos(grad*a)+(st21y-yc)*sin(grad*a)));		//координаты второго стержня
				st21yD=round(yc+((st21y-yc)*cos(grad*a)-(st21x-xc)*sin(grad*a)));
				st21x=st21xD;
				st21y=st21yD;
				
				st22xD=round(xc+((st22x-xc)*cos(grad*a)+(st22y-yc)*sin(grad*a)));
				st22yD=round(yc+((st22y-yc)*cos(grad*a)-(st22x-xc)*sin(grad*a)));
				st22x=st22xD;
				st22y=st22yD;


				dsh1x=dsh1x;				
				dsh1y=dsh1y;

				sh1xD=round(xc+((sh1x-xc)*cos(grad*a)+(sh1y-yc)*sin(grad*a)));				//шасси 1
				sh1yD=round(yc+((sh1y-yc)*cos(grad*a)-(sh1x-xc)*sin(grad*a)));
				sh1x=sh1xD;
				sh1y=sh1yD;
				sh1xD=round(xc1+((sh1x-xc1)*cos(-grad*a)+(sh1y-yc1)*sin(-grad*a)));
				sh1yD=round(yc1+((sh1y-yc1)*cos(-grad*a)-(sh1x-xc1)*sin(-grad*a)));
				sh1x=sh1xD;
				sh1y=sh1yD;

				dsh2x=dsh2x;				
				dsh2y=dsh2y;

				sh2xD=round(xc+((sh2x-xc)*cos(grad*a)+(sh2y-yc)*sin(grad*a)));				//шасси 2
				sh2yD=round(yc+((sh2y-yc)*cos(grad*a)-(sh2x-xc)*sin(grad*a)));
				sh2x=sh2xD;
				sh2y=sh2yD;
				sh2xD=round(xc2+((sh2x-xc2)*cos(-grad*a)+(sh2y-yc2)*sin(-grad*a)));
				sh2yD=round(yc2+((sh2y-yc2)*cos(-grad*a)-(sh2x-xc2)*sin(-grad*a)));
				sh2x=sh2xD;
				sh2y=sh2yD;


				 kr111xD=round(xc+((kr111x-xc)*cos(grad*a)+(kr111y-yc)*sin(grad*a)));		//крестики
				 kr111yD=round(yc+((kr111y-yc)*cos(grad*a)-(kr111x-xc)*sin(grad*a)));
				 kr111x=kr111xD;
				 kr111y=kr111yD;

				 kr112xD=round(xc+((kr112x-xc)*cos(grad*a)+(kr112y-yc)*sin(grad*a)));
				 kr112yD=round(yc+((kr112y-yc)*cos(grad*a)-(kr112x-xc)*sin(grad*a)));
				 kr112x=kr112xD;
				 kr112y=kr112yD;

				 kr121xD=round(xc+((kr121x-xc)*cos(grad*a)+(kr121y-yc)*sin(grad*a)));
				 kr121yD=round(yc+((kr121y-yc)*cos(grad*a)-(kr121x-xc)*sin(grad*a)));
				 kr121x=kr121xD;
				 kr121y=kr121yD;

				 kr122xD=round(xc+((kr122x-xc)*cos(grad*a)+(kr122y-yc)*sin(grad*a)));
				 kr122yD=round(yc+((kr122y-yc)*cos(grad*a)-(kr122x-xc)*sin(grad*a)));
				 kr122x=kr122xD;
				 kr122y=kr122yD;

				 kr211xD=round(xc+((kr211x-xc)*cos(grad*a)+(kr211y-yc)*sin(grad*a)));
				 kr211yD=round(yc+((kr211y-yc)*cos(grad*a)-(kr211x-xc)*sin(grad*a)));
				 kr211x=kr211xD;
				 kr211y=kr211yD;

				 kr212xD=round(xc+((kr212x-xc)*cos(grad*a)+(kr212y-yc)*sin(grad*a)));
				 kr212yD=round(yc+((kr212y-yc)*cos(grad*a)-(kr212x-xc)*sin(grad*a)));
				 kr212x=kr212xD;
				 kr212y=kr212yD;

				 kr221xD=round(xc+((kr221x-xc)*cos(grad*a)+(kr221y-yc)*sin(grad*a)));
				 kr221yD=round(yc+((kr221y-yc)*cos(grad*a)-(kr221x-xc)*sin(grad*a)));
				 kr221x=kr221xD;
				 kr221y=kr221yD;

				 kr222xD=round(xc+((kr222x-xc)*cos(grad*a)+(kr222y-yc)*sin(grad*a)));
				 kr222yD=round(yc+((kr222y-yc)*cos(grad*a)-(kr222x-xc)*sin(grad*a)));
				 kr222x=kr222xD;
				 kr222y=kr222yD;



				wing11xD=round(xc+((wing11x-xc)*cos(grad*a)+(wing11y-yc)*sin(grad*a)));		//координаты крыла
				wing11yD=round(yc+((wing11y-yc)*cos(grad*a)-(wing11x-xc)*sin(grad*a)));
				wing11x=wing11xD;
				wing11y=wing11yD;

				wing12xD=round(xc+((wing12x-xc)*cos(grad*a)+(wing12y-yc)*sin(grad*a)));
				wing12yD=round(yc+((wing12y-yc)*cos(grad*a)-(wing12x-xc)*sin(grad*a)));
				wing12x=wing12xD;
				wing12y=wing12yD;
				

				wing21xD=round(xc+((wing21x-xc)*cos(grad*a)+(wing21y-yc)*sin(grad*a)));
				wing21yD=round(yc+((wing21y-yc)*cos(grad*a)-(wing21x-xc)*sin(grad*a)));
				wing21x=wing21xD;
				wing21y=wing21yD;

				wing22xD=round(xc+((wing22x-xc)*cos(grad*a)+(wing22y-yc)*sin(grad*a)));
				wing22yD=round(yc+((wing22y-yc)*cos(grad*a)-(wing22x-xc)*sin(grad*a)));
				wing22x=wing22xD;
				wing22y=wing22yD;



				xcd=xcd;					//координаты дороги
				ycd=ycd;
				xd=xd;
				yd=yd;

				  int mm=14;
				   
			      array <PointF > ^y=gcnew array<PointF > (mm);
                  y[0].X=x0;y[0].Y=y0;
                  y[1].X=x1;y[1].Y=y1;
				  y[2].X=x2;y[2].Y=y2;
                  y[3].X=x3;y[3].Y=y3;
                  y[4].X=x4;y[4].Y=y4;
                  y[5].X=x5;y[5].Y=y5;
                  y[6].X=x6;y[6].Y=y6;
				  y[7].X=x7;y[7].Y=y7;
				  y[8].X=x8;y[8].Y=y8;
				  y[9].X=x9;y[9].Y=y9;
				  y[10].X=x10;y[10].Y=y10;
				  y[11].X=x11;y[11].Y=y11;
				  y[12].X=x12;y[12].Y=y12;
				  y[13].X=x13;y[13].Y=y13;
				  
                  im->DrawPolygon(pen,y);									//рисование корпуса самолёта

				  

				  im->DrawLine(pen,st11x,st11y,st12x,st12y);				//стержень шасси 1
				  im->DrawLine(pen,st21x,st21y,st22x,st22y);				//стержень шасси 2

				  im->DrawEllipse(pen,sh1x,sh1y,dsh1x,dsh1y);				//шасся 1
				  im->DrawEllipse(pen,sh2x,sh2y,dsh2x,dsh2y);				//шасся 2

				  im->DrawLine(pen,kr111x,kr111y,kr112x,kr112y);			//крестик первой шасси
				  im->DrawLine(pen,kr121x,kr121y,kr122x,kr122y);

				  im->DrawLine(pen,kr211x,kr211y,kr212x,kr212y);			//крестик второй шасси
				  im->DrawLine(pen,kr221x,kr221y,kr222x,kr222y);

				  im->DrawLine(pen,wing11x,wing11y,wing12x,wing12y);		//крыло
				  im->DrawLine(pen,wing21x,wing21y,wing22x,wing22y);

				 im->FillRectangle(pen->Brush,xcd,ycd,xd,yd);				//дорога



				 /////////////////////////////Дублированные координаты

				x0D=0;y0D=0;		//координаты корпуса самолёта
                x1D=0;y1D=0;
				x2D=0;y2D=0;
                x3D=0;y3D=0;
                x4D=0;y4D=0;
                x5D=0;y5D=0;
                x6D=0;y6D=0;
				x7D=0;y7D=0;
				x8D=0;y8D=0;
				x9D=0;y9D=0;
				x10D=0;y10D=0;
				x11D=0;y11D=0;
				x12D=0;y12D=0;
				x13D=0;y13D=0;

				xc1D=0;				//центры вращения
				yc1D=0;
				xc2D=0;
				yc2D=0;

				st11xD=0;				//координаты первого стержня
				st12xD=0;
				st11yD=0;				
				st12yD=0;

				st21xD=0;				//координаты второго стержня
				st22xD=0;
				st21yD=0;				
				st22yD=0;

				sh1xD=0;				//координаты шасси 1
				sh1yD=0;
				dsh1xD=0;				
				dsh1yD=0;

				sh2xD=0;				//координаты шасси 2
				sh2yD=0;
				dsh2xD=0;				
				dsh2yD=0;

				kr111xD=0;			//Х крестиков
				kr111x2D=0;
				kr112xD=0;
				kr112x2D=0;
				kr121xD=0;
				kr121x2D=0;
				kr122xD=0;
				kr122x2D=0;

				kr211xD=0;
				kr211x2D=0;
				kr212xD=0;
				kr212x2D=0;
				kr221xD=0;
				kr221x2D=0;
				kr222xD=0;
				kr222x2D=0;

				kr111yD=0;			//Y крестиков
				kr111y2D=0;
				kr112yD=0;
				kr112y2D=0;
				kr121yD=0;
				kr121y2D=0;
				kr122yD=0;
				kr122y2D=0;

				kr211yD=0;
				kr211y2D=0;
				kr212yD=0;
				kr212y2D=0;
				kr221yD=0;
				kr221y2D=0;
				kr222yD=0;
				kr222y2D=0;

				wing11xD=0;			//координаты крыла
				wing12xD=0;
				wing11yD=0;			
				wing12yD=0;

				wing21xD=0;			
				wing22xD=0;
				wing21yD=0;
				wing22yD=0;

				xcdD=0;				//координаты дороги
				ycdD=0;
				xdD=0;
				ydD=0;


				

				}
				  



		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
					//КНОПКА ПЕРЕМЕЩЕНИЯ
			 
			 tm->Interval=50;
			 tm->Enabled = true;				
			 k=2;					//Индикатор полёта/перемещения
			 
				x0D=0;y0D=0;		//координаты корпуса самолёта
                x1D=0;y1D=0;
				x2D=0;y2D=0;
                x3D=0;y3D=0;
                x4D=0;y4D=0;
                x5D=0;y5D=0;
                x6D=0;y6D=0;
				x7D=0;y7D=0;
				x8D=0;y8D=0;
				x9D=0;y9D=0;
				x10D=0;y10D=0;
				x11D=0;y11D=0;
				x12D=0;y12D=0;
				x13D=0;y13D=0;

				xc1D=0;				//центры вращения
				yc1D=0;
				xc2D=0;
				yc2D=0;

				st11xD=0;				//координаты первого стержня
				st12xD=0;
				st11yD=0;				
				st12yD=0;

				st21xD=0;				//координаты второго стержня
				st22xD=0;
				st21yD=0;				
				st22yD=0;

				sh1xD=0;				//координаты шасси 1
				sh1yD=0;
				dsh1xD=0;				
				dsh1yD=0;

				sh2xD=0;				//координаты шасси 2
				sh2yD=0;
				dsh2xD=0;				
				dsh2yD=0;

				kr111xD=0;			//Х крестиков
				kr111x2D=0;
				kr112xD=0;
				kr112x2D=0;
				kr121xD=0;
				kr121x2D=0;
				kr122xD=0;
				kr122x2D=0;

				kr211xD=0;
				kr211x2D=0;
				kr212xD=0;
				kr212x2D=0;
				kr221xD=0;
				kr221x2D=0;
				kr222xD=0;
				kr222x2D=0;

				kr111yD=0;			//Y крестиков
				kr111y2D=0;
				kr112yD=0;
				kr112y2D=0;
				kr121yD=0;
				kr121y2D=0;
				kr122yD=0;
				kr122y2D=0;

				kr211yD=0;
				kr211y2D=0;
				kr212yD=0;
				kr212y2D=0;
				kr221yD=0;
				kr221y2D=0;
				kr222yD=0;
				kr222y2D=0;

				wing11xD=0;			//координаты крыла
				wing12xD=0;
				wing11yD=0;			
				wing12yD=0;

				wing21xD=0;			
				wing22xD=0;
				wing21yD=0;
				wing22yD=0;

				xcdD=0;				//координаты дороги
				ycdD=0;
				xdD=0;
				ydD=0;




				
		
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
					//КНОПКА ПОЛЁТА	

			 tm->Interval=100;
			 tm->Enabled = true;				
			 k=1;					//Индикатор полёта/перемещения

				x0D=0;y0D=0;		//координаты корпуса самолёта
                x1D=0;y1D=0;
				x2D=0;y2D=0;
                x3D=0;y3D=0;
                x4D=0;y4D=0;
                x5D=0;y5D=0;
                x6D=0;y6D=0;
				x7D=0;y7D=0;
				x8D=0;y8D=0;
				x9D=0;y9D=0;
				x10D=0;y10D=0;
				x11D=0;y11D=0;
				x12D=0;y12D=0;
				x13D=0;y13D=0;

				xc1D=0;				//центры вращения
				yc1D=0;
				xc2D=0;
				yc2D=0;

				st11xD=0;				//координаты первого стержня
				st12xD=0;
				st11yD=0;				
				st12yD=0;

				st21xD=0;				//координаты второго стержня
				st22xD=0;
				st21yD=0;				
				st22yD=0;

				sh1xD=0;				//координаты шасси 1
				sh1yD=0;
				dsh1xD=0;				
				dsh1yD=0;

				sh2xD=0;				//координаты шасси 2
				sh2yD=0;
				dsh2xD=0;				
				dsh2yD=0;

				kr111xD=0;			//Х крестиков
				kr111x2D=0;
				kr112xD=0;
				kr112x2D=0;
				kr121xD=0;
				kr121x2D=0;
				kr122xD=0;
				kr122x2D=0;

				kr211xD=0;
				kr211x2D=0;
				kr212xD=0;
				kr212x2D=0;
				kr221xD=0;
				kr221x2D=0;
				kr222xD=0;
				kr222x2D=0;

				kr111yD=0;			//Y крестиков
				kr111y2D=0;
				kr112yD=0;
				kr112y2D=0;
				kr121yD=0;
				kr121y2D=0;
				kr122yD=0;
				kr122y2D=0;

				kr211yD=0;
				kr211y2D=0;
				kr212yD=0;
				kr212y2D=0;
				kr221yD=0;
				kr221y2D=0;
				kr222yD=0;
				kr222y2D=0;

				wing11xD=0;			//координаты крыла
				wing12xD=0;
				wing11yD=0;			
				wing12yD=0;

				wing21xD=0;			
				wing22xD=0;
				wing21yD=0;
				wing22yD=0;


				xcdD=0;				//координаты дороги
				ycdD=0;
				xdD=0;
				ydD=0;

			 


			

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 tm->Enabled = false;		//ПРИВЕДЕНИЕ РИСУНКА К ИСХОДНОМУ СОСТОЯНИЮ
			 tm->Interval=100;
			 Graphics ^im=this->CreateGraphics();
		
			Pen ^pen2 =gcnew Pen (SystemColors::Control);
			im->FillRectangle(pen2->Brush,0,0,3000,3000);		//закрашивание

		//Воссоздание изначального рисунка
				  Color ^col=gcnew Color();	
				 Pen ^pen = gcnew Pen (col->Red);



				x0=100;y0=250;		//координаты корпуса самолёта
                x1=150;y1=300;
				x2=425;y2=300;
                x3=435;y3=310;
                x4=440;y4=315;
                x5=450;y5=325;
                x6=440;y6=335;
				x7=435;y7=340;
				x8=425;y8=345;
				x9=415;y9=350;
				x10=200;y10=350;
				x11=150;y11=300;
				x12=75; y12=325;
				x13=125;y13=300;
				 

				xc1=230;				//центры вращения
				yc1=385;
				xc2=350;
				yc2=385;

				st11x=230;				//координаты первого стержня
				st12x=230;
				st11y=350;				
				st12y=370;

				st21x=350;				//координаты второго стержня
				st22x=350;
				st21y=350;				
				st22y=370;


				sh1x=215;				//шасси 1
				sh1y=370;
				dsh1x=30;				
				dsh1y=30;

				sh2x=335;				//шасси 2
				sh2y=370;
				dsh2x=30;				
				dsh2y=30;

				kr111x=230;				//X крестиков
				kr112x=230;
				kr121x=215;
				kr122x=245;

				kr211x=350;
				kr212x=350;
				kr221x=335;
				kr222x=365;

				kr111y=370;				//Y крестиков
				kr112y=400;
				kr121y=385;
				kr122y=385;

				kr211y=370;
				kr212y=400;
				kr221y=385;
				kr222y=385;

				wing11x=250;			//координаты крыла
				wing12x=140;
				wing11y=330;			
				wing12y=370;

				wing21x=320;
				wing22x=140;
				wing21y=330;
				wing22y=370;

				xcd=0;					//координаты дороги
				ycd=400;
				xd=3000;
				yd=20;

				  int mm=14;
				   
			      array <PointF > ^y=gcnew array<PointF > (mm);
                  y[0].X=x0;y[0].Y=y0;
                  y[1].X=x1;y[1].Y=y1;
				  y[2].X=x2;y[2].Y=y2;
                  y[3].X=x3;y[3].Y=y3;
                  y[4].X=x4;y[4].Y=y4;
                  y[5].X=x5;y[5].Y=y5;
                  y[6].X=x6;y[6].Y=y6;
				  y[7].X=x7;y[7].Y=y7;
				  y[8].X=x8;y[8].Y=y8;
				  y[9].X=x9;y[9].Y=y9;
				  y[10].X=x10;y[10].Y=y10;
				  y[11].X=x11;y[11].Y=y11;
				  y[12].X=x12;y[12].Y=y12;
				  y[13].X=x13;y[13].Y=y13;
				  
                  im->DrawPolygon(pen,y);									//рисование корпуса самолёта

				  

				  im->DrawLine(pen,st11x,st11y,st12x,st12y);				//стержень шасси 1
				  im->DrawLine(pen,st21x,st21y,st22x,st22y);				//стержень шасси 2

				  im->DrawEllipse(pen,sh1x,sh1y,dsh1x,dsh1y);				//шасся 1
				  im->DrawEllipse(pen,sh2x,sh2y,dsh2x,dsh2y);				//шасся 2

				  im->DrawLine(pen,kr111x,kr111y,kr112x,kr112y);			//крестик первой шасси
				  im->DrawLine(pen,kr121x,kr121y,kr122x,kr122y);

				  im->DrawLine(pen,kr211x,kr211y,kr212x,kr212y);			//крестик второй шасси
				  im->DrawLine(pen,kr221x,kr221y,kr222x,kr222y);

				  im->DrawLine(pen,wing11x,wing11y,wing12x,wing12y);		//крыло
				  im->DrawLine(pen,wing21x,wing21y,wing22x,wing22y);

				 im->FillRectangle(pen->Brush,xcd,ycd,xd,yd);				//дорога

				
				 
				 /////////////////////////////Дублированные координаты

				x0D=0;y0D=0;		//координаты корпуса самолёта
                x1D=0;y1D=0;
				x2D=0;y2D=0;
                x3D=0;y3D=0;
                x4D=0;y4D=0;
                x5D=0;y5D=0;
                x6D=0;y6D=0;
				x7D=0;y7D=0;
				x8D=0;y8D=0;
				x9D=0;y9D=0;
				x10D=0;y10D=0;
				x11D=0;y11D=0;
				x12D=0;y12D=0;
				x13D=0;y13D=0;

				xc1D=0;				//центры вращения
				yc1D=0;
				xc2D=0;
				yc2D=0;

				st11xD=0;				//координаты первого стержня
				st12xD=0;
				st11yD=0;				
				st12yD=0;

				st21xD=0;				//координаты второго стержня
				st22xD=0;
				st21yD=0;				
				st22yD=0;

				sh1xD=0;				//координаты шасси 1
				sh1yD=0;
				dsh1xD=0;				
				dsh1yD=0;

				sh2xD=0;				//координаты шасси 2
				sh2yD=0;
				dsh2xD=0;				
				dsh2yD=0;

				kr111xD=0;			//Х крестиков
				kr111x2D=0;
				kr112xD=0;
				kr112x2D=0;
				kr121xD=0;
				kr121x2D=0;
				kr122xD=0;
				kr122x2D=0;

				kr211xD=0;
				kr211x2D=0;
				kr212xD=0;
				kr212x2D=0;
				kr221xD=0;
				kr221x2D=0;
				kr222xD=0;
				kr222x2D=0;

				kr111yD=0;			//Y крестиков
				kr111y2D=0;
				kr112yD=0;
				kr112y2D=0;
				kr121yD=0;
				kr121y2D=0;
				kr122yD=0;
				kr122y2D=0;

				kr211yD=0;
				kr211y2D=0;
				kr212yD=0;
				kr212y2D=0;
				kr221yD=0;
				kr221y2D=0;
				kr222yD=0;
				kr222y2D=0;

				wing11xD=0;			//координаты крыла
				wing12xD=0;
				wing11yD=0;			
				wing12yD=0;

				wing21xD=0;			
				wing22xD=0;
				wing21yD=0;
				wing22yD=0;

				xcdD=0;				//координаты дороги
				ycdD=0;
				xdD=0;
				ydD=0;





		
				s=0;
				l=0;
				k=0;
				S=0;
			
		 }									//ВОЗВРАЩЕНИЕ К ИСХОДНОМУ


private: System::Void tm_Tick(System::Object^  sender, System::EventArgs^  e) {
			 Graphics ^im=this->CreateGraphics();

			 switch (k)			//Индикатор полёта/перемещения
			 {
			 case 1:			//ПОЛЁТ
				 {			
					 Pen ^pen2 =gcnew Pen (SystemColors::Control);
					 im->FillRectangle(pen2->Brush,0,0,3000,3000);			//закрашивание

					 Color ^col=gcnew Color();	
					 Pen ^pen = gcnew Pen (col->Red);
				 



					 /////////////////////////////Дублированные координаты(перемещение по дуге e^x)


				  x0D+=10;		y0D=exp(x0D/25);
				  x1D+=10;		y1D=exp(x1D/25);
				  x2D+=10;		y2D=exp(x2D/25);
				  x3D+=10;		y3D=exp(x3D/25);
				  x4D+=10;		y4D=exp(x4D/25);
				  x5D+=10;		y5D=exp(x5D/25);
				  x6D+=10;		y6D=exp(x6D/25);
				  x7D+=10;		y7D=exp(x7D/25);
				  x8D+=10;		y8D=exp(x8D/25);
				  x9D+=10;		y9D=exp(x9D/25);
				  x10D+=10;	y10D=exp(x10D/25);
				  x11D+=10;	y11D=exp(x11D/25);
				  x12D+=10;	y12D=exp(x12D/25);
				  x13D+=10;	y13D=exp(x13D/25);

				xc1D+=10;							//центры вращения
				yc1D=exp(xc1D/25);
				xc2D+=10;
				yc2D=exp(xc2D/25);

				st11xD+=10;							//координаты первого стержня
				st12xD+=10;
				st11yD=exp(st11xD/25);				
				st12yD=exp(st12xD/25);

				st21xD+=10;							//координаты второго стержня
				st22xD+=10;
				st21yD=exp(st21xD/25);				
				st22yD=exp(st22xD/25);

				sh1xD+=10;							//координаты шасси 1
				sh1yD=exp(sh1xD/25);
				dsh1xD=dsh1x;				
				dsh1yD=dsh1y;

				sh2xD+=10;							//координаты шасси 2
				sh2yD=exp(sh2xD/25);
				dsh2xD=dsh2x;				
				dsh2yD=dsh2y;

				kr111xD+=10;						//Х крестиков
				kr111x2D=0;
				kr112xD+=10;
				kr112x2D=0;
				kr121xD+=10;
				kr121x2D=0;
				kr122xD+=10;
				kr122x2D=0;

				kr211xD+=10;
				kr211x2D=0;
				kr212xD+=10;
				kr212x2D=0;
				kr221xD+=10;
				kr221x2D=0;
				kr222xD+=10;
				kr222x2D=0;

				kr111yD=exp(kr111xD/25);			//Y крестиков
				kr111y2D=0;
				kr112yD=exp(kr112xD/25);
				kr112y2D=0;
				kr121yD=exp(kr121xD/25);
				kr121y2D=0;
				kr122yD=exp(kr122xD/25);
				kr122y2D=0;

				kr211yD=exp(kr211xD/25);
				kr211y2D=0;
				kr212yD=exp(kr212xD/25);
				kr212y2D=0;
				kr221yD=exp(kr221xD/25);
				kr221y2D=0;
				kr222yD=exp(kr222xD/25);
				kr222y2D=0;

				wing11xD+=10;						//координаты крыла
				wing12xD+=10;
				wing11yD=exp(wing11xD/25);			
				wing12yD=exp(wing12xD/25);

				wing21xD+=10;			
				wing22xD+=10;
				wing21yD=exp(wing21xD/25);
				wing22yD=exp(wing22xD/25);

				xcdD=xcd;							//координаты дороги
				ycdD=ycd;
				xdD=xd;
				ydD=yd;




					 int mm=14;
				   
			      array <PointF > ^y=gcnew array<PointF > (mm);

				  x0=x0+x0D;		y0=round(y0-y0D+exp((x0D-10)/25));
				  x1=x1+x1D;		y1=round(y1-y1D+exp((x1D-10)/25));
				  x2=x2+x2D;		y2=round(y2-y2D+exp((x2D-10)/25));
				  x3=x3+x3D;		y3=round(y3-y3D+exp((x3D-10)/25));
				  x4=x4+x4D;		y4=round(y4-y4D+exp((x4D-10)/25));
				  x5=x5+x5D;		y5=round(y5-y5D+exp((x5D-10)/25));
				  x6=x6+x6D;		y6=round(y6-y6D+exp((x6D-10)/25));
				  x7=x7+x7D;		y7=round(y7-y7D+exp((x7D-10)/25));
				  x8=x8+x8D;		y8=round(y8-y8D+exp((x8D-10)/25));
				  x9=x9+x9D;		y9=round(y9-y9D+exp((x9D-10)/25));
				  x10=x10+x10D;	 y10=round(y10-y10D+exp((x10D-10)/25));
				  x11=x11+x11D;  y11=round(y11-y11D+exp((x11D-10)/25));
				  x12=x12+x12D;  y12=round(y12-y12D+exp((x12D-10)/25));
				  x13=x13+x13D;  y13=round(y13-y13D+exp((x13D-10)/25));

				  y[0].X=x0;y[0].Y=y0;
                  y[1].X=x1;y[1].Y=y1;
				  y[2].X=x2;y[2].Y=y2;
                  y[3].X=x3;y[3].Y=y3;
                  y[4].X=x4;y[4].Y=y4;
                  y[5].X=x5;y[5].Y=y5;
                  y[6].X=x6;y[6].Y=y6;
				  y[7].X=x7;y[7].Y=y7;
				  y[8].X=x8;y[8].Y=y8;
				  y[9].X=x9;y[9].Y=y9;
				  y[10].X=x10;y[10].Y=y10;
				  y[11].X=x11;y[11].Y=y11;
				  y[12].X=x12;y[12].Y=y12;
				  y[13].X=x13;y[13].Y=y13;

				 im->DrawPolygon(pen,y);

				 
				 
				 st11x=st11x+st11xD;														//координаты первого стержня
				 st12x=st12x+st12xD;
				 st11y=round(st11y-st11yD+exp((st11xD-10)/25));				
				 st12y=round(st12y-st12yD+exp((st12xD-10)/25));

				 st21x=st21x+st21xD;														//координаты второго стержня
				 st22x=st22x+st22xD;
				 st21y=round(st21y-st21yD+exp((st21xD-10)/25));				
				 st22y=round(st22y-st22yD+exp((st22xD-10)/25));

				 sh1x=sh1x+sh1xD;															//шасси 1
				 sh1y=round(sh1y-sh1yD+exp((sh1xD-10)/25));
				 dsh1x=dsh1xD;
				 dsh1y=dsh2yD;

				 sh2x=sh2x+sh2xD;															//шасси 2
				 sh2y=round(sh2y-sh2yD+exp((sh2xD-10)/25));
				 dsh2x=dsh2xD;
				 dsh2y=dsh2yD;

				 kr111x2=round(xc1+((kr111x-xc1)*cos(pi/6)+(kr111y-yc1)*sin(pi/6)));		//крестики
				 kr111y2=round(yc1+((kr111y-yc1)*cos(pi/6)-(kr111x-xc1)*sin(pi/6)));
				 kr111x=kr111x2;
				 kr111x=kr111x+kr111xD;
				 kr111y=kr111y2;
				 kr111y=round(kr111y-kr111yD+exp((kr111xD-10)/25));

				 kr112x2=round(xc1+((kr112x-xc1)*cos(pi/6)+(kr112y-yc1)*sin(pi/6)));
				 kr112y2=round(yc1+((kr112y-yc1)*cos(pi/6)-(kr112x-xc1)*sin(pi/6)));
				 kr112x=kr112x2;
				 kr112x=kr112x+kr112xD;
				 kr112y=kr112y2;
				 kr112y=round(kr112y-kr112yD+exp((kr112xD-10)/25));

				 kr121x2=round(xc1+((kr121x-xc1)*cos(pi/6)+(kr121y-yc1)*sin(pi/6)));
				 kr121y2=round(yc1+((kr121y-yc1)*cos(pi/6)-(kr121x-xc1)*sin(pi/6)));
				 kr121x=kr121x2;
				 kr121x=kr121x+kr121xD;
				 kr121y=kr121y2;
				 kr121y=round(kr121y-kr121yD+exp((kr121xD-10)/25));

				 kr122x2=round(xc1+((kr122x-xc1)*cos(pi/6)+(kr122y-yc1)*sin(pi/6)));
				 kr122y2=round(yc1+((kr122y-yc1)*cos(pi/6)-(kr122x-xc1)*sin(pi/6)));
				 kr122x=kr122x2;
				 kr122x=kr122x+kr122xD;
				 kr122y=kr122y2;
				 kr122y=round(kr122y-kr122yD+exp((kr122xD-10)/25));

				 kr211x2=round(xc2+((kr211x-xc2)*cos(pi/6)+(kr211y-yc2)*sin(pi/6)));
				 kr211y2=round(yc2+((kr211y-yc2)*cos(pi/6)-(kr211x-xc2)*sin(pi/6)));
				 kr211x=kr211x2;
				 kr211x=kr211x+kr211xD;
				 kr211y=kr211y2;
				 kr211y=round(kr211y-kr211yD+exp((kr211xD-10)/25));

				 kr212x2=round(xc2+((kr212x-xc2)*cos(pi/6)+(kr212y-yc2)*sin(pi/6)));
				 kr212y2=round(yc2+((kr212y-yc2)*cos(pi/6)-(kr212x-xc2)*sin(pi/6)));
				 kr212x=kr212x2;
				 kr212x=kr212x+kr212xD;
				 kr212y=kr212y2;
				 kr212y=round(kr212y-kr212yD+exp((kr212xD-10)/25));

				 kr221x2=round(xc2+((kr221x-xc2)*cos(pi/6)+(kr221y-yc2)*sin(pi/6)));
				 kr221y2=round(yc2+((kr221y-yc2)*cos(pi/6)-(kr221x-xc2)*sin(pi/6)));
				 kr221x=kr221x2;
				 kr221x=kr221x+kr221xD;
				 kr221y=kr221y2;
				 kr221y=round(kr221y-kr221yD+exp((kr221xD-10)/25));

				 kr222x2=round(xc2+((kr222x-xc2)*cos(pi/6)+(kr222y-yc2)*sin(pi/6)));
				 kr222y2=round(yc2+((kr222y-yc2)*cos(pi/6)-(kr222x-xc2)*sin(pi/6)));
				 kr222x=kr222x2;
				 kr222x=kr222x+kr222xD;
				 kr222y=kr222y2;
				 kr222y=round(kr222y-kr222yD+exp((kr222xD-10)/25));

				 

				 wing11x=wing11x+wing11xD;			//координаты крыла
				 wing12x=wing12x+wing12xD;
				 wing11y=round(wing11y-wing11yD+exp((wing11xD-10)/25));			
				 wing12y=round(wing12y-wing12yD+exp((wing12xD-10)/25));

				 wing21x=wing21x+wing21xD;
				 wing22x=wing22x+wing22xD;
				 wing21y=round(wing21y-wing21yD+exp((wing21xD-10)/25));			
				 wing22y=round(wing22y-wing22yD+exp((wing22xD-10)/25));

				 xc1=xc1+xc1D;												//центры вращения
				 yc1=round(yc1-yc1D+exp((xc1D-10)/25));
				 xc2=xc2+xc2D;
				 yc2=round(yc2-yc2D+exp((xc2D-10)/25));

				 xcd=xcd;
				 ycd=ycd;
				 xd=xd;
				 yd=yd;


				  im->DrawLine(pen,st11x,st11y,st12x,st12y);				//стержень шасси 1
				  im->DrawLine(pen,st21x,st21y,st22x,st22y);				//стержень шасси 2

				  im->DrawEllipse(pen,sh1x,sh1y,dsh1x,dsh1y);						//шасся 1
				  im->DrawEllipse(pen,sh2x,sh2y,dsh2x,dsh2y);						//шасся 2

				  im->DrawLine(pen,kr111x,kr111y,kr112x,kr112y);			//крестик первой шасси
				  im->DrawLine(pen,kr121x,kr121y,kr122x,kr122y);

				  im->DrawLine(pen,kr211x,kr211y,kr212x,kr212y);			//крестик второй шасси
				  im->DrawLine(pen,kr221x,kr221y,kr222x,kr222y);

				  im->DrawLine(pen,wing11x,wing11y,wing12x,wing12y);		//крыло
				  im->DrawLine(pen,wing21x,wing21y,wing22x,wing22y);

				  im->FillRectangle(pen->Brush,xcd,ycd,xd,yd);



				  s+=1;

				  if(s>35)
					  tm->Enabled = false;
				 
				 }
				 break;
				 





			 case 2:								//ПЕРЕМЕЩЕНИЕ
				 
				 {			
					 Pen ^pen2 =gcnew Pen (SystemColors::Control);
					 im->FillRectangle(pen2->Brush,0,0,3000,3000);			//закрашивание

					 Color ^col=gcnew Color();	
					 Pen ^pen = gcnew Pen (col->Red);
	

                   int mm=14;
				   
			      array <PointF > ^y=gcnew array<PointF > (mm);

				  x0=x0+10;		y0=y0;
				  x1=x1+10;		y1=y1;
				  x2=x2+10;		y2=y2;
				  x3=x3+10;		y3=y3;
				  x4=x4+10;		y4=y4;
				  x5=x5+10;		y5=y5;
				  x6=x6+10;		y6=y6;
				  x7=x7+10;		y7=y7;
				  x8=x8+10;		y8=y8;
				  x9=x9+10;		y9=y9;
				  x10=x10+10;	y10=y10;
				  x11=x11+10;	y11=y11;
				  x12=x12+10;	y12=y12;
				  x13=x13+10;	y13=y13;

				  y[0].X=x0;y[0].Y=y0;
                  y[1].X=x1;y[1].Y=y1;
				  y[2].X=x2;y[2].Y=y2;
                  y[3].X=x3;y[3].Y=y3;
                  y[4].X=x4;y[4].Y=y4;
                  y[5].X=x5;y[5].Y=y5;
                  y[6].X=x6;y[6].Y=y6;
				  y[7].X=x7;y[7].Y=y7;
				  y[8].X=x8;y[8].Y=y8;
				  y[9].X=x9;y[9].Y=y9;
				  y[10].X=x10;y[10].Y=y10;
				  y[11].X=x11;y[11].Y=y11;
				  y[12].X=x12;y[12].Y=y12;
				  y[13].X=x13;y[13].Y=y13;

				 im->DrawPolygon(pen,y);

				 xc0=x0; 

				yc0=y0;
				 
				 st11x=st11x+10;				//координаты первого стержня
				 st12x=st12x+10;
				 st11y=st11y;				
				 st12y=st12y;

				 st21x=st21x+10;				//координаты второго стержня
				 st22x=st22x+10;
				 st21y=st21y;				
				 st22y=st22y;

				 sh1x=sh1x+10;					//шасси 1
				 sh1y=sh1y;
				 sh2x=sh2x+10;					//шасси 2
				 sh2y=sh2y;

				 kr111x2=round(xc1+((kr111x-xc1)*cos(pi/6)+(kr111y-yc1)*sin(pi/6)));		//крестики
				 kr111y2=round(yc1+((kr111y-yc1)*cos(pi/6)-(kr111x-xc1)*sin(pi/6)));
				 kr111x=kr111x2+10;
				 kr111y=kr111y2;

				 kr112x2=round(xc1+((kr112x-xc1)*cos(pi/6)+(kr112y-yc1)*sin(pi/6)));
				 kr112y2=round(yc1+((kr112y-yc1)*cos(pi/6)-(kr112x-xc1)*sin(pi/6)));
				 kr112x=kr112x2+10;
				 kr112y=kr112y2;

				 kr121x2=round(xc1+((kr121x-xc1)*cos(pi/6)+(kr121y-yc1)*sin(pi/6)));
				 kr121y2=round(yc1+((kr121y-yc1)*cos(pi/6)-(kr121x-xc1)*sin(pi/6)));
				 kr121x=kr121x2+10;
				 kr121y=kr121y2;

				 kr122x2=round(xc1+((kr122x-xc1)*cos(pi/6)+(kr122y-yc1)*sin(pi/6)));
				 kr122y2=round(yc1+((kr122y-yc1)*cos(pi/6)-(kr122x-xc1)*sin(pi/6)));
				 kr122x=kr122x2+10;
				 kr122y=kr122y2;

				 kr211x2=round(xc2+((kr211x-xc2)*cos(pi/6)+(kr211y-yc2)*sin(pi/6)));
				 kr211y2=round(yc2+((kr211y-yc2)*cos(pi/6)-(kr211x-xc2)*sin(pi/6)));
				 kr211x=kr211x2+10;
				 kr211y=kr211y2;

				 kr212x2=round(xc2+((kr212x-xc2)*cos(pi/6)+(kr212y-yc2)*sin(pi/6)));
				 kr212y2=round(yc2+((kr212y-yc2)*cos(pi/6)-(kr212x-xc2)*sin(pi/6)));
				 kr212x=kr212x2+10;
				 kr212y=kr212y2;

				 kr221x2=round(xc2+((kr221x-xc2)*cos(pi/6)+(kr221y-yc2)*sin(pi/6)));
				 kr221y2=round(yc2+((kr221y-yc2)*cos(pi/6)-(kr221x-xc2)*sin(pi/6)));
				 kr221x=kr221x2+10;
				 kr221y=kr221y2;

				 kr222x2=round(xc2+((kr222x-xc2)*cos(pi/6)+(kr222y-yc2)*sin(pi/6)));
				 kr222y2=round(yc2+((kr222y-yc2)*cos(pi/6)-(kr222x-xc2)*sin(pi/6)));
				 kr222x=kr222x2+10;
				 kr222y=kr222y2;

				 

				 wing11x=wing11x+10;			//координаты крыла
				 wing12x=wing12x+10;
				 wing11y=wing11y;			
				 wing12y=wing12y;

				 wing21x=wing21x+10;
				 wing22x=wing22x+10;
				 wing21y=wing21y;			
				 wing22y=wing22y;

				 xc1=xc1+10;					//центры вращения
				 yc1=yc1;
				 xc2=xc2+10;
				 yc2=yc2;

				 xcd=xcd;
				 ycd=ycd;
				 xd=xd;
				 yd=yd;


				  im->DrawLine(pen,st11x,st11y,st12x,st12y);				//стержень шасси 1
				  im->DrawLine(pen,st21x,st21y,st22x,st22y);				//стержень шасси 2

				  im->DrawEllipse(pen,sh1x,sh1y,dsh1x,dsh1y);						//шасся 1
				  im->DrawEllipse(pen,sh2x,sh2y,dsh2x,dsh2y);						//шасся 2

				  im->DrawLine(pen,kr111x,kr111y,kr112x,kr112y);			//крестик первой шасси
				  im->DrawLine(pen,kr121x,kr121y,kr122x,kr122y);

				  im->DrawLine(pen,kr211x,kr211y,kr212x,kr212y);			//крестик второй шасси
				  im->DrawLine(pen,kr221x,kr221y,kr222x,kr222y);

				  im->DrawLine(pen,wing11x,wing11y,wing12x,wing12y);		//крыло
				  im->DrawLine(pen,wing21x,wing21y,wing22x,wing22y);

				  im->FillRectangle(pen->Brush,xcd,ycd,xd,yd);

				 

				 }
					break;
				 
			}



			 switch (l)			//Индикатор масштабирования/поворота
			 {
				case 1:						//МАСШТАБИРОВАНИЕ
					{
						if(i<=10)
							{

				 Pen ^pen2 =gcnew Pen (SystemColors::Control);
				 im->FillRectangle(pen2->Brush,0,0,3000,3000);			//закрашивание

				 Color ^col=gcnew Color();	
				 Pen ^pen = gcnew Pen (col->Red);

                   int mm=14;
				   
			      array <PointF > ^y=gcnew array<PointF > (mm);
				  x0=round(kx*x0D+xcm*(1-kx));  y0=round(ky*y0D+ycm*(1-ky));
                  x1=round(kx*x1D+xcm*(1-kx));  y1=round(ky*y1D+ycm*(1-ky));
				  x2=round(kx*x2D+xcm*(1-kx));  y2=round(ky*y2D+ycm*(1-ky));
                  x3=round(kx*x3D+xcm*(1-kx));  y3=round(ky*y3D+ycm*(1-ky));
                  x4=round(kx*x4D+xcm*(1-kx));  y4=round(ky*y4D+ycm*(1-ky));
                  x5=round(kx*x5D+xcm*(1-kx));  y5=round(ky*y5D+ycm*(1-ky));
                  x6=round(kx*x6D+xcm*(1-kx));  y6=round(ky*y6D+ycm*(1-ky));
				  x7=round(kx*x7D+xcm*(1-kx));  y7=round(ky*y7D+ycm*(1-ky));
				  x8=round(kx*x8D+xcm*(1-kx));  y8=round(ky*y8D+ycm*(1-ky));
				  x9=round(kx*x9D+xcm*(1-kx));  y9=round(ky*y9D+ycm*(1-ky));
				 x10=round(kx*x10D+xcm*(1-kx));y10=round(ky*y10D+ycm*(1-ky));
				 x11=round(kx*x11D+xcm*(1-kx));y11=round(ky*y11D+ycm*(1-ky));
				 x12=round(kx*x12D+xcm*(1-kx));y12=round(ky*y12D+ycm*(1-ky));
				 x13=round(kx*x13D+xcm*(1-kx));y13=round(ky*y13D+ycm*(1-ky));

				  y[0].X=x0;y[0].Y=y0;
                  y[1].X=x1;y[1].Y=y1;
				  y[2].X=x2;y[2].Y=y2;
                  y[3].X=x3;y[3].Y=y3;
                  y[4].X=x4;y[4].Y=y4;
                  y[5].X=x5;y[5].Y=y5;
                  y[6].X=x6;y[6].Y=y6;
				  y[7].X=x7;y[7].Y=y7;
				  y[8].X=x8;y[8].Y=y8;
				  y[9].X=x9;y[9].Y=y9;
				  y[10].X=x10;y[10].Y=y10;
				  y[11].X=x11;y[11].Y=y11;
				  y[12].X=x12;y[12].Y=y12;
				  y[13].X=x13;y[13].Y=y13;

				 im->DrawPolygon(pen,y);

				 
				 
				 st11x=round(kx*st11xD+xcm*(1-kx));				//координаты первого стержня
				 st12x=round(kx*st12xD+xcm*(1-kx));
				 st11y=round(ky*st11yD+ycm*(1-ky));				
				 st12y=round(ky*st12yD+ycm*(1-ky));

				 st21x=round(kx*st21xD+xcm*(1-kx));				//координаты второго стержня
				 st22x=round(kx*st22xD+xcm*(1-kx));
				 st21y=round(ky*st21yD+ycm*(1-ky));				
				 st22y=round(ky*st22yD+ycm*(1-ky));


				 sh1x=round(kx*sh1xD+xcm*(1-kx));				//шасси 1
				 sh1y=round(ky*sh1yD+ycm*(1-ky));
				 dsh1x=dsh1xD*kx;				
				 dsh1y=dsh1yD*ky;

				 sh2x=round(kx*sh2xD+xcm*(1-kx));				//шасси 2
				 sh2y=round(ky*sh2yD+ycm*(1-ky));
				 dsh2x=dsh2xD*kx;				
				 dsh2y=dsh2yD*ky;

				 kr111x=round(kx*kr111xD+xcm*(1-kx));			//крестики
				 kr111y=round(ky*kr111yD+ycm*(1-ky));
				 
				 kr112x=round(kx*kr112xD+xcm*(1-kx));			
				 kr112y=round(ky*kr112yD+ycm*(1-ky));

				 kr121x=round(kx*kr121xD+xcm*(1-kx));			
				 kr121y=round(ky*kr121yD+ycm*(1-ky));

				 kr122x=round(kx*kr122xD+xcm*(1-kx));			
				 kr122y=round(ky*kr122yD+ycm*(1-ky));

				 kr211x=round(kx*kr211xD+xcm*(1-kx));			
				 kr211y=round(ky*kr211yD+ycm*(1-ky));

				 kr212x=round(kx*kr212xD+xcm*(1-kx));			
				 kr212y=round(ky*kr212yD+ycm*(1-ky));

				 kr221x=round(kx*kr221xD+xcm*(1-kx));			
				 kr221y=round(ky*kr221yD+ycm*(1-ky));

				 kr222x=round(kx*kr222xD+xcm*(1-kx));			
				 kr222y=round(ky*kr222yD+ycm*(1-ky));

				 

				 wing11x=round(kx*wing11xD+xcm*(1-kx));			//координаты крыла
				 wing12x=round(kx*wing12xD+xcm*(1-kx));
				 wing11y=round(ky*wing11yD+ycm*(1-ky));			
				 wing12y=round(ky*wing12yD+ycm*(1-ky));

				 wing21x=round(kx*wing21xD+xcm*(1-kx));
				 wing22x=round(kx*wing22xD+xcm*(1-kx));
				 wing21y=round(ky*wing21yD+ycm*(1-ky));			
				 wing22y=round(ky*wing22yD+ycm*(1-ky));

				 xc1=round(kx*xc1D+xcm*(1-kx));					//центры вращения
				 yc1=round(ky*yc1D+ycm*(1-ky));
				 xc2=round(kx*xc2D+xcm*(1-kx));
				 yc2=round(ky*yc2D+ycm*(1-ky));

				 xcd=0;
				 ycd=round(ky*ycdD+ycm*(1-ky));
				 xd=xdD*kx;
				 yd=ydD*ky;


				  im->DrawLine(pen,st11x,st11y,st12x,st12y);				//стержень шасси 1
				  im->DrawLine(pen,st21x,st21y,st22x,st22y);				//стержень шасси 2

				  im->DrawEllipse(pen,sh1x,sh1y,dsh1x,dsh1y);				//шасся 1
				  im->DrawEllipse(pen,sh2x,sh2y,dsh2x,dsh2y);				//шасся 2

				  im->DrawLine(pen,kr111x,kr111y,kr112x,kr112y);			//крестик первой шасси
				  im->DrawLine(pen,kr121x,kr121y,kr122x,kr122y);

				  im->DrawLine(pen,kr211x,kr211y,kr212x,kr212y);			//крестик второй шасси
				  im->DrawLine(pen,kr221x,kr221y,kr222x,kr222y);

				  im->DrawLine(pen,wing11x,wing11y,wing12x,wing12y);		//крыло
				  im->DrawLine(pen,wing21x,wing21y,wing22x,wing22y);

				 im->FillRectangle(pen->Brush,xcd,ycd,xd,yd);				//дорога

				 kx=kx+dmx;
				 ky=ky+dmy;
				 
					}
					
				}
				break;



				case 2:									//ВРАЩЕНИЕ
					{
						if ((a*1000>720)&&(j<=1000))
						{

				  Pen ^pen2 =gcnew Pen (SystemColors::Control);
				  im->FillRectangle(pen2->Brush,0,0,3000,3000);		//закрашивание

				  Color ^col=gcnew Color();	
				  Pen ^pen =gcnew Pen (col->Red);

				 x0D=round(xc+((x0-xc)*cos(grad*a)+(y0-yc)*sin(grad*a)));	//координаты корпуса самолёта
				 y0D=round(yc+((y0-yc)*cos(grad*a)-(x0-xc)*sin(grad*a)));
				 x0=x0D;
				 y0=y0D;

				 x1D=round(xc+((x1-xc)*cos(grad*a)+(y1-yc)*sin(grad*a)));
				 y1D=round(yc+((y1-yc)*cos(grad*a)-(x1-xc)*sin(grad*a)));
				 x1=x1D;
				 y1=y1D;

				 x2D=round(xc+((x2-xc)*cos(grad*a)+(y2-yc)*sin(grad*a)));
				 y2D=round(yc+((y2-yc)*cos(grad*a)-(x2-xc)*sin(grad*a)));
				 x2=x2D;
				 y2=y2D;

				 x3D=round(xc+((x3-xc)*cos(grad*a)+(y3-yc)*sin(grad*a)));
				 y3D=round(yc+((y3-yc)*cos(grad*a)-(x3-xc)*sin(grad*a)));
				 x3=x3D;
				 y3=y3D;

				 x4D=round(xc+((x4-xc)*cos(grad*a)+(y4-yc)*sin(grad*a)));
				 y4D=round(yc+((y4-yc)*cos(grad*a)-(x4-xc)*sin(grad*a)));
				 x4=x4D;
				 y4=y4D;

				 x5D=round(xc+((x5-xc)*cos(grad*a)+(y5-yc)*sin(grad*a)));
				 y5D=round(yc+((y5-yc)*cos(grad*a)-(x5-xc)*sin(grad*a)));
				 x5=x5D;
				 y5=y5D;

				 x6D=round(xc+((x6-xc)*cos(grad*a)+(y6-yc)*sin(grad*a)));
				 y6D=round(yc+((y6-yc)*cos(grad*a)-(x6-xc)*sin(grad*a)));
				 x6=x6D;
				 y6=y6D;

				 x7D=round(xc+((x7-xc)*cos(grad*a)+(y7-yc)*sin(grad*a)));
				 y7D=round(yc+((y7-yc)*cos(grad*a)-(x7-xc)*sin(grad*a)));
				 x7=x7D;
				 y7=y7D;

				 x8D=round(xc+((x8-xc)*cos(grad*a)+(y8-yc)*sin(grad*a)));
				 y8D=round(yc+((y8-yc)*cos(grad*a)-(x8-xc)*sin(grad*a)));
				 x8=x8D;
				 y8=y8D;

				 x9D=round(xc+((x9-xc)*cos(grad*a)+(y9-yc)*sin(grad*a)));
				 y9D=round(yc+((y9-yc)*cos(grad*a)-(x9-xc)*sin(grad*a)));
				 x9=x9D;
				 y9=y9D;

				 x10D=round(xc+((x10-xc)*cos(grad*a)+(y10-yc)*sin(grad*a)));
				 y10D=round(yc+((y10-yc)*cos(grad*a)-(x10-xc)*sin(grad*a)));
				 x10=x10D;
				 y10=y10D;

				 x11D=round(xc+((x11-xc)*cos(grad*a)+(y11-yc)*sin(grad*a)));
				 y11D=round(yc+((y11-yc)*cos(grad*a)-(x11-xc)*sin(grad*a)));
				 x11=x11D;
				 y11=y11D;

				 x12D=round(xc+((x12-xc)*cos(grad*a)+(y12-yc)*sin(grad*a)));
				 y12D=round(yc+((y12-yc)*cos(grad*a)-(x12-xc)*sin(grad*a)));
				 x12=x12D;
				 y12=y12D;

				 x13D=round(xc+((x13-xc)*cos(grad*a)+(y13-yc)*sin(grad*a)));
				 y13D=round(yc+((y13-yc)*cos(grad*a)-(x13-xc)*sin(grad*a)));
				 x13=x13D;
				 y13=y13D;

				 

				 
                  


				xc1D=round(xc+((xc1-xc)*cos(grad*a)+(yc1-yc)*sin(grad*a)));				//центры вращения
				yc1D=round(yc+((yc1-yc)*cos(grad*a)-(xc1-xc)*sin(grad*a)));
				xc1=xc1D;
				yc1=yc1D;

				xc2D=round(xc+((xc2-xc)*cos(grad*a)+(yc2-yc)*sin(grad*a)));
				yc2D=round(yc+((yc2-yc)*cos(grad*a)-(xc2-xc)*sin(grad*a)));
				xc2=xc2D;
				yc2=yc2D;

								
				st11xD=round(xc+((st11x-xc)*cos(grad*a)+(st11y-yc)*sin(grad*a)));		//координаты первого стержня
				st11yD=round(yc+((st11y-yc)*cos(grad*a)-(st11x-xc)*sin(grad*a)));
				st11x=st11xD;
				st11y=st11yD;
				
				st12xD=round(xc+((st12x-xc)*cos(grad*a)+(st12y-yc)*sin(grad*a)));
				st12yD=round(yc+((st12y-yc)*cos(grad*a)-(st12x-xc)*sin(grad*a)));
				st12x=st12xD;
				st12y=st12yD;

				st21xD=round(xc+((st21x-xc)*cos(grad*a)+(st21y-yc)*sin(grad*a)));		//координаты второго стержня
				st21yD=round(yc+((st21y-yc)*cos(grad*a)-(st21x-xc)*sin(grad*a)));
				st21x=st21xD;
				st21y=st21yD;
				
				st22xD=round(xc+((st22x-xc)*cos(grad*a)+(st22y-yc)*sin(grad*a)));
				st22yD=round(yc+((st22y-yc)*cos(grad*a)-(st22x-xc)*sin(grad*a)));
				st22x=st22xD;
				st22y=st22yD;


				dsh1x=dsh1x;				
				dsh1y=dsh1y;

				sh1xD=round(xc+((sh1x-xc)*cos(grad*a)+(sh1y-yc)*sin(grad*a)));				//шасси 1
				sh1yD=round(yc+((sh1y-yc)*cos(grad*a)-(sh1x-xc)*sin(grad*a)));
				sh1x=sh1xD;
				sh1y=sh1yD;
				sh1xD=round(xc1+((sh1x-xc1)*cos(-grad*a)+(sh1y-yc1)*sin(-grad*a)));
				sh1yD=round(yc1+((sh1y-yc1)*cos(-grad*a)-(sh1x-xc1)*sin(-grad*a)));
				sh1x=sh1xD;
				sh1y=sh1yD;

				dsh2x=dsh2x;				
				dsh2y=dsh2y;

				sh2xD=round(xc+((sh2x-xc)*cos(grad*a)+(sh2y-yc)*sin(grad*a)));				//шасси 2
				sh2yD=round(yc+((sh2y-yc)*cos(grad*a)-(sh2x-xc)*sin(grad*a)));
				sh2x=sh2xD;
				sh2y=sh2yD;
				sh2xD=round(xc2+((sh2x-xc2)*cos(-grad*a)+(sh2y-yc2)*sin(-grad*a)));
				sh2yD=round(yc2+((sh2y-yc2)*cos(-grad*a)-(sh2x-xc2)*sin(-grad*a)));
				sh2x=sh2xD;
				sh2y=sh2yD;


				 kr111xD=round(xc+((kr111x-xc)*cos(grad*a)+(kr111y-yc)*sin(grad*a)));		//крестики
				 kr111yD=round(yc+((kr111y-yc)*cos(grad*a)-(kr111x-xc)*sin(grad*a)));
				 kr111x=kr111xD;
				 kr111y=kr111yD;

				 kr112xD=round(xc+((kr112x-xc)*cos(grad*a)+(kr112y-yc)*sin(grad*a)));
				 kr112yD=round(yc+((kr112y-yc)*cos(grad*a)-(kr112x-xc)*sin(grad*a)));
				 kr112x=kr112xD;
				 kr112y=kr112yD;

				 kr121xD=round(xc+((kr121x-xc)*cos(grad*a)+(kr121y-yc)*sin(grad*a)));
				 kr121yD=round(yc+((kr121y-yc)*cos(grad*a)-(kr121x-xc)*sin(grad*a)));
				 kr121x=kr121xD;
				 kr121y=kr121yD;

				 kr122xD=round(xc+((kr122x-xc)*cos(grad*a)+(kr122y-yc)*sin(grad*a)));
				 kr122yD=round(yc+((kr122y-yc)*cos(grad*a)-(kr122x-xc)*sin(grad*a)));
				 kr122x=kr122xD;
				 kr122y=kr122yD;

				 kr211xD=round(xc+((kr211x-xc)*cos(grad*a)+(kr211y-yc)*sin(grad*a)));
				 kr211yD=round(yc+((kr211y-yc)*cos(grad*a)-(kr211x-xc)*sin(grad*a)));
				 kr211x=kr211xD;
				 kr211y=kr211yD;

				 kr212xD=round(xc+((kr212x-xc)*cos(grad*a)+(kr212y-yc)*sin(grad*a)));
				 kr212yD=round(yc+((kr212y-yc)*cos(grad*a)-(kr212x-xc)*sin(grad*a)));
				 kr212x=kr212xD;
				 kr212y=kr212yD;

				 kr221xD=round(xc+((kr221x-xc)*cos(grad*a)+(kr221y-yc)*sin(grad*a)));
				 kr221yD=round(yc+((kr221y-yc)*cos(grad*a)-(kr221x-xc)*sin(grad*a)));
				 kr221x=kr221xD;
				 kr221y=kr221yD;

				 kr222xD=round(xc+((kr222x-xc)*cos(grad*a)+(kr222y-yc)*sin(grad*a)));
				 kr222yD=round(yc+((kr222y-yc)*cos(grad*a)-(kr222x-xc)*sin(grad*a)));
				 kr222x=kr222xD;
				 kr222y=kr222yD;



				wing11xD=round(xc+((wing11x-xc)*cos(grad*a)+(wing11y-yc)*sin(grad*a)));		//координаты крыла
				wing11yD=round(yc+((wing11y-yc)*cos(grad*a)-(wing11x-xc)*sin(grad*a)));
				wing11x=wing11xD;
				wing11y=wing11yD;

				wing12xD=round(xc+((wing12x-xc)*cos(grad*a)+(wing12y-yc)*sin(grad*a)));
				wing12yD=round(yc+((wing12y-yc)*cos(grad*a)-(wing12x-xc)*sin(grad*a)));
				wing12x=wing12xD;
				wing12y=wing12yD;
				

				wing21xD=round(xc+((wing21x-xc)*cos(grad*a)+(wing21y-yc)*sin(grad*a)));
				wing21yD=round(yc+((wing21y-yc)*cos(grad*a)-(wing21x-xc)*sin(grad*a)));
				wing21x=wing21xD;
				wing21y=wing21yD;

				wing22xD=round(xc+((wing22x-xc)*cos(grad*a)+(wing22y-yc)*sin(grad*a)));
				wing22yD=round(yc+((wing22y-yc)*cos(grad*a)-(wing22x-xc)*sin(grad*a)));
				wing22x=wing22xD;
				wing22y=wing22yD;



				xcd=xcd;					//координаты дороги
				ycd=ycd;
				xd=xd;
				yd=yd;

				  int mm=14;
				   
			      array <PointF > ^y=gcnew array<PointF > (mm);
                  y[0].X=x0;y[0].Y=y0;
                  y[1].X=x1;y[1].Y=y1;
				  y[2].X=x2;y[2].Y=y2;
                  y[3].X=x3;y[3].Y=y3;
                  y[4].X=x4;y[4].Y=y4;
                  y[5].X=x5;y[5].Y=y5;
                  y[6].X=x6;y[6].Y=y6;
				  y[7].X=x7;y[7].Y=y7;
				  y[8].X=x8;y[8].Y=y8;
				  y[9].X=x9;y[9].Y=y9;
				  y[10].X=x10;y[10].Y=y10;
				  y[11].X=x11;y[11].Y=y11;
				  y[12].X=x12;y[12].Y=y12;
				  y[13].X=x13;y[13].Y=y13;
				  
                  im->DrawPolygon(pen,y);									//рисование корпуса самолёта

				  

				  im->DrawLine(pen,st11x,st11y,st12x,st12y);				//стержень шасси 1
				  im->DrawLine(pen,st21x,st21y,st22x,st22y);				//стержень шасси 2

				  im->DrawEllipse(pen,sh1x,sh1y,dsh1x,dsh1y);				//шасся 1
				  im->DrawEllipse(pen,sh2x,sh2y,dsh2x,dsh2y);				//шасся 2

				  im->DrawLine(pen,kr111x,kr111y,kr112x,kr112y);			//крестик первой шасси
				  im->DrawLine(pen,kr121x,kr121y,kr122x,kr122y);

				  im->DrawLine(pen,kr211x,kr211y,kr212x,kr212y);			//крестик второй шасси
				  im->DrawLine(pen,kr221x,kr221y,kr222x,kr222y);

				  im->DrawLine(pen,wing11x,wing11y,wing12x,wing12y);		//крыло
				  im->DrawLine(pen,wing21x,wing21y,wing22x,wing22y);

				 im->FillRectangle(pen->Brush,xcd,ycd,xd,yd);				//дорога



				 /////////////////////////////Дублированные координаты

				x0D=0;y0D=0;		//координаты корпуса самолёта
                x1D=0;y1D=0;
				x2D=0;y2D=0;
                x3D=0;y3D=0;
                x4D=0;y4D=0;
                x5D=0;y5D=0;
                x6D=0;y6D=0;
				x7D=0;y7D=0;
				x8D=0;y8D=0;
				x9D=0;y9D=0;
				x10D=0;y10D=0;
				x11D=0;y11D=0;
				x12D=0;y12D=0;
				x13D=0;y13D=0;

				xc1D=0;				//центры вращения
				yc1D=0;
				xc2D=0;
				yc2D=0;

				st11xD=0;				//координаты первого стержня
				st12xD=0;
				st11yD=0;				
				st12yD=0;

				st21xD=0;				//координаты второго стержня
				st22xD=0;
				st21yD=0;				
				st22yD=0;

				sh1xD=0;				//координаты шасси 1
				sh1yD=0;
				dsh1xD=0;				
				dsh1yD=0;

				sh2xD=0;				//координаты шасси 2
				sh2yD=0;
				dsh2xD=0;				
				dsh2yD=0;

				kr111xD=0;			//Х крестиков
				kr111x2D=0;
				kr112xD=0;
				kr112x2D=0;
				kr121xD=0;
				kr121x2D=0;
				kr122xD=0;
				kr122x2D=0;

				kr211xD=0;
				kr211x2D=0;
				kr212xD=0;
				kr212x2D=0;
				kr221xD=0;
				kr221x2D=0;
				kr222xD=0;
				kr222x2D=0;

				kr111yD=0;			//Y крестиков
				kr111y2D=0;
				kr112yD=0;
				kr112y2D=0;
				kr121yD=0;
				kr121y2D=0;
				kr122yD=0;
				kr122y2D=0;

				kr211yD=0;
				kr211y2D=0;
				kr212yD=0;
				kr212y2D=0;
				kr221yD=0;
				kr221y2D=0;
				kr222yD=0;
				kr222y2D=0;

				wing11xD=0;			//координаты крыла
				wing12xD=0;
				wing11yD=0;			
				wing12yD=0;

				wing21xD=0;			
				wing22xD=0;
				wing21yD=0;
				wing22yD=0;

				xcdD=0;				//координаты дороги
				ycdD=0;
				xdD=0;
				ydD=0;


				

				}

					}
					break;

					
			 }





			 switch (S)//////////////////////////////////СУПЕРКОМБОУЛЬТРАКНОПКА!!!!!!!
				 case 1:
			 {
				 if(I<31)										//ПЕРЕМЕЩЕНИЕ
					{ 
						button6->PerformClick();

						
					}




				 if(I==31)
					{ k=0;
						tm->Interval=100;
				 
				 /////////////////////////////Дублированные координаты

				

				x0D=0;y0D=0;		//координаты корпуса самолёта
                x1D=0;y1D=0;
				x2D=0;y2D=0;
                x3D=0;y3D=0;
                x4D=0;y4D=0;
                x5D=0;y5D=0;
                x6D=0;y6D=0;
				x7D=0;y7D=0;
				x8D=0;y8D=0;
				x9D=0;y9D=0;
				x10D=0;y10D=0;
				x11D=0;y11D=0;
				x12D=0;y12D=0;
				x13D=0;y13D=0;

				xc1D=0;				//центры вращения
				yc1D=0;
				xc2D=0;
				yc2D=0;

				st11xD=0;				//координаты первого стержня
				st12xD=0;
				st11yD=0;				
				st12yD=0;

				st21xD=0;				//координаты второго стержня
				st22xD=0;
				st21yD=0;				
				st22yD=0;

				sh1xD=0;				//координаты шасси 1
				sh1yD=0;
				dsh1xD=0;				
				dsh1yD=0;

				sh2xD=0;				//координаты шасси 2
				sh2yD=0;
				dsh2xD=0;				
				dsh2yD=0;

				kr111xD=0;			//Х крестиков
				kr111x2D=0;
				kr112xD=0;
				kr112x2D=0;
				kr121xD=0;
				kr121x2D=0;
				kr122xD=0;
				kr122x2D=0;

				kr211xD=0;
				kr211x2D=0;
				kr212xD=0;
				kr212x2D=0;
				kr221xD=0;
				kr221x2D=0;
				kr222xD=0;
				kr222x2D=0;

				kr111yD=0;			//Y крестиков
				kr111y2D=0;
				kr112yD=0;
				kr112y2D=0;
				kr121yD=0;
				kr121y2D=0;
				kr122yD=0;
				kr122y2D=0;

				kr211yD=0;
				kr211y2D=0;
				kr212yD=0;
				kr212y2D=0;
				kr221yD=0;
				kr221y2D=0;
				kr222yD=0;
				kr222y2D=0;

				wing11xD=0;			//координаты крыла
				wing12xD=0;
				wing11yD=0;			
				wing12yD=0;

				wing21xD=0;			
				wing22xD=0;
				wing21yD=0;
				wing22yD=0;

				xcdD=0;				//координаты дороги
				ycdD=0;
				xdD=0;
				ydD=0;

					}


				 if((I>=31)&&(I<34))										//ПЕРВЫЙ ПОДЪЁМ
				 {
					 Pen ^pen2 =gcnew Pen (SystemColors::Control);
					 im->FillRectangle(pen2->Brush,0,0,3000,3000);			//закрашивание

					 Color ^col=gcnew Color();	
					 Pen ^pen = gcnew Pen (col->Red);
				 



					 /////////////////////////////Дублированные координаты(перемещение по дуге e^x)


				  x0D+=10;		y0D=exp(x0D/10);
				  x1D+=10;		y1D=exp(x1D/10);
				  x2D+=10;		y2D=exp(x2D/10);
				  x3D+=10;		y3D=exp(x3D/10);
				  x4D+=10;		y4D=exp(x4D/10);
				  x5D+=10;		y5D=exp(x5D/10);
				  x6D+=10;		y6D=exp(x6D/10);
				  x7D+=10;		y7D=exp(x7D/10);
				  x8D+=10;		y8D=exp(x8D/10);
				  x9D+=10;		y9D=exp(x9D/10);
				  x10D+=10;	y10D=exp(x10D/10);
				  x11D+=10;	y11D=exp(x11D/10);
				  x12D+=10;	y12D=exp(x12D/10);
				  x13D+=10;	y13D=exp(x13D/10);

				xc1D+=10;				//центры вращения
				yc1D=exp(xc1D/10);
				xc2D+=10;
				yc2D=exp(xc2D/10);

				st11xD+=10;				//координаты первого стержня
				st12xD+=10;
				st11yD=exp(st11xD/10);				
				st12yD=exp(st12xD/10);

				st21xD+=10;				//координаты второго стержня
				st22xD+=10;
				st21yD=exp(st21xD/10);				
				st22yD=exp(st22xD/10);

				sh1xD+=10;				//координаты шасси 1
				sh1yD=exp(sh1xD/10);
				dsh1xD=dsh1x;				
				dsh1yD=dsh1y;

				sh2xD+=10;				//координаты шасси 2
				sh2yD=exp(sh2xD/10);
				dsh2xD=dsh2x;				
				dsh2yD=dsh2y;

				kr111xD+=10;			//Х крестиков
				kr111x2D=0;
				kr112xD+=10;
				kr112x2D=0;
				kr121xD+=10;
				kr121x2D=0;
				kr122xD+=10;
				kr122x2D=0;

				kr211xD+=10;
				kr211x2D=0;
				kr212xD+=10;
				kr212x2D=0;
				kr221xD+=10;
				kr221x2D=0;
				kr222xD+=10;
				kr222x2D=0;

				kr111yD=exp(kr111xD/10);			//Y крестиков
				kr111y2D=0;
				kr112yD=exp(kr112xD/10);
				kr112y2D=0;
				kr121yD=exp(kr121xD/10);
				kr121y2D=0;
				kr122yD=exp(kr122xD/10);
				kr122y2D=0;

				kr211yD=exp(kr211xD/10);
				kr211y2D=0;
				kr212yD=exp(kr212xD/10);
				kr212y2D=0;
				kr221yD=exp(kr221xD/10);
				kr221y2D=0;
				kr222yD=exp(kr222xD/10);
				kr222y2D=0;

				wing11xD+=10;			//координаты крыла
				wing12xD+=10;
				wing11yD=exp(wing11xD/10);			
				wing12yD=exp(wing12xD/10);

				wing21xD+=10;			
				wing22xD+=10;
				wing21yD=exp(wing21xD/10);
				wing22yD=exp(wing22xD/10);

				xcdD=xcd;				//координаты дороги
				ycdD=ycd;
				xdD=xd;
				ydD=yd;




					 int mm=14;
				   
			      array <PointF > ^y=gcnew array<PointF > (mm);

				  x0=x0+x0D;		y0=round(y0-y0D+exp((x0D-10)/10));
				  x1=x1+x1D;		y1=round(y1-y1D+exp((x1D-10)/10));
				  x2=x2+x2D;		y2=round(y2-y2D+exp((x2D-10)/10));
				  x3=x3+x3D;		y3=round(y3-y3D+exp((x3D-10)/10));
				  x4=x4+x4D;		y4=round(y4-y4D+exp((x4D-10)/10));
				  x5=x5+x5D;		y5=round(y5-y5D+exp((x5D-10)/10));
				  x6=x6+x6D;		y6=round(y6-y6D+exp((x6D-10)/10));
				  x7=x7+x7D;		y7=round(y7-y7D+exp((x7D-10)/10));
				  x8=x8+x8D;		y8=round(y8-y8D+exp((x8D-10)/10));
				  x9=x9+x9D;		y9=round(y9-y9D+exp((x9D-10)/10));
				  x10=x10+x10D;	 y10=round(y10-y10D+exp((x10D-10)/10));
				  x11=x11+x11D;  y11=round(y11-y11D+exp((x11D-10)/10));
				  x12=x12+x12D;  y12=round(y12-y12D+exp((x12D-10)/10));
				  x13=x13+x13D;  y13=round(y13-y13D+exp((x13D-10)/10));

				  y[0].X=x0;y[0].Y=y0;
                  y[1].X=x1;y[1].Y=y1;
				  y[2].X=x2;y[2].Y=y2;
                  y[3].X=x3;y[3].Y=y3;
                  y[4].X=x4;y[4].Y=y4;
                  y[5].X=x5;y[5].Y=y5;
                  y[6].X=x6;y[6].Y=y6;
				  y[7].X=x7;y[7].Y=y7;
				  y[8].X=x8;y[8].Y=y8;
				  y[9].X=x9;y[9].Y=y9;
				  y[10].X=x10;y[10].Y=y10;
				  y[11].X=x11;y[11].Y=y11;
				  y[12].X=x12;y[12].Y=y12;
				  y[13].X=x13;y[13].Y=y13;

				 im->DrawPolygon(pen,y);

				 xc0=x0;			////////
				 yc0=y0;


				 
				 
				 st11x=st11x+st11xD;				//координаты первого стержня
				 st12x=st12x+st12xD;
				 st11y=round(st11y-st11yD+exp((st11xD-10)/10));				
				 st12y=round(st12y-st12yD+exp((st12xD-10)/10));

				 st21x=st21x+st21xD;				//координаты второго стержня
				 st22x=st22x+st22xD;
				 st21y=round(st21y-st21yD+exp((st21xD-10)/10));				
				 st22y=round(st22y-st22yD+exp((st22xD-10)/10));

				 sh1x=sh1x+sh1xD;					//шасси 1
				 sh1y=round(sh1y-sh1yD+exp((sh1xD-10)/10));
				 dsh1x=dsh1xD;
				 dsh1y=dsh2yD;

				 sh2x=sh2x+sh2xD;					//шасси 2
				 sh2y=round(sh2y-sh2yD+exp((sh2xD-10)/10));
				 dsh2x=dsh2xD;
				 dsh2y=dsh2yD;

				 kr111x2=round(xc1+((kr111x-xc1)*cos(pi/6)+(kr111y-yc1)*sin(pi/6)));		//крестики
				 kr111y2=round(yc1+((kr111y-yc1)*cos(pi/6)-(kr111x-xc1)*sin(pi/6)));
				 kr111x=kr111x2;
				 kr111x=kr111x+kr111xD;
				 kr111y=kr111y2;
				 kr111y=round(kr111y-kr111yD+exp((kr111xD-10)/10));

				 kr112x2=round(xc1+((kr112x-xc1)*cos(pi/6)+(kr112y-yc1)*sin(pi/6)));
				 kr112y2=round(yc1+((kr112y-yc1)*cos(pi/6)-(kr112x-xc1)*sin(pi/6)));
				 kr112x=kr112x2;
				 kr112x=kr112x+kr112xD;
				 kr112y=kr112y2;
				 kr112y=round(kr112y-kr112yD+exp((kr112xD-10)/10));

				 kr121x2=round(xc1+((kr121x-xc1)*cos(pi/6)+(kr121y-yc1)*sin(pi/6)));
				 kr121y2=round(yc1+((kr121y-yc1)*cos(pi/6)-(kr121x-xc1)*sin(pi/6)));
				 kr121x=kr121x2;
				 kr121x=kr121x+kr121xD;
				 kr121y=kr121y2;
				 kr121y=round(kr121y-kr121yD+exp((kr121xD-10)/10));

				 kr122x2=round(xc1+((kr122x-xc1)*cos(pi/6)+(kr122y-yc1)*sin(pi/6)));
				 kr122y2=round(yc1+((kr122y-yc1)*cos(pi/6)-(kr122x-xc1)*sin(pi/6)));
				 kr122x=kr122x2;
				 kr122x=kr122x+kr122xD;
				 kr122y=kr122y2;
				 kr122y=round(kr122y-kr122yD+exp((kr122xD-10)/10));

				 kr211x2=round(xc2+((kr211x-xc2)*cos(pi/6)+(kr211y-yc2)*sin(pi/6)));
				 kr211y2=round(yc2+((kr211y-yc2)*cos(pi/6)-(kr211x-xc2)*sin(pi/6)));
				 kr211x=kr211x2;
				 kr211x=kr211x+kr211xD;
				 kr211y=kr211y2;
				 kr211y=round(kr211y-kr211yD+exp((kr211xD-10)/10));

				 kr212x2=round(xc2+((kr212x-xc2)*cos(pi/6)+(kr212y-yc2)*sin(pi/6)));
				 kr212y2=round(yc2+((kr212y-yc2)*cos(pi/6)-(kr212x-xc2)*sin(pi/6)));
				 kr212x=kr212x2;
				 kr212x=kr212x+kr212xD;
				 kr212y=kr212y2;
				 kr212y=round(kr212y-kr212yD+exp((kr212xD-10)/10));

				 kr221x2=round(xc2+((kr221x-xc2)*cos(pi/6)+(kr221y-yc2)*sin(pi/6)));
				 kr221y2=round(yc2+((kr221y-yc2)*cos(pi/6)-(kr221x-xc2)*sin(pi/6)));
				 kr221x=kr221x2;
				 kr221x=kr221x+kr221xD;
				 kr221y=kr221y2;
				 kr221y=round(kr221y-kr221yD+exp((kr221xD-10)/10));

				 kr222x2=round(xc2+((kr222x-xc2)*cos(pi/6)+(kr222y-yc2)*sin(pi/6)));
				 kr222y2=round(yc2+((kr222y-yc2)*cos(pi/6)-(kr222x-xc2)*sin(pi/6)));
				 kr222x=kr222x2;
				 kr222x=kr222x+kr222xD;
				 kr222y=kr222y2;
				 kr222y=round(kr222y-kr222yD+exp((kr222xD-10)/10));

				 

				 wing11x=wing11x+wing11xD;			//координаты крыла
				 wing12x=wing12x+wing12xD;
				 wing11y=round(wing11y-wing11yD+exp((wing11xD-10)/10));			
				 wing12y=round(wing12y-wing12yD+exp((wing12xD-10)/10));

				 wing21x=wing21x+wing21xD;
				 wing22x=wing22x+wing22xD;
				 wing21y=round(wing21y-wing21yD+exp((wing21xD-10)/10));			
				 wing22y=round(wing22y-wing22yD+exp((wing22xD-10)/10));

				 xc1=xc1+xc1D;					//центры вращения
				 yc1=round(yc1-yc1D+exp((xc1D-10)/10));
				 xc2=xc2+xc2D;
				 yc2=round(yc2-yc2D+exp((xc2D-10)/10));

				 xcd=xcd;
				 ycd=ycd;
				 xd=xd;
				 yd=yd;


				  im->DrawLine(pen,st11x,st11y,st12x,st12y);				//стержень шасси 1
				  im->DrawLine(pen,st21x,st21y,st22x,st22y);				//стержень шасси 2

				  im->DrawEllipse(pen,sh1x,sh1y,dsh1x,dsh1y);						//шасся 1
				  im->DrawEllipse(pen,sh2x,sh2y,dsh2x,dsh2y);						//шасся 2

				  im->DrawLine(pen,kr111x,kr111y,kr112x,kr112y);			//крестик первой шасси
				  im->DrawLine(pen,kr121x,kr121y,kr122x,kr122y);

				  im->DrawLine(pen,kr211x,kr211y,kr212x,kr212y);			//крестик второй шасси
				  im->DrawLine(pen,kr221x,kr221y,kr222x,kr222y);

				  im->DrawLine(pen,wing11x,wing11y,wing12x,wing12y);		//крыло
				  im->DrawLine(pen,wing21x,wing21y,wing22x,wing22y);

				  im->FillRectangle(pen->Brush,xcd,ycd,xd,yd);

				 }






				 if((I>=35)&&(I<=44))										//ПЕТЛЯ
				 {
					 
					 Pen ^pen2 =gcnew Pen (SystemColors::Control);
				  im->FillRectangle(pen2->Brush,0,0,3000,3000);				//закрашивание

				  Color ^col=gcnew Color();	
				  Pen ^pen =gcnew Pen (col->Red);

				 x0D=round(xc+((x0-xc)*cos(grad*a)+(y0-yc)*sin(grad*a)));	//координаты корпуса самолёта
				 y0D=round(yc+((y0-yc)*cos(grad*a)-(x0-xc)*sin(grad*a)));
				 x0=x0D;
				 y0=y0D;

				 xc0=x0;				////////
				 yc0=y0;

				 x1D=round(xc+((x1-xc)*cos(grad*a)+(y1-yc)*sin(grad*a)));
				 y1D=round(yc+((y1-yc)*cos(grad*a)-(x1-xc)*sin(grad*a)));
				 x1=x1D;
				 y1=y1D;

				 x2D=round(xc+((x2-xc)*cos(grad*a)+(y2-yc)*sin(grad*a)));
				 y2D=round(yc+((y2-yc)*cos(grad*a)-(x2-xc)*sin(grad*a)));
				 x2=x2D;
				 y2=y2D;

				 x3D=round(xc+((x3-xc)*cos(grad*a)+(y3-yc)*sin(grad*a)));
				 y3D=round(yc+((y3-yc)*cos(grad*a)-(x3-xc)*sin(grad*a)));
				 x3=x3D;
				 y3=y3D;

				 x4D=round(xc+((x4-xc)*cos(grad*a)+(y4-yc)*sin(grad*a)));
				 y4D=round(yc+((y4-yc)*cos(grad*a)-(x4-xc)*sin(grad*a)));
				 x4=x4D;
				 y4=y4D;

				 x5D=round(xc+((x5-xc)*cos(grad*a)+(y5-yc)*sin(grad*a)));
				 y5D=round(yc+((y5-yc)*cos(grad*a)-(x5-xc)*sin(grad*a)));
				 x5=x5D;
				 y5=y5D;

				 x6D=round(xc+((x6-xc)*cos(grad*a)+(y6-yc)*sin(grad*a)));
				 y6D=round(yc+((y6-yc)*cos(grad*a)-(x6-xc)*sin(grad*a)));
				 x6=x6D;
				 y6=y6D;

				 x7D=round(xc+((x7-xc)*cos(grad*a)+(y7-yc)*sin(grad*a)));
				 y7D=round(yc+((y7-yc)*cos(grad*a)-(x7-xc)*sin(grad*a)));
				 x7=x7D;
				 y7=y7D;

				 x8D=round(xc+((x8-xc)*cos(grad*a)+(y8-yc)*sin(grad*a)));
				 y8D=round(yc+((y8-yc)*cos(grad*a)-(x8-xc)*sin(grad*a)));
				 x8=x8D;
				 y8=y8D;

				 x9D=round(xc+((x9-xc)*cos(grad*a)+(y9-yc)*sin(grad*a)));
				 y9D=round(yc+((y9-yc)*cos(grad*a)-(x9-xc)*sin(grad*a)));
				 x9=x9D;
				 y9=y9D;

				 x10D=round(xc+((x10-xc)*cos(grad*a)+(y10-yc)*sin(grad*a)));
				 y10D=round(yc+((y10-yc)*cos(grad*a)-(x10-xc)*sin(grad*a)));
				 x10=x10D;
				 y10=y10D;

				 x11D=round(xc+((x11-xc)*cos(grad*a)+(y11-yc)*sin(grad*a)));
				 y11D=round(yc+((y11-yc)*cos(grad*a)-(x11-xc)*sin(grad*a)));
				 x11=x11D;
				 y11=y11D;

				 x12D=round(xc+((x12-xc)*cos(grad*a)+(y12-yc)*sin(grad*a)));
				 y12D=round(yc+((y12-yc)*cos(grad*a)-(x12-xc)*sin(grad*a)));
				 x12=x12D;
				 y12=y12D;

				 x13D=round(xc+((x13-xc)*cos(grad*a)+(y13-yc)*sin(grad*a)));
				 y13D=round(yc+((y13-yc)*cos(grad*a)-(x13-xc)*sin(grad*a)));
				 x13=x13D;
				 y13=y13D;

				 

				 
                  


				xc1D=round(xc+((xc1-xc)*cos(grad*a)+(yc1-yc)*sin(grad*a)));				//центры вращения
				yc1D=round(yc+((yc1-yc)*cos(grad*a)-(xc1-xc)*sin(grad*a)));
				xc1=xc1D;
				yc1=yc1D;

				xc2D=round(xc+((xc2-xc)*cos(grad*a)+(yc2-yc)*sin(grad*a)));
				yc2D=round(yc+((yc2-yc)*cos(grad*a)-(xc2-xc)*sin(grad*a)));
				xc2=xc2D;
				yc2=yc2D;

								
				st11xD=round(xc+((st11x-xc)*cos(grad*a)+(st11y-yc)*sin(grad*a)));		//координаты первого стержня
				st11yD=round(yc+((st11y-yc)*cos(grad*a)-(st11x-xc)*sin(grad*a)));
				st11x=st11xD;
				st11y=st11yD;
				
				st12xD=round(xc+((st12x-xc)*cos(grad*a)+(st12y-yc)*sin(grad*a)));
				st12yD=round(yc+((st12y-yc)*cos(grad*a)-(st12x-xc)*sin(grad*a)));
				st12x=st12xD;
				st12y=st12yD;

				st21xD=round(xc+((st21x-xc)*cos(grad*a)+(st21y-yc)*sin(grad*a)));		//координаты второго стержня
				st21yD=round(yc+((st21y-yc)*cos(grad*a)-(st21x-xc)*sin(grad*a)));
				st21x=st21xD;
				st21y=st21yD;
				
				st22xD=round(xc+((st22x-xc)*cos(grad*a)+(st22y-yc)*sin(grad*a)));
				st22yD=round(yc+((st22y-yc)*cos(grad*a)-(st22x-xc)*sin(grad*a)));
				st22x=st22xD;
				st22y=st22yD;


				dsh1x=dsh1x;				
				dsh1y=dsh1y;

				sh1xD=round(xc+((sh1x-xc)*cos(grad*a)+(sh1y-yc)*sin(grad*a)));				//шасси 1
				sh1yD=round(yc+((sh1y-yc)*cos(grad*a)-(sh1x-xc)*sin(grad*a)));
				sh1x=sh1xD;
				sh1y=sh1yD;
				sh1xD=round(xc1+((sh1x-xc1)*cos(-grad*a)+(sh1y-yc1)*sin(-grad*a)));
				sh1yD=round(yc1+((sh1y-yc1)*cos(-grad*a)-(sh1x-xc1)*sin(-grad*a)));
				sh1x=sh1xD;
				sh1y=sh1yD;

				dsh2x=dsh2x;				
				dsh2y=dsh2y;

				sh2xD=round(xc+((sh2x-xc)*cos(grad*a)+(sh2y-yc)*sin(grad*a)));				//шасси 2
				sh2yD=round(yc+((sh2y-yc)*cos(grad*a)-(sh2x-xc)*sin(grad*a)));
				sh2x=sh2xD;
				sh2y=sh2yD;
				sh2xD=round(xc2+((sh2x-xc2)*cos(-grad*a)+(sh2y-yc2)*sin(-grad*a)));
				sh2yD=round(yc2+((sh2y-yc2)*cos(-grad*a)-(sh2x-xc2)*sin(-grad*a)));
				sh2x=sh2xD;
				sh2y=sh2yD;


				 kr111xD=round(xc+((kr111x-xc)*cos(grad*a)+(kr111y-yc)*sin(grad*a)));		//крестики
				 kr111yD=round(yc+((kr111y-yc)*cos(grad*a)-(kr111x-xc)*sin(grad*a)));
				 kr111x=kr111xD;
				 kr111y=kr111yD;

				 kr112xD=round(xc+((kr112x-xc)*cos(grad*a)+(kr112y-yc)*sin(grad*a)));
				 kr112yD=round(yc+((kr112y-yc)*cos(grad*a)-(kr112x-xc)*sin(grad*a)));
				 kr112x=kr112xD;
				 kr112y=kr112yD;

				 kr121xD=round(xc+((kr121x-xc)*cos(grad*a)+(kr121y-yc)*sin(grad*a)));
				 kr121yD=round(yc+((kr121y-yc)*cos(grad*a)-(kr121x-xc)*sin(grad*a)));
				 kr121x=kr121xD;
				 kr121y=kr121yD;

				 kr122xD=round(xc+((kr122x-xc)*cos(grad*a)+(kr122y-yc)*sin(grad*a)));
				 kr122yD=round(yc+((kr122y-yc)*cos(grad*a)-(kr122x-xc)*sin(grad*a)));
				 kr122x=kr122xD;
				 kr122y=kr122yD;

				 kr211xD=round(xc+((kr211x-xc)*cos(grad*a)+(kr211y-yc)*sin(grad*a)));
				 kr211yD=round(yc+((kr211y-yc)*cos(grad*a)-(kr211x-xc)*sin(grad*a)));
				 kr211x=kr211xD;
				 kr211y=kr211yD;

				 kr212xD=round(xc+((kr212x-xc)*cos(grad*a)+(kr212y-yc)*sin(grad*a)));
				 kr212yD=round(yc+((kr212y-yc)*cos(grad*a)-(kr212x-xc)*sin(grad*a)));
				 kr212x=kr212xD;
				 kr212y=kr212yD;

				 kr221xD=round(xc+((kr221x-xc)*cos(grad*a)+(kr221y-yc)*sin(grad*a)));
				 kr221yD=round(yc+((kr221y-yc)*cos(grad*a)-(kr221x-xc)*sin(grad*a)));
				 kr221x=kr221xD;
				 kr221y=kr221yD;

				 kr222xD=round(xc+((kr222x-xc)*cos(grad*a)+(kr222y-yc)*sin(grad*a)));
				 kr222yD=round(yc+((kr222y-yc)*cos(grad*a)-(kr222x-xc)*sin(grad*a)));
				 kr222x=kr222xD;
				 kr222y=kr222yD;



				wing11xD=round(xc+((wing11x-xc)*cos(grad*a)+(wing11y-yc)*sin(grad*a)));		//координаты крыла
				wing11yD=round(yc+((wing11y-yc)*cos(grad*a)-(wing11x-xc)*sin(grad*a)));
				wing11x=wing11xD;
				wing11y=wing11yD;

				wing12xD=round(xc+((wing12x-xc)*cos(grad*a)+(wing12y-yc)*sin(grad*a)));
				wing12yD=round(yc+((wing12y-yc)*cos(grad*a)-(wing12x-xc)*sin(grad*a)));
				wing12x=wing12xD;
				wing12y=wing12yD;
				

				wing21xD=round(xc+((wing21x-xc)*cos(grad*a)+(wing21y-yc)*sin(grad*a)));
				wing21yD=round(yc+((wing21y-yc)*cos(grad*a)-(wing21x-xc)*sin(grad*a)));
				wing21x=wing21xD;
				wing21y=wing21yD;

				wing22xD=round(xc+((wing22x-xc)*cos(grad*a)+(wing22y-yc)*sin(grad*a)));
				wing22yD=round(yc+((wing22y-yc)*cos(grad*a)-(wing22x-xc)*sin(grad*a)));
				wing22x=wing22xD;
				wing22y=wing22yD;



				xcd=xcd;					//координаты дороги
				ycd=ycd;
				xd=xd;
				yd=yd;

				  int mm=14;
				   
			      array <PointF > ^y=gcnew array<PointF > (mm);
                  y[0].X=x0;y[0].Y=y0;
                  y[1].X=x1;y[1].Y=y1;
				  y[2].X=x2;y[2].Y=y2;
                  y[3].X=x3;y[3].Y=y3;
                  y[4].X=x4;y[4].Y=y4;
                  y[5].X=x5;y[5].Y=y5;
                  y[6].X=x6;y[6].Y=y6;
				  y[7].X=x7;y[7].Y=y7;
				  y[8].X=x8;y[8].Y=y8;
				  y[9].X=x9;y[9].Y=y9;
				  y[10].X=x10;y[10].Y=y10;
				  y[11].X=x11;y[11].Y=y11;
				  y[12].X=x12;y[12].Y=y12;
				  y[13].X=x13;y[13].Y=y13;
				  
                  im->DrawPolygon(pen,y);									//рисование корпуса самолёта

				  

				  im->DrawLine(pen,st11x,st11y,st12x,st12y);				//стержень шасси 1
				  im->DrawLine(pen,st21x,st21y,st22x,st22y);				//стержень шасси 2

				  im->DrawEllipse(pen,sh1x,sh1y,dsh1x,dsh1y);				//шасся 1
				  im->DrawEllipse(pen,sh2x,sh2y,dsh2x,dsh2y);				//шасся 2

				  im->DrawLine(pen,kr111x,kr111y,kr112x,kr112y);			//крестик первой шасси
				  im->DrawLine(pen,kr121x,kr121y,kr122x,kr122y);

				  im->DrawLine(pen,kr211x,kr211y,kr212x,kr212y);			//крестик второй шасси
				  im->DrawLine(pen,kr221x,kr221y,kr222x,kr222y);

				  im->DrawLine(pen,wing11x,wing11y,wing12x,wing12y);		//крыло
				  im->DrawLine(pen,wing21x,wing21y,wing22x,wing22y);

				 im->FillRectangle(pen->Brush,xcd,ycd,xd,yd);				//дорога



				 /////////////////////////////Дублированные координаты


				x0D=0;y0D=0;		//координаты корпуса самолёта
                x1D=0;y1D=0;
				x2D=0;y2D=0;
                x3D=0;y3D=0;
                x4D=0;y4D=0;
                x5D=0;y5D=0;
                x6D=0;y6D=0;
				x7D=0;y7D=0;
				x8D=0;y8D=0;
				x9D=0;y9D=0;
				x10D=0;y10D=0;
				x11D=0;y11D=0;
				x12D=0;y12D=0;
				x13D=0;y13D=0;

				xc1D=0;				//центры вращения
				yc1D=0;
				xc2D=0;
				yc2D=0;

				st11xD=0;				//координаты первого стержня
				st12xD=0;
				st11yD=0;				
				st12yD=0;

				st21xD=0;				//координаты второго стержня
				st22xD=0;
				st21yD=0;				
				st22yD=0;

				sh1xD=0;				//координаты шасси 1
				sh1yD=0;
				dsh1xD=0;				
				dsh1yD=0;

				sh2xD=0;				//координаты шасси 2
				sh2yD=0;
				dsh2xD=0;				
				dsh2yD=0;

				kr111xD=0;			//Х крестиков
				kr111x2D=0;
				kr112xD=0;
				kr112x2D=0;
				kr121xD=0;
				kr121x2D=0;
				kr122xD=0;
				kr122x2D=0;

				kr211xD=0;
				kr211x2D=0;
				kr212xD=0;
				kr212x2D=0;
				kr221xD=0;
				kr221x2D=0;
				kr222xD=0;
				kr222x2D=0;

				kr111yD=0;			//Y крестиков
				kr111y2D=0;
				kr112yD=0;
				kr112y2D=0;
				kr121yD=0;
				kr121y2D=0;
				kr122yD=0;
				kr122y2D=0;

				kr211yD=0;
				kr211y2D=0;
				kr212yD=0;
				kr212y2D=0;
				kr221yD=0;
				kr221y2D=0;
				kr222yD=0;
				kr222y2D=0;

				wing11xD=0;			//координаты крыла
				wing12xD=0;
				wing11yD=0;			
				wing12yD=0;

				wing21xD=0;			
				wing22xD=0;
				wing21yD=0;
				wing22yD=0;

				xcdD=0;				//координаты дороги
				ycdD=0;
				xdD=0;
				ydD=0;



				 }



				 if((I>=45)&&(I<=57))
				 {
					  Pen ^pen2 =gcnew Pen (SystemColors::Control);
					 im->FillRectangle(pen2->Brush,0,0,3000,3000);			//закрашивание

					 Color ^col=gcnew Color();	
					 Pen ^pen = gcnew Pen (col->Red);
				 
					 


					 /////////////////////////////Дублированные координаты(перемещение по дуге e^x)


				  x0D+=10;		y0D=exp(x0D/30);
				  x1D+=10;		y1D=exp(x1D/30);
				  x2D+=10;		y2D=exp(x2D/30);
				  x3D+=10;		y3D=exp(x3D/30);
				  x4D+=10;		y4D=exp(x4D/30);
				  x5D+=10;		y5D=exp(x5D/30);
				  x6D+=10;		y6D=exp(x6D/30);
				  x7D+=10;		y7D=exp(x7D/30);
				  x8D+=10;		y8D=exp(x8D/30);
				  x9D+=10;		y9D=exp(x9D/30);
				  x10D+=10;	y10D=exp(x10D/30);
				  x11D+=10;	y11D=exp(x11D/30);
				  x12D+=10;	y12D=exp(x12D/30);
				  x13D+=10;	y13D=exp(x13D/30);

				xc1D+=10;				//центры вращения
				yc1D=exp(xc1D/30);
				xc2D+=10;
				yc2D=exp(xc2D/30);

				st11xD+=10;				//координаты первого стержня
				st12xD+=10;
				st11yD=exp(st11xD/30);				
				st12yD=exp(st12xD/30);

				st21xD+=10;				//координаты второго стержня
				st22xD+=10;
				st21yD=exp(st21xD/30);				
				st22yD=exp(st22xD/30);

				sh1xD+=10;				//координаты шасси 1
				sh1yD=exp(sh1xD/30);
				dsh1xD=dsh1x;				
				dsh1yD=dsh1y;

				sh2xD+=10;				//координаты шасси 2
				sh2yD=exp(sh2xD/30);
				dsh2xD=dsh2x;				
				dsh2yD=dsh2y;

				kr111xD+=10;			//Х крестиков
				kr111x2D=0;
				kr112xD+=10;
				kr112x2D=0;
				kr121xD+=10;
				kr121x2D=0;
				kr122xD+=10;
				kr122x2D=0;

				kr211xD+=10;
				kr211x2D=0;
				kr212xD+=10;
				kr212x2D=0;
				kr221xD+=10;
				kr221x2D=0;
				kr222xD+=10;
				kr222x2D=0;

				kr111yD=exp(kr111xD/30);			//Y крестиков
				kr111y2D=0;
				kr112yD=exp(kr112xD/30);
				kr112y2D=0;
				kr121yD=exp(kr121xD/30);
				kr121y2D=0;
				kr122yD=exp(kr122xD/30);
				kr122y2D=0;

				kr211yD=exp(kr211xD/30);
				kr211y2D=0;
				kr212yD=exp(kr212xD/30);
				kr212y2D=0;
				kr221yD=exp(kr221xD/30);
				kr221y2D=0;
				kr222yD=exp(kr222xD/30);
				kr222y2D=0;

				wing11xD+=10;			//координаты крыла
				wing12xD+=10;
				wing11yD=exp(wing11xD/30);			
				wing12yD=exp(wing12xD/30);

				wing21xD+=10;			
				wing22xD+=10;
				wing21yD=exp(wing21xD/30);
				wing22yD=exp(wing22xD/30);

				xcdD=xcd;				//координаты дороги
				ycdD=ycd;
				xdD=xd;
				ydD=yd;




					 int mm=14;
				   
			      array <PointF > ^y=gcnew array<PointF > (mm);

				  x0=x0+x0D;		y0=round(y0-y0D+exp((x0D-10)/30));
				  x1=x1+x1D;		y1=round(y1-y1D+exp((x1D-10)/30));
				  x2=x2+x2D;		y2=round(y2-y2D+exp((x2D-10)/30));
				  x3=x3+x3D;		y3=round(y3-y3D+exp((x3D-10)/30));
				  x4=x4+x4D;		y4=round(y4-y4D+exp((x4D-10)/30));
				  x5=x5+x5D;		y5=round(y5-y5D+exp((x5D-10)/30));
				  x6=x6+x6D;		y6=round(y6-y6D+exp((x6D-10)/30));
				  x7=x7+x7D;		y7=round(y7-y7D+exp((x7D-10)/30));
				  x8=x8+x8D;		y8=round(y8-y8D+exp((x8D-10)/30));
				  x9=x9+x9D;		y9=round(y9-y9D+exp((x9D-10)/30));
				  x10=x10+x10D;	 y10=round(y10-y10D+exp((x10D-10)/30));
				  x11=x11+x11D;  y11=round(y11-y11D+exp((x11D-10)/30));
				  x12=x12+x12D;  y12=round(y12-y12D+exp((x12D-10)/30));
				  x13=x13+x13D;  y13=round(y13-y13D+exp((x13D-10)/30));

				  y[0].X=x0;y[0].Y=y0;
                  y[1].X=x1;y[1].Y=y1;
				  y[2].X=x2;y[2].Y=y2;
                  y[3].X=x3;y[3].Y=y3;
                  y[4].X=x4;y[4].Y=y4;
                  y[5].X=x5;y[5].Y=y5;
                  y[6].X=x6;y[6].Y=y6;
				  y[7].X=x7;y[7].Y=y7;
				  y[8].X=x8;y[8].Y=y8;
				  y[9].X=x9;y[9].Y=y9;
				  y[10].X=x10;y[10].Y=y10;
				  y[11].X=x11;y[11].Y=y11;
				  y[12].X=x12;y[12].Y=y12;
				  y[13].X=x13;y[13].Y=y13;

				 im->DrawPolygon(pen,y);

				 
				 xc0=x0;			////////
				 yc0=y0;

				 
				 st11x=st11x+st11xD;				//координаты первого стержня
				 st12x=st12x+st12xD;
				 st11y=round(st11y-st11yD+exp((st11xD-10)/30));				
				 st12y=round(st12y-st12yD+exp((st12xD-10)/30));

				 st21x=st21x+st21xD;				//координаты второго стержня
				 st22x=st22x+st22xD;
				 st21y=round(st21y-st21yD+exp((st21xD-10)/30));				
				 st22y=round(st22y-st22yD+exp((st22xD-10)/30));

				 sh1x=sh1x+sh1xD;					//шасси 1
				 sh1y=round(sh1y-sh1yD+exp((sh1xD-10)/30));
				 dsh1x=dsh1xD;
				 dsh1y=dsh2yD;

				 sh2x=sh2x+sh2xD;					//шасси 2
				 sh2y=round(sh2y-sh2yD+exp((sh2xD-10)/30));
				 dsh2x=dsh2xD;
				 dsh2y=dsh2yD;

				 kr111x2=round(xc1+((kr111x-xc1)*cos(pi/6)+(kr111y-yc1)*sin(pi/6)));		//крестики
				 kr111y2=round(yc1+((kr111y-yc1)*cos(pi/6)-(kr111x-xc1)*sin(pi/6)));
				 kr111x=kr111x2;
				 kr111x=kr111x+kr111xD;
				 kr111y=kr111y2;
				 kr111y=round(kr111y-kr111yD+exp((kr111xD-10)/30));

				 kr112x2=round(xc1+((kr112x-xc1)*cos(pi/6)+(kr112y-yc1)*sin(pi/6)));
				 kr112y2=round(yc1+((kr112y-yc1)*cos(pi/6)-(kr112x-xc1)*sin(pi/6)));
				 kr112x=kr112x2;
				 kr112x=kr112x+kr112xD;
				 kr112y=kr112y2;
				 kr112y=round(kr112y-kr112yD+exp((kr112xD-10)/30));

				 kr121x2=round(xc1+((kr121x-xc1)*cos(pi/6)+(kr121y-yc1)*sin(pi/6)));
				 kr121y2=round(yc1+((kr121y-yc1)*cos(pi/6)-(kr121x-xc1)*sin(pi/6)));
				 kr121x=kr121x2;
				 kr121x=kr121x+kr121xD;
				 kr121y=kr121y2;
				 kr121y=round(kr121y-kr121yD+exp((kr121xD-10)/30));

				 kr122x2=round(xc1+((kr122x-xc1)*cos(pi/6)+(kr122y-yc1)*sin(pi/6)));
				 kr122y2=round(yc1+((kr122y-yc1)*cos(pi/6)-(kr122x-xc1)*sin(pi/6)));
				 kr122x=kr122x2;
				 kr122x=kr122x+kr122xD;
				 kr122y=kr122y2;
				 kr122y=round(kr122y-kr122yD+exp((kr122xD-10)/30));

				 kr211x2=round(xc2+((kr211x-xc2)*cos(pi/6)+(kr211y-yc2)*sin(pi/6)));
				 kr211y2=round(yc2+((kr211y-yc2)*cos(pi/6)-(kr211x-xc2)*sin(pi/6)));
				 kr211x=kr211x2;
				 kr211x=kr211x+kr211xD;
				 kr211y=kr211y2;
				 kr211y=round(kr211y-kr211yD+exp((kr211xD-10)/30));

				 kr212x2=round(xc2+((kr212x-xc2)*cos(pi/6)+(kr212y-yc2)*sin(pi/6)));
				 kr212y2=round(yc2+((kr212y-yc2)*cos(pi/6)-(kr212x-xc2)*sin(pi/6)));
				 kr212x=kr212x2;
				 kr212x=kr212x+kr212xD;
				 kr212y=kr212y2;
				 kr212y=round(kr212y-kr212yD+exp((kr212xD-10)/30));

				 kr221x2=round(xc2+((kr221x-xc2)*cos(pi/6)+(kr221y-yc2)*sin(pi/6)));
				 kr221y2=round(yc2+((kr221y-yc2)*cos(pi/6)-(kr221x-xc2)*sin(pi/6)));
				 kr221x=kr221x2;
				 kr221x=kr221x+kr221xD;
				 kr221y=kr221y2;
				 kr221y=round(kr221y-kr221yD+exp((kr221xD-10)/30));

				 kr222x2=round(xc2+((kr222x-xc2)*cos(pi/6)+(kr222y-yc2)*sin(pi/6)));
				 kr222y2=round(yc2+((kr222y-yc2)*cos(pi/6)-(kr222x-xc2)*sin(pi/6)));
				 kr222x=kr222x2;
				 kr222x=kr222x+kr222xD;
				 kr222y=kr222y2;
				 kr222y=round(kr222y-kr222yD+exp((kr222xD-10)/30));

				 

				 wing11x=wing11x+wing11xD;			//координаты крыла
				 wing12x=wing12x+wing12xD;
				 wing11y=round(wing11y-wing11yD+exp((wing11xD-10)/30));			
				 wing12y=round(wing12y-wing12yD+exp((wing12xD-10)/30));

				 wing21x=wing21x+wing21xD;
				 wing22x=wing22x+wing22xD;
				 wing21y=round(wing21y-wing21yD+exp((wing21xD-10)/30));			
				 wing22y=round(wing22y-wing22yD+exp((wing22xD-10)/30));

				 xc1=xc1+xc1D;					//центры вращения
				 yc1=round(yc1-yc1D+exp((xc1D-10)/30));
				 xc2=xc2+xc2D;
				 yc2=round(yc2-yc2D+exp((xc2D-10)/30));

				 xcd=xcd;
				 ycd=ycd;
				 xd=xd;
				 yd=yd;


				  im->DrawLine(pen,st11x,st11y,st12x,st12y);				//стержень шасси 1
				  im->DrawLine(pen,st21x,st21y,st22x,st22y);				//стержень шасси 2

				  im->DrawEllipse(pen,sh1x,sh1y,dsh1x,dsh1y);						//шасся 1
				  im->DrawEllipse(pen,sh2x,sh2y,dsh2x,dsh2y);						//шасся 2

				  im->DrawLine(pen,kr111x,kr111y,kr112x,kr112y);			//крестик первой шасси
				  im->DrawLine(pen,kr121x,kr121y,kr122x,kr122y);

				  im->DrawLine(pen,kr211x,kr211y,kr212x,kr212y);			//крестик второй шасси
				  im->DrawLine(pen,kr221x,kr221y,kr222x,kr222y);

				  im->DrawLine(pen,wing11x,wing11y,wing12x,wing12y);		//крыло
				  im->DrawLine(pen,wing21x,wing21y,wing22x,wing22y);

				  im->FillRectangle(pen->Brush,xcd,ycd,xd,yd);
				 }
			 
			if(I>=31)
			{
			 //Дублированные дублированные координаты



				  x0DD=x0;		y0DD=y0;
				  x1DD=x1;		y1DD=y1;
				  x2DD=x2;		y2DD=y2;
				  x3DD=x3;		y3DD=y3;
				  x4DD=x4;		y4DD=y4;
				  x5DD=x5;		y5DD=y5;
				  x6DD=x6;		y6DD=y6;
				  x7DD=x7;		y7DD=y7;
				  x8DD=x8;		y8DD=y8;
				  x9DD=x9;		y9DD=y9;
				  x10DD=x10;	y10DD=y10;
				  x11DD=x11;	y11DD=y11;
				  x12DD=x12;	y12DD=y12;
				  x13DD=x13;	y13DD=y13;

				  xc0=x0; 

				  yc0=y0;


				xc1DD=xc1;				//центры вращения
				yc1DD=yc1;
				xc2DD=xc2;
				yc2DD=yc2;

				st11xDD=st11x;				//координаты первого стержня
				st12xDD=st12x;
				st11yDD=st11y;				
				st12yDD=st12y;

				st21xDD=st21x;				//координаты второго стержня
				st22xDD=st22x;
				st21yDD=st21y;				
				st22yDD=st22y;


				sh1xDD=sh1x;				//шасси 1
				sh1yDD=sh1y;
				dsh1xDD=dsh1x;				
				dsh1yDD=dsh1y;

				sh2xDD=sh2x;				//шасси 2
				sh2yDD=sh2y;
				dsh2xDD=dsh2x;				
				dsh2yDD=dsh2y;

				kr111xDD=kr111x;				//Х крестиков
				kr112xDD=kr112x;
				kr121xDD=kr121x;
				kr122xDD=kr122x;

				kr211xDD=kr211x;
				kr212xDD=kr212x;
				kr221xDD=kr221x;
				kr222xDD=kr222x;

				kr111yDD=kr111y;				//Y крестиков
				kr112yDD=kr112y;
				kr121yDD=kr121y;
				kr122yDD=kr122y;

				kr211yDD=kr211y;
				kr212yDD=kr212y;
				kr221yDD=kr221y;
				kr222yDD=kr222y;

				wing11xDD=wing11x;			//координаты крыла
				wing12xDD=wing12x;
				wing11yDD=wing11y;			
				wing12yDD=wing12y;

				wing21xDD=wing21x;
				wing22xDD=wing22x;
				wing21yDD=wing21y;
				wing22yDD=wing22y;

				xcdDD=xcd;					//координаты дороги
				ycdDD=ycd;
				xdDD=xd;
				ydDD=yd;


				 Pen ^pen2 =gcnew Pen (SystemColors::Control);
				 im->FillRectangle(pen2->Brush,0,0,3000,3000);			//закрашивание

				 Color ^col=gcnew Color();	
				 Pen ^pen = gcnew Pen (col->Red);

                   int mm=14;
				   
			      array <PointF > ^y=gcnew array<PointF > (mm);
				  x0=round(kx*x0DD+xc0*(1-kx));  y0=round(ky*y0DD+yc0*(1-ky));
                  x1=round(kx*x1DD+xc0*(1-kx));  y1=round(ky*y1DD+yc0*(1-ky));
				  x2=round(kx*x2DD+xc0*(1-kx));  y2=round(ky*y2DD+yc0*(1-ky));
                  x3=round(kx*x3DD+xc0*(1-kx));  y3=round(ky*y3DD+yc0*(1-ky));
                  x4=round(kx*x4DD+xc0*(1-kx));  y4=round(ky*y4DD+yc0*(1-ky));
                  x5=round(kx*x5DD+xc0*(1-kx));  y5=round(ky*y5DD+yc0*(1-ky));
                  x6=round(kx*x6DD+xc0*(1-kx));  y6=round(ky*y6DD+yc0*(1-ky));
				  x7=round(kx*x7DD+xc0*(1-kx));  y7=round(ky*y7DD+yc0*(1-ky));
				  x8=round(kx*x8DD+xc0*(1-kx));  y8=round(ky*y8DD+yc0*(1-ky));
				  x9=round(kx*x9DD+xc0*(1-kx));  y9=round(ky*y9DD+yc0*(1-ky));
				 x10=round(kx*x10DD+xc0*(1-kx));y10=round(ky*y10DD+yc0*(1-ky));
				 x11=round(kx*x11DD+xc0*(1-kx));y11=round(ky*y11DD+yc0*(1-ky));
				 x12=round(kx*x12DD+xc0*(1-kx));y12=round(ky*y12DD+yc0*(1-ky));
				 x13=round(kx*x13DD+xc0*(1-kx));y13=round(ky*y13DD+yc0*(1-ky));

				  y[0].X=x0;y[0].Y=y0;
                  y[1].X=x1;y[1].Y=y1;
				  y[2].X=x2;y[2].Y=y2;
                  y[3].X=x3;y[3].Y=y3;
                  y[4].X=x4;y[4].Y=y4;
                  y[5].X=x5;y[5].Y=y5;
                  y[6].X=x6;y[6].Y=y6;
				  y[7].X=x7;y[7].Y=y7;
				  y[8].X=x8;y[8].Y=y8;
				  y[9].X=x9;y[9].Y=y9;
				  y[10].X=x10;y[10].Y=y10;
				  y[11].X=x11;y[11].Y=y11;
				  y[12].X=x12;y[12].Y=y12;
				  y[13].X=x13;y[13].Y=y13;

				 im->DrawPolygon(pen,y);

				 
				 
				 st11x=round(kx*st11xDD+xc0*(1-kx));				//координаты первого стержня
				 st12x=round(kx*st12xDD+xc0*(1-kx));
				 st11y=round(ky*st11yDD+yc0*(1-ky));				
				 st12y=round(ky*st12yDD+yc0*(1-ky));

				 st21x=round(kx*st21xDD+xc0*(1-kx));				//координаты второго стержня
				 st22x=round(kx*st22xDD+xc0*(1-kx));
				 st21y=round(ky*st21yDD+yc0*(1-ky));				
				 st22y=round(ky*st22yDD+yc0*(1-ky));


				 sh1x=round(kx*sh1xDD+xc0*(1-kx));				//шасси 1
				 sh1y=round(ky*sh1yDD+yc0*(1-ky));
				 dsh1x=dsh1xDD*kx;				
				 dsh1y=dsh1yDD*ky;

				 sh2x=round(kx*sh2xDD+xc0*(1-kx));				//шасси 2
				 sh2y=round(ky*sh2yDD+yc0*(1-ky));
				 dsh2x=dsh2xDD*kx;				
				 dsh2y=dsh2yDD*ky;

				 kr111x=round(kx*kr111xDD+xc0*(1-kx));			//крестики
				 kr111y=round(ky*kr111yDD+yc0*(1-ky));
				 
				 kr112x=round(kx*kr112xDD+xc0*(1-kx));			
				 kr112y=round(ky*kr112yDD+yc0*(1-ky));

				 kr121x=round(kx*kr121xDD+xc0*(1-kx));			
				 kr121y=round(ky*kr121yDD+yc0*(1-ky));

				 kr122x=round(kx*kr122xDD+xc0*(1-kx));			
				 kr122y=round(ky*kr122yDD+yc0*(1-ky));

				 kr211x=round(kx*kr211xDD+xc0*(1-kx));			
				 kr211y=round(ky*kr211yDD+yc0*(1-ky));

				 kr212x=round(kx*kr212xDD+xc0*(1-kx));			
				 kr212y=round(ky*kr212yDD+yc0*(1-ky));

				 kr221x=round(kx*kr221xDD+xc0*(1-kx));			
				 kr221y=round(ky*kr221yDD+yc0*(1-ky));

				 kr222x=round(kx*kr222xDD+xc0*(1-kx));			
				 kr222y=round(ky*kr222yDD+yc0*(1-ky));

				 

				 wing11x=round(kx*wing11xDD+xc0*(1-kx));			//координаты крыла
				 wing12x=round(kx*wing12xDD+xc0*(1-kx));
				 wing11y=round(ky*wing11yDD+yc0*(1-ky));			
				 wing12y=round(ky*wing12yDD+yc0*(1-ky));

				 wing21x=round(kx*wing21xDD+xc0*(1-kx));
				 wing22x=round(kx*wing22xDD+xc0*(1-kx));
				 wing21y=round(ky*wing21yDD+yc0*(1-ky));			
				 wing22y=round(ky*wing22yDD+yc0*(1-ky));

				 xc1=round(kx*xc1DD+xc0*(1-kx));					//центры вращения
				 yc1=round(ky*yc1DD+yc0*(1-ky));
				 xc2=round(kx*xc2DD+xc0*(1-kx));
				 yc2=round(ky*yc2DD+yc0*(1-ky));

				 /*xcd=0;
				 ycd=round(ky*ycdDD+yc0*(1-ky));
				 xd=xdDD*kx;
				 yd=ydDD*ky;*/


				  im->DrawLine(pen,st11x,st11y,st12x,st12y);				//стержень шасси 1
				  im->DrawLine(pen,st21x,st21y,st22x,st22y);				//стержень шасси 2

				  im->DrawEllipse(pen,sh1x,sh1y,dsh1x,dsh1y);				//шасся 1
				  im->DrawEllipse(pen,sh2x,sh2y,dsh2x,dsh2y);				//шасся 2

				  im->DrawLine(pen,kr111x,kr111y,kr112x,kr112y);			//крестик первой шасси
				  im->DrawLine(pen,kr121x,kr121y,kr122x,kr122y);

				  im->DrawLine(pen,kr211x,kr211y,kr212x,kr212y);			//крестик второй шасси
				  im->DrawLine(pen,kr221x,kr221y,kr222x,kr222y);

				  im->DrawLine(pen,wing11x,wing11y,wing12x,wing12y);		//крыло
				  im->DrawLine(pen,wing21x,wing21y,wing22x,wing22y);

				 im->FillRectangle(pen->Brush,xcd,ycd,xd,yd);				//дорога

				 kx=kx-dmx;
				 ky=ky-dmy;


				 
					
					}
					}
					i=i+1;
					j=j+1;
					I=I+1;
		 }

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 tm->Enabled = false;				//СТОП-КНОПКА
			
			 
		 }


/*private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
					

			 if (e->KeyCode==Keys::W)
				{
					button9->PerformClick();
				}

			 if (e->KeyCode==Keys::S)
				{
					button1->PerformClick();
				}
		 }*/


private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {

			 tm->Enabled = true;


		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 tm->Enabled = true;
			 S=1;
			 I=1;
			 k=0;
			 l=0;
			 s=0;

			 xc=600;
			 yc=120;
			 a=-36;

			 kx=1;
			 ky=1;
			 xc0=100;
			 yc0=250;
			 dmx=0.005;
			 dmy=0.005;


				 

				 

		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 double p;
			 if(textBox8->Text!="")
			 {p=Convert::ToDouble(textBox8->Text);
			 tm->Interval=p;}
		 }
};
}


