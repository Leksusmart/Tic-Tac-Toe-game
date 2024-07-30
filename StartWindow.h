#include <time.h>
#include <stdlib.h>
#pragma once
namespace Крестикинолики {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int choose(String^ b1, String^ b2, String^ b3, String^ b4, String^ b5, String^ b6, String^ b7, String^ b8, String^ b9) {
		srand(time(NULL));
		//В любых раскладах завершать линию
		//         Горизонталь			       Диагональ                  Вертикаль
		if ((b2 == "O" && b2 == b3) || (b5 == "O" && b9 == b5) || (b4 == "O" && b4 == b7))if (b1 == " ")return 1;
		if ((b1 == "O" && b3 == b1) || (b5 == "O" && b5 == b8))if (b2 == " ")return 2;
		if ((b1 == "O" && b2 == b1) || (b5 == "O" && b7 == b5) || (b6 == "O" && b6 == b9))if (b3 == " ")return 3;
		if ((b5 == "O" && b6 == b5) || (b1 == "O" && b1 == b7))if (b4 == " ")return 4;
		if ((b4 == "O" && b4 == b6) || (b1 == "O" && b9 == b1) || (b2 == "O" && b2 == b8) || (b3 == "O" && b3 == b7))if (b5 == " ")return 5;
		if ((b5 == "O" && b5 == b4) || (b3 == "O" && b3 == b9))if (b6 == " ")return 6;
		if ((b8 == "O" && b8 == b9) || (b5 == "O" && b3 == b5) || (b1 == "O" && b1 == b4))if (b7 == " ")return 7;
		if ((b7 == "O" && b7 == b9) || (b5 == "O" && b5 == b2))if (b8 == " ")return 8;
		if ((b7 == "O" && b7 == b8) || (b5 == "O" && b1 == b5) || (b6 == "O" && b6 == b3))if (b9 == " ")return 9;

		//В любых раскладах блокировать игроку победный ход
		//         Горизонталь			       Диагональ                  Вертикаль
		if ((b2 == "X" && b2 == b3) || (b5 == "X" && b9 == b5) || (b4 == "X" && b4 == b7))if (b1 == " ")return 1;
		if ((b1 == "X" && b3 == b1) || (b5 == "X" && b5 == b8))if (b2 == " ")return 2;
		if ((b1 == "X" && b2 == b1) || (b5 == "X" && b7 == b5) || (b6 == "X" && b6 == b9))if (b3 == " ")return 3;
		if ((b5 == "X" && b6 == b5) || (b1 == "X" && b1 == b7))if (b4 == " ")return 4;
		if ((b4 == "X" && b4 == b6) || (b1 == "X" && b9 == b1) || (b2 == "X" && b2 == b8) || (b3 == "X" && b3 == b7))if (b5 == " ")return 5;
		if ((b5 == "X" && b5 == b4) || (b3 == "X" && b3 == b9))if (b6 == " ")return 6;
		if ((b8 == "X" && b8 == b9) || (b5 == "X" && b3 == b5) || (b1 == "X" && b1 == b4))if (b7 == " ")return 7;
		if ((b7 == "X" && b7 == b9) || (b5 == "X" && b5 == b2))if (b8 == " ")return 8;
		if ((b7 == "X" && b7 == b8) || (b5 == "X" && b1 == b5) || (b6 == "X" && b6 == b3))if (b9 == " ")return 9;

		int XCounter = 0;
		if (b1 == "X")XCounter++;
		if (b2 == "X")XCounter++;
		if (b3 == "X")XCounter++;
		if (b4 == "X")XCounter++;
		if (b5 == "X")XCounter++;
		if (b6 == "X")XCounter++;
		if (b7 == "X")XCounter++;
		if (b8 == "X")XCounter++;
		if (b9 == "X")XCounter++;

		if (b5 == " ")return 5;
		if (b5 == "O") {
			int counter = 0;
			if (b2 == "X")counter++;
			if (b4 == "X")counter++;
			if (b6 == "X")counter++;
			if (b8 == "X")counter++;
			if (counter == 2 && XCounter == 2) {
				if (b2 == "X" && b4 == "X")if (b7 == " ")return 7;//Ничья
				if (b2 == "X" && b6 == "X")if (b1 == " ")return 1;//Ничья
				if (b4 == "X" && b8 == "X")if (b1 == " ")return 1;//Ничья
				if (b8 == "X" && b6 == "X")if (b7 == " ")return 7;//Ничья

				if (b6 == "X" && b4 == "X")if (b2 == " ")return 2;
				if (b2 == "X" && b8 == "X")if (b4 == " ")return 4;
			}
			if (b5 == "O" && b2 == "O") {
				if (b1 == " " && b9 == " " && b3 == " ")return 1;
				if (b1 == " " && b7 == " " && b3 == " ")return 3;
			}
			if (b5 == "O" && b4 == "O") {
				if (b1 == " " && b9 == " " && b7 == " ")return 1;
				if (b7 == " " && b3 == " " && b1 == " ")return 7;
			}
		}
		else {
			int y = rand() % 4;
			if (y == 0 && b1 == " ")return 1;
			if (y == 1 && b3 == " ")return 3;
			if (y == 2 && b7 == " ")return 7;
			if (y == 3 && b9 == " ")return 9;
		}
		while (true) {
			int y = rand() % 9;
			if (y == 0 && b1 == " ")return 1;
			if (y == 1 && b2 == " ")return 2;
			if (y == 2 && b3 == " ")return 3;
			if (y == 3 && b4 == " ")return 4;
			if (y == 4 && b5 == " ")return 5;
			if (y == 5 && b6 == " ")return 6;
			if (y == 6 && b7 == " ")return 7;
			if (y == 7 && b8 == " ")return 8;
			if (y == 8 && b9 == " ")return 9;
		}
	}
	/// <summary>
	/// Сводка для StartWindow
	/// </summary>
	public ref class StartWindow : public System::Windows::Forms::Form
	{
	public:
		StartWindow(void)
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
		~StartWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button9;



	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;


		   bool turnX = true;
	protected:


	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StartWindow::typeid));
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonExit->Cursor = System::Windows::Forms::Cursors::Default;
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonExit->ForeColor = System::Drawing::Color::Black;
			this->buttonExit->Location = System::Drawing::Point(265, 708);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(150, 44);
			this->buttonExit->TabIndex = 1;
			this->buttonExit->Text = L"Выйти";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &StartWindow::buttonExit_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(30, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(631, 143);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Крестики-нолики";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(109, 196);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 150);
			this->button1->TabIndex = 3;
			this->button1->Text = L" ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StartWindow::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(265, 196);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 150);
			this->button2->TabIndex = 4;
			this->button2->Text = L" ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StartWindow::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(421, 196);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 150);
			this->button3->TabIndex = 5;
			this->button3->Text = L" ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &StartWindow::button3_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(421, 352);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(150, 150);
			this->button6->TabIndex = 8;
			this->button6->Text = L" ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &StartWindow::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(265, 352);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 150);
			this->button5->TabIndex = 7;
			this->button5->Text = L" ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &StartWindow::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(109, 352);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 150);
			this->button4->TabIndex = 6;
			this->button4->Text = L" ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &StartWindow::button4_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(421, 508);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(150, 150);
			this->button9->TabIndex = 11;
			this->button9->Text = L" ";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &StartWindow::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(265, 508);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(150, 150);
			this->button8->TabIndex = 10;
			this->button8->Text = L" ";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &StartWindow::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(109, 508);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(150, 150);
			this->button7->TabIndex = 9;
			this->button7->Text = L" ";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &StartWindow::button7_Click);
			// 
			// StartWindow
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(700, 800);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonExit);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"StartWindow";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Крестики нолики";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		turn(button1);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		turn(button2);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		turn(button3);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		turn(button4);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		turn(button5);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		turn(button6);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		turn(button7);
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		turn(button8);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		turn(button9);
	}
		   void turn(System::Windows::Forms::Button^ button) {

			   if (button->Text == "X" || button->Text == "O");
			   else {
				   if (this->turnX) {
					   button->Text = "X";
					   this->turnX = false;
					   int endCounter = 0;
					   if (this->button1->Text == " ")endCounter++;
					   if (this->button2->Text == " ")endCounter++;
					   if (this->button3->Text == " ")endCounter++;
					   if (this->button4->Text == " ")endCounter++;
					   if (this->button5->Text == " ")endCounter++;
					   if (this->button6->Text == " ")endCounter++;
					   if (this->button7->Text == " ")endCounter++;
					   if (this->button8->Text == " ")endCounter++;
					   if (this->button9->Text == " ")endCounter++;
					   if (endCounter == 0)endGame2();
					   int btn_number = 0;
					   if (endCounter != 0)btn_number = choose(button1->Text, button2->Text, button3->Text, button4->Text, button5->Text, button6->Text, button7->Text, button8->Text, button9->Text);
					   if (btn_number == 1)this->button1->Text = "O";
					   if (btn_number == 2)this->button2->Text = "O";
					   if (btn_number == 3)this->button3->Text = "O";
					   if (btn_number == 4)this->button4->Text = "O";
					   if (btn_number == 5)this->button5->Text = "O";
					   if (btn_number == 6)this->button6->Text = "O";
					   if (btn_number == 7)this->button7->Text = "O";
					   if (btn_number == 8)this->button8->Text = "O";
					   if (btn_number == 9)this->button9->Text = "O";
					   this->turnX = true;
				   }
				   else {
					   button->Text = "O";
					   this->turnX = true;
				   }
				   if (button1->Text != " " && button1->Text == button2->Text && button1->Text == button3->Text) {
					   endGame(button1->Text);
				   }
				   else if (button4->Text != " " && button4->Text == button5->Text && button4->Text == button6->Text) {
					   endGame(button4->Text);
				   }
				   else if (button7->Text != " " && button7->Text == button8->Text && button7->Text == button9->Text) {
					   endGame(button7->Text);
				   }
				   else if (button1->Text != " " && button1->Text == button4->Text && button1->Text == button7->Text) {
					   endGame(button1->Text);
				   }
				   else if (button2->Text != " " && button2->Text == button5->Text && button2->Text == button8->Text) {
					   endGame(button2->Text);
				   }
				   else if (button3->Text != " " && button3->Text == button6->Text && button3->Text == button9->Text) {
					   endGame(button3->Text);
				   }
				   else if (button1->Text != " " && button1->Text == button5->Text && button1->Text == button9->Text) {
					   endGame(button1->Text);
				   }
				   else if (button3->Text != " " && button3->Text == button5->Text && button3->Text == button7->Text) {
					   endGame(button3->Text);
				   }
			   }
		   }
		   void endGame(System::String^ Player) {
			   String^ message = "Победил " + Player;
			   MessageBox::Show(this, message, "Игра окончена", MessageBoxButtons::OK);
			   this->button1->Text = " ";
			   this->button2->Text = " ";
			   this->button3->Text = " ";
			   this->button4->Text = " ";
			   this->button5->Text = " ";
			   this->button6->Text = " ";
			   this->button7->Text = " ";
			   this->button8->Text = " ";
			   this->button9->Text = " ";
		   }
		   void endGame2() {
			   MessageBox::Show(this, "Ничья", "Игра окончена", MessageBoxButtons::OK);
			   this->button1->Text = " ";
			   this->button2->Text = " ";
			   this->button3->Text = " ";
			   this->button4->Text = " ";
			   this->button5->Text = " ";
			   this->button6->Text = " ";
			   this->button7->Text = " ";
			   this->button8->Text = " ";
			   this->button9->Text = " ";
		   }
	};
}
