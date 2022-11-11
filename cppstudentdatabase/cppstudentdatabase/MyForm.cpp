#include"Login.h"
#include "MyForm2.h"
#include "MyForm.h"
#include "Register.h"
#include"KHOA.h"
#include "GIANGVIEN.h"
#include "LOP.h"
#include "MONHOC.h"
#include "QLDIEM.h"
#include "QuanTTSV.h"
#include "TiemDiemSV.h"
#include "DSTHILAI.h"
#include "DIEMHOCLAI.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	while (true) {
		cppstudentdatabase::Login loginForm;
		Application::Run(% loginForm);
		
		if (loginForm.switchToRegister) {
			cppstudentdatabase::Register registerForm;
			Application::Run(% registerForm);
			if (registerForm.swicthToLogin) {
				continue;
			}
			else {
				break;
			}
		}
		else {
			break;
		}
	}

}

