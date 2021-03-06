#include "MyForm.h"
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	UserAuthSystemWinFormsCpp::MyForm form; //Name of project, name of form, delete hyphen //Modify Example71
	Application::Run(% form);
}

std::string sha(std::string str) {
	SHA256 sha;
	sha.update(str);
	uint8_t* digest = sha.digest();

	return SHA256::toString(digest);

	delete[] digest;
}

void UserAuthSystemWinFormsCpp::MyForm::Login() {
	std::ifstream is;
	std::ofstream os;
	System::String^ password = "";
	std::string pwdcheck = "";
	System::String^ user;
	int salt;

	user = txtUser->Text;
	password = txtPwd->Text;
	std::string username = msclr::interop::marshal_as<std::string>(user);
	std::string pwd = msclr::interop::marshal_as<std::string>(password);

	if (username == "" || pwd == "") {
		MessageBox::Show(this, "Invalid Username/Password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
		return;
	}

	is.open("./Users/" + username);
	if (!is) {
		MessageBox::Show(this, "Login failed!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
	} else {
		is >> salt >> pwdcheck;
		if (sha(pwd + std::to_string(salt)) != pwdcheck) {
			MessageBox::Show(this, "Login failed!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
		} else {
			MessageBox::Show(this, "Successfully logged in!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information, MessageBoxDefaultButton::Button1);
		}
		is.close();
	}

}
