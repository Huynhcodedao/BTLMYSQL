#pragma once
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
namespace cppstudentdatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd;
		DataSet^ DS = gcnew DataSet();
		//userUpdate
		MySqlConnection^ sqlConn1 = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd1 = gcnew MySqlCommand();
		DataTable^ sqlDt1 = gcnew DataTable();
		MySqlDataAdapter^ sqlDta1 = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd1;
		DataSet^ DS1 = gcnew DataSet();
		//Remove user
		MySqlConnection^ sqlConn2 = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd2 = gcnew MySqlCommand();
		DataTable^ sqlDt2 = gcnew DataTable();
		MySqlDataAdapter^ sqlDta2 = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd2;
		DataSet^ DS2 = gcnew DataSet();
		String^ sqlQuery2;
		//Xoa student
		MySqlConnection^ sqlConn3 = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd3 = gcnew MySqlCommand();
		DataTable^ sqlDt3 = gcnew DataTable();
		MySqlDataAdapter^ sqlDta3 = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd3;
		DataSet^ DS3 = gcnew DataSet();
		String^ sqlQuery3;
		//Xoa du lieu phu huynh
		MySqlConnection^ sqlConn4 = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd4 = gcnew MySqlCommand();
		DataTable^ sqlDt4 = gcnew DataTable();
		MySqlDataAdapter^ sqlDta4 = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd4;
		DataSet^ DS4 = gcnew DataSet();
		String^ sqlQuery4;
		String^ server = "localhost";
		String^ username = "root";
		String^ password = "123456789"; 
		String^ database1 = "projectstudent";

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;


		   String^ database2 = "database";
	public:
		MyForm2(void)
		{
			InitializeComponent();
			CenterToScreen();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnInsert;
	private: System::Windows::Forms::Button^ btnDisplay;
	protected:

	protected:


	private: System::Windows::Forms::Button^ btnRemove;





	private: System::Windows::Forms::Button^ btnCancel;

	private: System::Windows::Forms::Button^ btnUpdate;













	private: System::Windows::Forms::TextBox^ txtRemove;




	private: System::Windows::Forms::DataGridView^ dataGridViewUser;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->btnInsert = (gcnew System::Windows::Forms::Button());
			this->btnDisplay = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->txtRemove = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewUser = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewUser))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnInsert
			// 
			this->btnInsert->BackColor = System::Drawing::Color::White;
			this->btnInsert->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnInsert->Location = System::Drawing::Point(1251, 933);
			this->btnInsert->Name = L"btnInsert";
			this->btnInsert->Size = System::Drawing::Size(84, 10);
			this->btnInsert->TabIndex = 0;
			this->btnInsert->Text = L"Insert";
			this->btnInsert->UseVisualStyleBackColor = false;
			this->btnInsert->Click += gcnew System::EventHandler(this, &MyForm2::btnInsert_Click);
			// 
			// btnDisplay
			// 
			this->btnDisplay->BackColor = System::Drawing::Color::White;
			this->btnDisplay->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDisplay->Location = System::Drawing::Point(1135, 202);
			this->btnDisplay->Name = L"btnDisplay";
			this->btnDisplay->Size = System::Drawing::Size(178, 51);
			this->btnDisplay->TabIndex = 1;
			this->btnDisplay->Text = L"Display";
			this->btnDisplay->UseVisualStyleBackColor = false;
			this->btnDisplay->Click += gcnew System::EventHandler(this, &MyForm2::btnResult_Click);
			// 
			// btnRemove
			// 
			this->btnRemove->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRemove->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRemove.Image")));
			this->btnRemove->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRemove->Location = System::Drawing::Point(483, 59);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(162, 33);
			this->btnRemove->TabIndex = 2;
			this->btnRemove->Text = L"Remove user";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &MyForm2::btnDelete_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::White;
			this->btnCancel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancel.Image")));
			this->btnCancel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCancel->Location = System::Drawing::Point(1243, 674);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(178, 51);
			this->btnCancel->TabIndex = 4;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MyForm2::btnCancel_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::White;
			this->btnUpdate->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnUpdate.Image")));
			this->btnUpdate->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnUpdate->Location = System::Drawing::Point(343, 390);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(178, 51);
			this->btnUpdate->TabIndex = 5;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &MyForm2::btnUpdate_Click);
			// 
			// txtRemove
			// 
			this->txtRemove->BackColor = System::Drawing::Color::LightGray;
			this->txtRemove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRemove->Location = System::Drawing::Point(483, 110);
			this->txtRemove->Name = L"txtRemove";
			this->txtRemove->Size = System::Drawing::Size(162, 30);
			this->txtRemove->TabIndex = 12;
			this->txtRemove->TextChanged += gcnew System::EventHandler(this, &MyForm2::txtRemove_TextChanged);
			// 
			// dataGridViewUser
			// 
			this->dataGridViewUser->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridViewUser->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewUser->Location = System::Drawing::Point(18, 59);
			this->dataGridViewUser->Name = L"dataGridViewUser";
			this->dataGridViewUser->RowHeadersWidth = 51;
			this->dataGridViewUser->RowTemplate->Height = 24;
			this->dataGridViewUser->Size = System::Drawing::Size(438, 401);
			this->dataGridViewUser->TabIndex = 13;
			this->dataGridViewUser->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm2::dataGridViewUser_CellContentClick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(155, 674);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 51);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(44, 46);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(178, 51);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Faculty";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(343, 215);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(178, 51);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Score improvement";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(44, 130);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(178, 51);
			this->button4->TabIndex = 16;
			this->button4->Text = L"\r\nLecturers";
			this->button4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(343, 130);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(178, 51);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Point management";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(44, 300);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(178, 51);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Student";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(44, 215);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(178, 51);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Class";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(44, 390);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(178, 51);
			this->button8->TabIndex = 23;
			this->button8->Text = L"Find points";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(343, 46);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(178, 51);
			this->button9->TabIndex = 22;
			this->button9->Text = L"Subject";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm2::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->Location = System::Drawing::Point(343, 300);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(178, 51);
			this->button10->TabIndex = 24;
			this->button10->Text = L"Retest";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm2::button10_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->btnUpdate);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Location = System::Drawing::Point(155, 129);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(582, 479);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"MENU";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridViewUser);
			this->groupBox2->Controls->Add(this->btnRemove);
			this->groupBox2->Controls->Add(this->txtRemove);
			this->groupBox2->Location = System::Drawing::Point(756, 128);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(665, 480);
			this->groupBox2->TabIndex = 26;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"USER";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1908, 941);
			this->Controls->Add(this->btnInsert);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->btnDisplay);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnCancel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->Text = L"UET";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewUser))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void load() {
			

		}
		 
			private: System::Void studentUpload() {
			
			}
			/// <summary>
			/// Sinh vien gioi and xuat sac
			/// </summary>
		
			private: System::Void dSVgUpload() {
			
			}
				   //danh sach canh bao hoc vu
		private: System::Void dSVcbUpload() {
	
		}
			   // tim kiem theo ma sinh vien
		private: System::Void searchUpload() {
			
		}
		private: System::Void userUpload() {
			DataTable^ sqlDt = gcnew DataTable();
			sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database2;
			sqlConn->Open();
			sqlCmd->Connection = sqlConn;
			sqlCmd->CommandText = "select *from edata";
			sqlDd = sqlCmd->ExecuteReader();
			sqlDt->Load(sqlDd);
			sqlDd->Close();
			sqlConn->Close();
			dataGridViewUser->DataSource = sqlDt;
		}
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		userUpload();
	}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btnInsert_Click(System::Object^ sender, System::EventArgs^ e) {
	
	MyForm^ f3 = gcnew MyForm();
	f3->ShowDialog();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //public: bool switchBack1 = false;
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	//this->switchBack1 = true;
	//this->Close();
	this->Hide();
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Hide();
	MyForm^ f4 = gcnew MyForm();
	f4->ShowDialog();
}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult  iExit;
	iExit = MessageBox::Show("Comfirm if you want to cancel", "Student Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (iExit == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
private: System::Void btnResult_Click(System::Object^ sender, System::EventArgs^ e) {

	userUpload();
	studentUpload();
	
}
private: System::Void txtSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   //Remove user
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn2->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database2;
	String^ delete1 = txtRemove->Text;
	if (delete1->Length == 0 ) {
		MessageBox::Show("Error", "Student Management System", MessageBoxButtons::OK);
		return;
	}
	try {
		sqlConn2->Open();

		System::Windows::Forms::DialogResult  iRemove;
		iRemove = MessageBox::Show("Comfirm if you want to remove user", "Student Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (iRemove == System::Windows::Forms::DialogResult::Yes) {
			sqlQuery2 = "delete from edata where Eid = '" + txtRemove->Text + "'";
		}
		sqlCmd2 = gcnew MySqlCommand(sqlQuery2, sqlConn2);
		sqlDd2 = sqlCmd2->ExecuteReader();
		sqlConn2->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erorr","Student Management System", MessageBoxButtons::OK);
	}
	finally {
		sqlConn2->Close();
	}
	MessageBox::Show("Access Permission removed access permission! ");
	userUpload();
}
	   //Delete
private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	load();
}
private: System::Void dataGridViewForm2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridViewUser_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void txtDelete_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtRemove_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	KHOA^ f3 = gcnew KHOA();
	f3->ShowDialog();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	LOP^ f1 = gcnew LOP();
	f1->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	GIANGVIEN^ f2 = gcnew GIANGVIEN();
	f2->ShowDialog();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	QuanTTSV^ f4 = gcnew QuanTTSV();
	f4->ShowDialog();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	MONHOC^ f6 = gcnew MONHOC();
	f6->ShowDialog();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	QLDIEM^ f5 = gcnew QLDIEM();
	f5->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	DIEMHOCLAI^ f7 = gcnew DIEMHOCLAI();
	f7->ShowDialog();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	TiemDiemSV^ f8 = gcnew TiemDiemSV();
	f8->ShowDialog();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	DSTHILAI^ f9 = gcnew DSTHILAI();
	f9->ShowDialog();
}
};
}
