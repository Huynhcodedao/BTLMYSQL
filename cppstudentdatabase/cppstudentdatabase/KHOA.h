#pragma once
#include "LOP.h"
namespace cppstudentdatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for KHOA
	/// </summary>
	public ref class KHOA : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd;
		DataSet^ DS = gcnew DataSet();

		String^ sqlQuery;

		String^ server = "localhost";
		String^ username = "root";
		String^ password = "123456789"; String^ database = "cppstudent";
		MySqlConnection^ sqlConn1 = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd1 = gcnew MySqlCommand();
		DataTable^ sqlDt1 = gcnew DataTable();
		MySqlDataAdapter^ sqlDta1 = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd1;
	private: System::Windows::Forms::Button^ button1;
		   DataSet^ DS1 = gcnew DataSet();

	public:
		KHOA(void)
		{
			InitializeComponent(); CenterToScreen();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~KHOA()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnExit;
	protected:
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnSua;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridviewKhoa;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtKhoa;
	private: System::Windows::Forms::TextBox^ txtTenKhoa;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(KHOA::typeid));
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnSua = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridviewKhoa = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtKhoa = (gcnew System::Windows::Forms::TextBox());
			this->txtTenKhoa = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewKhoa))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExit->Location = System::Drawing::Point(981, 702);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(178, 51);
			this->btnExit->TabIndex = 23;
			this->btnExit->Text = L"Back";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &KHOA::btnExit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDelete.Image")));
			this->btnDelete->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDelete->Location = System::Drawing::Point(704, 702);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(178, 51);
			this->btnDelete->TabIndex = 22;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &KHOA::btnDelete_Click);
			// 
			// btnSua
			// 
			this->btnSua->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSua->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSua.Image")));
			this->btnSua->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSua->Location = System::Drawing::Point(421, 702);
			this->btnSua->Name = L"btnSua";
			this->btnSua->Size = System::Drawing::Size(178, 51);
			this->btnSua->TabIndex = 21;
			this->btnSua->Text = L"Fix";
			this->btnSua->UseVisualStyleBackColor = true;
			this->btnSua->Click += gcnew System::EventHandler(this, &KHOA::btnSua_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.Image")));
			this->btnAdd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAdd->Location = System::Drawing::Point(143, 702);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(178, 51);
			this->btnAdd->TabIndex = 20;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &KHOA::btnAdd_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridviewKhoa);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(579, 144);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(851, 521);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Danh sách";
			// 
			// dataGridviewKhoa
			// 
			this->dataGridviewKhoa->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridviewKhoa->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridviewKhoa->Location = System::Drawing::Point(6, 45);
			this->dataGridviewKhoa->Name = L"dataGridviewKhoa";
			this->dataGridviewKhoa->RowHeadersWidth = 51;
			this->dataGridviewKhoa->Size = System::Drawing::Size(839, 462);
			this->dataGridviewKhoa->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtKhoa);
			this->groupBox1->Controls->Add(this->txtTenKhoa);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(143, 144);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(416, 521);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lựa chọn";
			// 
			// txtKhoa
			// 
			this->txtKhoa->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtKhoa->Location = System::Drawing::Point(129, 49);
			this->txtKhoa->Name = L"txtKhoa";
			this->txtKhoa->Size = System::Drawing::Size(257, 26);
			this->txtKhoa->TabIndex = 1;
			// 
			// txtTenKhoa
			// 
			this->txtTenKhoa->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTenKhoa->Location = System::Drawing::Point(129, 96);
			this->txtTenKhoa->Name = L"txtTenKhoa";
			this->txtTenKhoa->Size = System::Drawing::Size(257, 26);
			this->txtTenKhoa->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(19, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 23);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Tên khoa";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 23);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Mã khoa";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(664, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(252, 35);
			this->label1->TabIndex = 17;
			this->label1->Text = L"QUẢN LÝ KHOA";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(1246, 702);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 51);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &KHOA::button1_Click);
			// 
			// KHOA
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1873, 1051);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnSua);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"KHOA";
			this->Text = L"KHOA";
			this->Load += gcnew System::EventHandler(this, &KHOA::KHOA_Load);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewKhoa))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Load22() {
		DataTable^ sqlDt5 = gcnew DataTable();
		dataGridviewKhoa->DataSource = sqlDt5;
		
	}
		 private: System::Void KhoaUpload() {
			 Load22();
			 sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
			 sqlConn->Open();
			 sqlCmd->Connection = sqlConn;
			 sqlCmd->CommandText = "select *from faculty";
			 sqlDd = sqlCmd->ExecuteReader();
			 sqlDt->Load(sqlDd);
			 sqlDd->Close();
			 sqlConn->Close();
			 dataGridviewKhoa->DataSource = sqlDt;
		
		 }
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
		try {
			sqlConn->Open();
			sqlQuery = "insert into faculty( Facultycode, FacultyName)" + "value('" +txtKhoa->Text+"','"+txtTenKhoa->Text + "')";
			
			sqlCmd = gcnew MySqlCommand(sqlQuery, sqlConn);
			sqlDd = sqlCmd->ExecuteReader();MessageBox::Show("Student Management System Update");
			sqlConn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally {
			sqlConn->Close();
		}
		
		KhoaUpload();

	}
private: System::Void KHOA_Load(System::Object^ sender, System::EventArgs^ e) {
	KhoaUpload();
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	String^ delete2 = txtKhoa->Text;
	if (delete2->Length == 0) {
		MessageBox::Show("Error", " Error", MessageBoxButtons::OK);
		return;
	}




	//Delete student
	try {
		sqlConn->Open();
		System::Windows::Forms::DialogResult  iDelete;
		iDelete = MessageBox::Show("Comfirm if you want to delete student data", "Student Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (iDelete == System::Windows::Forms::DialogResult::Yes) {
			sqlQuery = "delete from faculty where Facultycode = '" + txtKhoa->Text + "'";
		}
		sqlQuery = "delete from faculty where Facultycode = '" + txtKhoa->Text + "'";
		sqlCmd = gcnew MySqlCommand(sqlQuery, sqlConn);
		sqlDd = sqlCmd->ExecuteReader();MessageBox::Show("Deleted faculty data!");
		sqlConn->Close();
		
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erorr", "Erorr", MessageBoxButtons::OK);
	}
	finally {
		sqlConn->Close();
	}
	
	Load22();
	KhoaUpload();

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult  iExit;
	iExit = MessageBox::Show("Comfirm if you want to cancel", "Student Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (iExit == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
private: System::Void btnSua_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	try {
		//GVCode, TeacherName, Gender, DOB, Email, Phone, PL
		sqlConn->Open();
		sqlQuery = "Update faculty Set Facultycode=N'" + txtKhoa->Text + "',FacultyName='" +
			txtTenKhoa->Text + "' where Facultycode='" + txtKhoa->Text + "' ";
		sqlCmd = gcnew MySqlCommand(sqlQuery, sqlConn);
		sqlDd = sqlCmd->ExecuteReader();
		sqlConn->Close();
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn->Close();
	}

	KhoaUpload();
}
};
}
