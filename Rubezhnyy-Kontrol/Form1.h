#pragma once
#include <math.h>


/*					Создать форму с тремя кнопками, третья кнопка - выход из формы,
					первая кнопка - рисование ромба с центром в точке (100,300),
					стороны ≈ 60, вторая кнопка - движение ромба на каждый тик таймера
					по окружности с центром (300,300), при этом ромб масштабируется
					относительно своего центра с коэффицентами kx=1, ky=1,
					которые постепенно уменьшаются.
*/

double round(double number)								//функция округления
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

namespace РК {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

				int xc=300;					// центр вращения
				int yc=300;

				int xcm=100;				// центры ромба
				int ycm=300;

				float grad=-0.01745329251;	// градус в радианах

				double kx=1;				// коэффы масштабирования
				double ky=1;

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
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Timer^  tm;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

				
				  double x0;double y0;			// "регистрация" координат ромба
                  double x1;double y1;
				  double x2;double y2;
                  double x3;double y3;

				  double x0D;double y0D;		// "регистрация" дублированных координат ромба
                  double x1D;double y1D;		// нужны для вращения
				  double x2D;double y2D;
                  double x3D;double y3D;

				  double xcmD;double ycmD;		// дубляж центра ромба

				  double a;						// угол поворота за тик


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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tm = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(74, 594);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Рисование";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(218, 593);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 46);
			this->button2->TabIndex = 1;
			this->button2->Text = L"БАХ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(433, 594);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Выходъ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// tm
			// 
			this->tm->Tick += gcnew System::EventHandler(this, &Form1::tm_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(737, 651);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				  this->BackColor = System::Drawing::Color::White;	 
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Graphics ^im=this->CreateGraphics();
				 Color ^col=gcnew Color();

				 Pen ^pen2 =gcnew Pen (col->White);
				 im->FillRectangle(pen2->Brush,0,0,3000,3000);				// закрашивание

				 Pen ^pen =gcnew Pen (col->Red);
				  x0=50;y0=300;												// координаты ромба
                  x1=100;y1=270;
				  x2=150;y2=300;
                  x3=100;y3=330;

				  int mm=4;
				   
			      array <PointF > ^y=gcnew array<PointF > (mm);
                  y[0].X=x0;y[0].Y=y0;
                  y[1].X=x1;y[1].Y=y1;
				  y[2].X=x2;y[2].Y=y2;
                  y[3].X=x3;y[3].Y=y3;

				  im->DrawPolygon(pen,y);									// рисование ромба

				  tm->Enabled=false;
				  kx=1;
				  ky=1;
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				  a=15;														// кнопка
					  tm->Interval=50;
					  tm->Enabled=true;
				 


			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();				//КНОПКА ВЫХОДА
			 }

	private: System::Void tm_Tick(System::Object^  sender, System::EventArgs^  e) {
				  Graphics ^im=this->CreateGraphics();
				  Color ^col=gcnew Color();
				  Pen ^pen =gcnew Pen (col->Red);

				  Pen ^pen2 =gcnew Pen (col->White);
				 im->FillRectangle(pen2->Brush,0,0,3000,3000);				// закрашивание

				 x0D=round(xc+((x0-xc)*cos(grad*a)+(y0-yc)*sin(grad*a)));	// вращение координат ромба
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


				 xcmD=round(xc+((xcm-xc)*cos(grad*a)+(ycm-yc)*sin(grad*a)));
				 ycmD=round(yc+((ycm-yc)*cos(grad*a)-(xcm-xc)*sin(grad*a)));
				 xcm=xcmD;
				 ycm=ycmD; 

				  x0=round(kx*x0+xcm*(1-kx));  y0=round(ky*y0+ycm*(1-ky));	// машстабирование координат
                  x1=round(kx*x1+xcm*(1-kx));  y1=round(ky*y1+ycm*(1-ky));
				  x2=round(kx*x2+xcm*(1-kx));  y2=round(ky*y2+ycm*(1-ky));
                  x3=round(kx*x3+xcm*(1-kx));  y3=round(ky*y3+ycm*(1-ky));

				  

				  int mm=4;
				   
			      array <PointF > ^y=gcnew array<PointF > (mm);
                  y[0].X=x0;y[0].Y=y0;
                  y[1].X=x1;y[1].Y=y1;
				  y[2].X=x2;y[2].Y=y2;
                  y[3].X=x3;y[3].Y=y3;

				  im->DrawPolygon(pen,y);

				  kx=kx-0.001;
				  ky=ky-0.001;
				  xc=300;
				  yc=300;
			 }
};
}

