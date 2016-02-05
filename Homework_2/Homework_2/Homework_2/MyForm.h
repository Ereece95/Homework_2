#pragma once
namespace Homework_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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

	protected:

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

















		


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->Location = System::Drawing::Point(38, 89);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(43, 42);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->Location = System::Drawing::Point(38, -2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(43, 44);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->Location = System::Drawing::Point(-2, 43);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(39, 44);
			this->button5->TabIndex = 9;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->Location = System::Drawing::Point(78, 43);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(40, 44);
			this->button4->TabIndex = 8;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(122, 344);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(120, 132);
			this->panel1->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(113, 511);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 39);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(24, 17);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(318, 301);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(409, 562);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->Text = L"Image Positioning";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		Graphics ^g;
		Pen^ black_pen = gcnew Pen(Color::Black);

		Point point1 = Point(1, 1);
		Point point2 = Point(10, 10);
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		g = pictureBox1->CreateGraphics();
		g->DrawLine(black_pen, point1, point2);
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	

	Bitmap^ bmp = gcnew Bitmap("dwc.bmp");
	g->DrawImage(bmp, 25,20);
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) 
{
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Application::Exit();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	pictureBox1->Refresh();
	
	int x = 20, y = 25;
	Bitmap^ bmp = gcnew Bitmap("dwc.bmp");
	g->DrawImage(bmp, x, y);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	pictureBox1->Refresh();
	int x = -20, y = 70;
	

	Bitmap^ bmp = gcnew Bitmap("dwc.bmp");
	g->DrawImage(bmp, x, y);
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Refresh();
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
{	
	pictureBox1->Refresh();
	int x = 20, y = 70;


	Bitmap^ bmp = gcnew Bitmap("dwc.bmp");
	g->DrawImage(bmp, x, y);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	pictureBox1->Refresh();
	int x = 80, y = 70;

	Bitmap^ bmp = gcnew Bitmap("dwc.bmp");
	g->DrawImage(bmp, x, y);
}
};
}
