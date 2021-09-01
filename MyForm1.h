#pragma once
#include <fstream>
#include <string>
#include <time.h>
#include <msclr\marshal_cppstd.h>
#include "sha256.h"
namespace UserAuthSystemWinFormsCpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form {
	public:
		std::string sha(std::string str) {
			SHA256 sha;
			sha.update(str);
			uint8_t* digest = sha.digest();

			return SHA256::toString(digest);

			delete[] digest;
		}
		MyForm1(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bRegister;
	protected:

	protected:
	private: System::Windows::Forms::Label^ lblUsr;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtUsr;
	private: System::Windows::Forms::TextBox^ txtPwd;
	private: System::Windows::Forms::TextBox^ txtPwdCheck;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->bRegister = (gcnew System::Windows::Forms::Button());
			this->lblUsr = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtUsr = (gcnew System::Windows::Forms::TextBox());
			this->txtPwd = (gcnew System::Windows::Forms::TextBox());
			this->txtPwdCheck = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// bRegister
			// 
			this->bRegister->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->bRegister->Location = System::Drawing::Point(34, 144);
			this->bRegister->Name = L"bRegister";
			this->bRegister->Size = System::Drawing::Size(326, 33);
			this->bRegister->TabIndex = 0;
			this->bRegister->Text = L"REGISTER NEW USER";
			this->bRegister->UseVisualStyleBackColor = true;
			this->bRegister->Click += gcnew System::EventHandler(this, &MyForm1::bRegister_Click);
			// 
			// lblUsr
			// 
			this->lblUsr->AutoSize = true;
			this->lblUsr->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->lblUsr->Location = System::Drawing::Point(30, 30);
			this->lblUsr->Name = L"lblUsr";
			this->lblUsr->Size = System::Drawing::Size(90, 19);
			this->lblUsr->TabIndex = 1;
			this->lblUsr->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 19);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password:";
			// 
			// txtUsr
			// 
			this->txtUsr->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->txtUsr->Location = System::Drawing::Point(126, 27);
			this->txtUsr->Name = L"txtUsr";
			this->txtUsr->Size = System::Drawing::Size(234, 26);
			this->txtUsr->TabIndex = 4;
			// 
			// txtPwd
			// 
			this->txtPwd->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->txtPwd->Location = System::Drawing::Point(126, 59);
			this->txtPwd->Name = L"txtPwd";
			this->txtPwd->Size = System::Drawing::Size(234, 26);
			this->txtPwd->TabIndex = 5;
			this->txtPwd->UseSystemPasswordChar = true;
			// 
			// txtPwdCheck
			// 
			this->txtPwdCheck->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(0)));
			this->txtPwdCheck->Location = System::Drawing::Point(126, 94);
			this->txtPwdCheck->Name = L"txtPwdCheck";
			this->txtPwdCheck->Size = System::Drawing::Size(234, 26);
			this->txtPwdCheck->TabIndex = 6;
			this->txtPwdCheck->UseSystemPasswordChar = true;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(390, 199);
			this->Controls->Add(this->txtPwdCheck);
			this->Controls->Add(this->txtPwd);
			this->Controls->Add(this->txtUsr);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblUsr);
			this->Controls->Add(this->bRegister);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->TopMost = true;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		std::ifstream is;
		std::ofstream os;
		System::String^ password = "";
		System::String^ passwordcheck = "";
		System::String^ user;
		int salt;

		user = txtUsr->Text;
		password = txtPwd->Text;
		passwordcheck = txtPwdCheck->Text;
		std::string username = msclr::interop::marshal_as<std::string>(user);
		std::string pwd = msclr::interop::marshal_as<std::string>(password);
		std::string pwdcheck = msclr::interop::marshal_as<std::string>(passwordcheck);

		if (username == "" || pwd == "") {
			MessageBox::Show(this, "Invalid Username/Password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
			return;
		} else if (pwdcheck != pwd) {
			MessageBox::Show(this, "Passwords do not match!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
			return;
		}


		is.open("./Users/" + username);
		if (!is) {
			os.open("./Users/" + username);
			salt = time(0);
			os << salt << std::endl;
			os << sha(pwd + std::to_string(salt));
			os.close();
			MessageBox::Show(this, "Successfully registered!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information, MessageBoxDefaultButton::Button1);
			this->Close();
		} else {
			is.close();
			MessageBox::Show(this, "Register failed!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
		}
	}
	};
}
