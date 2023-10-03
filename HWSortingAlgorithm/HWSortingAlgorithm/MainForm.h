#pragma once

namespace HWSortingAlgorithm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;

	private:
		// List to store the numbers.
		List<int>^ numbersList = gcnew List<int>();

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(18, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Input numbers (1 Each time)";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(22, 40);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(228, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(258, 14);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 73);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 75);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"The numbers you chose:";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(468, 90);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 73);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Sort";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 143);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Sorted Numbers:";
			this->label3->Click += gcnew System::EventHandler(this, &MainForm::label3_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(468, 424);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(145, 73);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(626, 511);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MainForm";
			this->Text = L"Sorting Numbers";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Add number to list and update label2
		int number = Int32::Parse(textBox1->Text);
		numbersList->Add(number);
		label2->Text = "The numbers you chose: \n" + String::Join(", ", numbersList);
		textBox1->Clear();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Bubble sort logic
		int n = numbersList->Count;
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (numbersList[j] > numbersList[j + 1]) {
					int temp = numbersList[j];
					numbersList[j] = numbersList[j + 1];
					numbersList[j + 1] = temp;
				}
			}
		}
		// Update label3 with sorted numbers
		label3->Text = "Sorted Numbers: \n" + String::Join(", ", numbersList);
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Clear the list and reset the UI
		numbersList->Clear();
		textBox1->Clear();
		label2->Text = "The numbers you chose:";
		label3->Text = "Sorted Numbers:";
	}

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
	}
	};
}