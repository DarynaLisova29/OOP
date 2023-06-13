#pragma once
#include"Header_for_class.h"
#include"MyForm1.h"

namespace rgz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ‚Ëı≥‰ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÔÓ¡‡ÁÛƒ‡ÌËToolStripMenuItem;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripMenuItem^ ÔÓ¡‡ÁÛƒ‡ÌËıToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÔÓ¿‚ÚÓ‡ToolStripMenuItem1;
	private: System::Windows::Forms::Button^ button5;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->‚Ëı≥‰ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÔÓ¡‡ÁÛƒ‡ÌËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÔÓ¡‡ÁÛƒ‡ÌËıToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÔÓ¿‚ÚÓ‡ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->‚Ëı≥‰ToolStripMenuItem,
					this->ÔÓ¡‡ÁÛƒ‡ÌËToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(731, 27);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ‚Ëı≥‰ToolStripMenuItem
			// 
			this->‚Ëı≥‰ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Script", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->‚Ëı≥‰ToolStripMenuItem->Name = L"‚Ëı≥‰ToolStripMenuItem";
			this->‚Ëı≥‰ToolStripMenuItem->Size = System::Drawing::Size(59, 23);
			this->‚Ëı≥‰ToolStripMenuItem->Text = L"¬Ëı≥‰";
			this->‚Ëı≥‰ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::‚Ëı≥‰ToolStripMenuItem_Click);
			// 
			// ÔÓ¡‡ÁÛƒ‡ÌËToolStripMenuItem
			// 
			this->ÔÓ¡‡ÁÛƒ‡ÌËToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ÔÓ¡‡ÁÛƒ‡ÌËıToolStripMenuItem,
					this->ÔÓ¿‚ÚÓ‡ToolStripMenuItem1
			});
			this->ÔÓ¡‡ÁÛƒ‡ÌËToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe Script", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ÔÓ¡‡ÁÛƒ‡ÌËToolStripMenuItem->Name = L"ÔÓ¡‡ÁÛƒ‡ÌËToolStripMenuItem";
			this->ÔÓ¡‡ÁÛƒ‡ÌËToolStripMenuItem->Size = System::Drawing::Size(56, 23);
			this->ÔÓ¡‡ÁÛƒ‡ÌËToolStripMenuItem->Text = L"ÃÂÌ˛";
			this->ÔÓ¡‡ÁÛƒ‡ÌËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ÔÓ¡‡ÁÛƒ‡ÌËToolStripMenuItem_Click);
			// 
			// ÔÓ¡‡ÁÛƒ‡ÌËıToolStripMenuItem
			// 
			this->ÔÓ¡‡ÁÛƒ‡ÌËıToolStripMenuItem->Name = L"ÔÓ¡‡ÁÛƒ‡ÌËıToolStripMenuItem";
			this->ÔÓ¡‡ÁÛƒ‡ÌËıToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->ÔÓ¡‡ÁÛƒ‡ÌËıToolStripMenuItem->Text = L"œÓ ·‡ÁÛ ‰‡ÌËı";
			this->ÔÓ¡‡ÁÛƒ‡ÌËıToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ÔÓ¡‡ÁÛƒ‡ÌËıToolStripMenuItem_Click);
			// 
			// ÔÓ¿‚ÚÓ‡ToolStripMenuItem1
			// 
			this->ÔÓ¿‚ÚÓ‡ToolStripMenuItem1->Name = L"ÔÓ¿‚ÚÓ‡ToolStripMenuItem1";
			this->ÔÓ¿‚ÚÓ‡ToolStripMenuItem1->Size = System::Drawing::Size(180, 24);
			this->ÔÓ¿‚ÚÓ‡ToolStripMenuItem1->Text = L"œÓ ‡‚ÚÓ‡";
			this->ÔÓ¿‚ÚÓ‡ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ÔÓ¿‚ÚÓ‡ToolStripMenuItem1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 27);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(494, 276);
			this->dataGridView1->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(526, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(193, 322);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"≈ÎÂÏÂÌÚË ÛÔ‡‚Î≥ÌÌˇ";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe Script", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(6, 86);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(165, 53);
			this->button5->TabIndex = 4;
			this->button5->Text = L"œÓÍ‡Á‡ÚË ≥ÌÙÓÏ‡ˆ≥˛";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 271);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(165, 30);
			this->button4->TabIndex = 3;
			this->button4->Text = L"«Ì‡ÈÚË ÍÎ≥∫ÌÚ‡";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 214);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(165, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"¬Ë‰‡ÎËÚË ÍÎ≥∫ÌÚ‡";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 159);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"ƒÓ‰‡ÚË ÍÎ≥∫ÌÚ‡";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(6, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"—Ú‚ÓËÚË ·‡ÁÛ ‰‡ÌËı\r\n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(731, 361);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"—‡ÎÓÌ Í‡ÒË";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*public:int count = 5;
			  Client* cl = new Client[count];*/
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ‚Ëı≥‰ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ÔÓ¡‡ÁÛƒ‡ÌËToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ÔÓ¡‡ÁÛƒ‡ÌËıToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ÔÓ¿‚ÚÓ‡ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private:void create_mass(Client cl[], int count);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
