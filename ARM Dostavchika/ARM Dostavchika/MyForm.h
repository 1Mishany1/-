#pragma once
#include"MyForm1.h"
#include"MyForm2.h"
namespace ARMDostavchika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ email;
	protected:
	private: System::Windows::Forms::Label^ Parol;
	private: System::Windows::Forms::TextBox^ adr;
	private: System::Windows::Forms::TextBox^ par;
	private: System::Windows::Forms::Button^ registr;
	private: System::Windows::Forms::Button^ Vhod;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->email = (gcnew System::Windows::Forms::Label());
			this->Parol = (gcnew System::Windows::Forms::Label());
			this->adr = (gcnew System::Windows::Forms::TextBox());
			this->par = (gcnew System::Windows::Forms::TextBox());
			this->registr = (gcnew System::Windows::Forms::Button());
			this->Vhod = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// email
			// 
			this->email->AutoSize = true;
			this->email->Location = System::Drawing::Point(604, 397);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(108, 25);
			this->email->TabIndex = 0;
			this->email->Text = L"Ёл.почта:";
			this->email->Click += gcnew System::EventHandler(this, &MyForm::email_Click);
			// 
			// Parol
			// 
			this->Parol->AutoSize = true;
			this->Parol->Location = System::Drawing::Point(615, 475);
			this->Parol->Name = L"Parol";
			this->Parol->Size = System::Drawing::Size(86, 25);
			this->Parol->TabIndex = 1;
			this->Parol->Text = L"ѕароль";
			this->Parol->Click += gcnew System::EventHandler(this, &MyForm::Parol_Click);
			// 
			// adr
			// 
			this->adr->Location = System::Drawing::Point(762, 397);
			this->adr->Multiline = true;
			this->adr->Name = L"adr";
			this->adr->Size = System::Drawing::Size(235, 40);
			this->adr->TabIndex = 2;
			this->adr->TextChanged += gcnew System::EventHandler(this, &MyForm::adr_TextChanged);
			// 
			// par
			// 
			this->par->Location = System::Drawing::Point(762, 472);
			this->par->Multiline = true;
			this->par->Name = L"par";
			this->par->Size = System::Drawing::Size(235, 38);
			this->par->TabIndex = 3;
			this->par->TextChanged += gcnew System::EventHandler(this, &MyForm::par_TextChanged);
			// 
			// registr
			// 
			this->registr->Location = System::Drawing::Point(904, 560);
			this->registr->Name = L"registr";
			this->registr->Size = System::Drawing::Size(198, 44);
			this->registr->TabIndex = 4;
			this->registr->Text = L"–егистраци€:";
			this->registr->UseVisualStyleBackColor = true;
			this->registr->Click += gcnew System::EventHandler(this, &MyForm::registr_Click);
			// 
			// Vhod
			// 
			this->Vhod->Location = System::Drawing::Point(736, 560);
			this->Vhod->Name = L"Vhod";
			this->Vhod->Size = System::Drawing::Size(137, 44);
			this->Vhod->TabIndex = 5;
			this->Vhod->Text = L"¬ход";
			this->Vhod->UseVisualStyleBackColor = true;
			this->Vhod->Click += gcnew System::EventHandler(this, &MyForm::Vhod_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1776, 1073);
			this->Controls->Add(this->Vhod);
			this->Controls->Add(this->registr);
			this->Controls->Add(this->par);
			this->Controls->Add(this->adr);
			this->Controls->Add(this->Parol);
			this->Controls->Add(this->email);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool Login_Password(String^ adress, String^ kod) {
			if (adress == "123" && kod == "qwe") {
				return true;
			}
			else {
				MessageBox::Show(this, "¬ы ввели невеврный пароль", "—ообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return false;
			}
		}
	private: System::Void email_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Parol_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void adr_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void par_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void registr_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ form = gcnew MyForm2();
	form->Show();
	MyForm::Hide();
}
private: System::Void Vhod_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ adr = email->Text;
	String^ kot = Parol->Text;
	if (Login_Password(adr, kot)) {
		MyForm1^ form2 = gcnew MyForm1();
		form2->Show();
		MyForm::Hide();
	}
}
};
}
