#pragma once
#include "MyForm1.h"
namespace UserAuthSystemWinFormsCpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblUsr;
	protected:
	private: System::Windows::Forms::Label^ lblPwd;
	private: System::Windows::Forms::TextBox^ txtUser;
	private: System::Windows::Forms::TextBox^ txtPwd;


	private: System::Windows::Forms::Button^ bLogin;

	private: System::Windows::Forms::Button^ bRegister;
	private: void Login();

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
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->lblUsr = (gcnew System::Windows::Forms::Label());
			this->lblPwd = (gcnew System::Windows::Forms::Label());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->txtPwd = (gcnew System::Windows::Forms::TextBox());
			this->bLogin = (gcnew System::Windows::Forms::Button());
			this->bRegister = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblUsr
			// 
			this->lblUsr->AutoSize = true;
			this->lblUsr->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lblUsr->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->lblUsr->Location = System::Drawing::Point(34, 19);
			this->lblUsr->Name = L"lblUsr";
			this->lblUsr->Size = System::Drawing::Size(90, 19);
			this->lblUsr->TabIndex = 0;
			this->lblUsr->Text = L"Username:";
			// 
			// lblPwd
			// 
			this->lblPwd->AutoSize = true;
			this->lblPwd->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lblPwd->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->lblPwd->Location = System::Drawing::Point(34, 55);
			this->lblPwd->Name = L"lblPwd";
			this->lblPwd->Size = System::Drawing::Size(90, 19);
			this->lblPwd->TabIndex = 1;
			this->lblPwd->Text = L"Password:";
			// 
			// txtUser
			// 
			this->txtUser->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtUser->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->txtUser->Location = System::Drawing::Point(130, 16);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(222, 26);
			this->txtUser->TabIndex = 2;
			// 
			// txtPwd
			// 
			this->txtPwd->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtPwd->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->txtPwd->Location = System::Drawing::Point(130, 52);
			this->txtPwd->Name = L"txtPwd";
			this->txtPwd->Size = System::Drawing::Size(222, 26);
			this->txtPwd->TabIndex = 3;
			this->txtPwd->UseSystemPasswordChar = true;
			// 
			// bLogin
			// 
			this->bLogin->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->bLogin->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->bLogin->Location = System::Drawing::Point(38, 105);
			this->bLogin->Name = L"bLogin";
			this->bLogin->Size = System::Drawing::Size(144, 31);
			this->bLogin->TabIndex = 4;
			this->bLogin->Text = L"Login";
			this->bLogin->UseVisualStyleBackColor = true;
			this->bLogin->Click += gcnew System::EventHandler(this, &MyForm::bLogin_Click);
			// 
			// bRegister
			// 
			this->bRegister->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->bRegister->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->bRegister->Location = System::Drawing::Point(208, 105);
			this->bRegister->Name = L"bRegister";
			this->bRegister->Size = System::Drawing::Size(144, 31);
			this->bRegister->TabIndex = 5;
			this->bRegister->Text = L"Register";
			this->bRegister->UseVisualStyleBackColor = true;
			this->bRegister->Click += gcnew System::EventHandler(this, &MyForm::bRegister_Click);
			// 
			// MyForm
			// 
			this->AcceptButton = this->bLogin;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(390, 153);
			this->Controls->Add(this->bRegister);
			this->Controls->Add(this->bLogin);
			this->Controls->Add(this->txtPwd);
			this->Controls->Add(this->txtUser);
			this->Controls->Add(this->lblPwd);
			this->Controls->Add(this->lblUsr);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Tag = L"";
			this->Text = L"ImHarker\'s Auth System";
			this->TopMost = true;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		Login();
	}
	private: System::Void bRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ rgForm = gcnew MyForm1;
		rgForm->Show();
	}
	};
}
