#pragma once

#include"MyForm.h"
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
	private: System::Windows::Forms::ComboBox^ cboSearch;
	private: System::Windows::Forms::Button^ button1;


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
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::DataGridView^ dataGridViewForm2;






	private: System::Windows::Forms::TextBox^ txtSearch;
	private: System::Windows::Forms::Button^ btnDelete;


	private: System::Windows::Forms::TextBox^ txtDelete;
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
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->dataGridViewForm2 = (gcnew System::Windows::Forms::DataGridView());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->txtDelete = (gcnew System::Windows::Forms::TextBox());
			this->txtRemove = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewUser = (gcnew System::Windows::Forms::DataGridView());
			this->cboSearch = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewForm2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewUser))->BeginInit();
			this->SuspendLayout();
			// 
			// btnInsert
			// 
			this->btnInsert->BackColor = System::Drawing::Color::White;
			this->btnInsert->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnInsert.Image")));
			this->btnInsert->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnInsert->Location = System::Drawing::Point(165, 48);
			this->btnInsert->Name = L"btnInsert";
			this->btnInsert->Size = System::Drawing::Size(178, 51);
			this->btnInsert->TabIndex = 0;
			this->btnInsert->Text = L"Insert";
			this->btnInsert->UseVisualStyleBackColor = false;
			this->btnInsert->Click += gcnew System::EventHandler(this, &MyForm2::btnInsert_Click);
			// 
			// btnDisplay
			// 
			this->btnDisplay->BackColor = System::Drawing::Color::White;
			this->btnDisplay->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDisplay.Image")));
			this->btnDisplay->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDisplay->Location = System::Drawing::Point(165, 220);
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
			this->btnRemove->Location = System::Drawing::Point(453, 499);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(178, 33);
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
			this->btnCancel->Location = System::Drawing::Point(165, 310);
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
			this->btnUpdate->Location = System::Drawing::Point(165, 129);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(178, 51);
			this->btnUpdate->TabIndex = 5;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &MyForm2::btnUpdate_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSearch->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSearch.Image")));
			this->btnSearch->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSearch->Location = System::Drawing::Point(453, 399);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(178, 33);
			this->btnSearch->TabIndex = 6;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MyForm2::btnSearch_Click);
			// 
			// dataGridViewForm2
			// 
			this->dataGridViewForm2->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridViewForm2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewForm2->Location = System::Drawing::Point(453, 48);
			this->dataGridViewForm2->Name = L"dataGridViewForm2";
			this->dataGridViewForm2->RowHeadersWidth = 51;
			this->dataGridViewForm2->RowTemplate->Height = 24;
			this->dataGridViewForm2->Size = System::Drawing::Size(965, 324);
			this->dataGridViewForm2->TabIndex = 7;
			// 
			// txtSearch
			// 
			this->txtSearch->BackColor = System::Drawing::Color::LightGray;
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSearch->Location = System::Drawing::Point(673, 447);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(318, 30);
			this->txtSearch->TabIndex = 9;
			this->txtSearch->TextChanged += gcnew System::EventHandler(this, &MyForm2::txtSearch_TextChanged);
			// 
			// btnDelete
			// 
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDelete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDelete.Image")));
			this->btnDelete->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDelete->Location = System::Drawing::Point(1035, 402);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(178, 33);
			this->btnDelete->TabIndex = 10;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm2::btnRemove_Click);
			// 
			// txtDelete
			// 
			this->txtDelete->BackColor = System::Drawing::Color::LightGray;
			this->txtDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDelete->Location = System::Drawing::Point(1243, 400);
			this->txtDelete->Name = L"txtDelete";
			this->txtDelete->Size = System::Drawing::Size(175, 30);
			this->txtDelete->TabIndex = 11;
			// 
			// txtRemove
			// 
			this->txtRemove->BackColor = System::Drawing::Color::LightGray;
			this->txtRemove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRemove->Location = System::Drawing::Point(673, 498);
			this->txtRemove->Name = L"txtRemove";
			this->txtRemove->Size = System::Drawing::Size(318, 30);
			this->txtRemove->TabIndex = 12;
			// 
			// dataGridViewUser
			// 
			this->dataGridViewUser->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridViewUser->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewUser->Location = System::Drawing::Point(453, 576);
			this->dataGridViewUser->Name = L"dataGridViewUser";
			this->dataGridViewUser->RowHeadersWidth = 51;
			this->dataGridViewUser->RowTemplate->Height = 24;
			this->dataGridViewUser->Size = System::Drawing::Size(965, 164);
			this->dataGridViewUser->TabIndex = 13;
			// 
			// cboSearch
			// 
			this->cboSearch->BackColor = System::Drawing::Color::LightGray;
			this->cboSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboSearch->FormattingEnabled = true;
			this->cboSearch->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"GS", L"CB", L"BT" });
			this->cboSearch->Location = System::Drawing::Point(673, 397);
			this->cboSearch->Name = L"cboSearch";
			this->cboSearch->Size = System::Drawing::Size(318, 33);
			this->cboSearch->TabIndex = 14;
			this->cboSearch->Text = L"Tìm kiếm thông thường";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(165, 750);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 51);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click_1);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1908, 941);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cboSearch);
			this->Controls->Add(this->dataGridViewUser);
			this->Controls->Add(this->txtRemove);
			this->Controls->Add(this->txtDelete);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->dataGridViewForm2);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnDisplay);
			this->Controls->Add(this->btnInsert);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->Text = L"UET";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewForm2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewUser))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void load() {
			DataTable^ sqlDt5 = gcnew DataTable();
			dataGridViewForm2->DataSource = sqlDt5;

		}
		 
			private: System::Void studentUpload() {
				DataTable^ sqlDt1 = gcnew DataTable();
				sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database1;
				sqlConn1->Open();
				sqlCmd1->Connection = sqlConn1;
				sqlCmd1->CommandText = "select *from new_table";
					sqlDd1 = sqlCmd1->ExecuteReader();
					sqlDt1->Load(sqlDd1);
					sqlDd1->Close();
				sqlConn1->Close();
				dataGridViewForm2->DataSource = sqlDt1;
			}
			/// <summary>
			/// Sinh vien gioi and xuat sac
			/// </summary>
		
			private: System::Void dSVgUpload() {
				DataTable^ sqlDt1 = gcnew DataTable();
				
				dataGridViewForm2->DataSource = '0';
				sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database1;
				sqlConn1->Open();
				sqlCmd1->Connection = sqlConn1;
				sqlCmd1->CommandText = "select * from new_table where Total >= '3.2'";
				sqlDd1 = sqlCmd1->ExecuteReader();
				sqlDt1->Load(sqlDd1);
				sqlDd1->Close();
				sqlConn1->Close();
				dataGridViewForm2->DataSource = sqlDt1;
			}
				   //danh sach canh bao hoc vu
		private: System::Void dSVcbUpload() {
			DataTable^ sqlDt1 = gcnew DataTable();

			sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database1;
			sqlConn1->Open();
			sqlCmd1->Connection = sqlConn1;
			sqlCmd1->CommandText = "select * from new_table where Total < '2.5'";
			sqlDd1 = sqlCmd1->ExecuteReader();
			sqlDt1->Load(sqlDd1);
			sqlDd1->Close();
			sqlConn1->Close();
			dataGridViewForm2->DataSource = sqlDt1;
		}
			   // tim kiem theo ma sinh vien
		private: System::Void searchUpload() {
			DataTable^ sqlDt1 = gcnew DataTable();
			sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database1;
			sqlConn1->Open();
			sqlCmd1->Connection = sqlConn1;
			sqlCmd1->CommandText = "select * from new_table where StudentID = '"+ txtSearch->Text +"'";
			sqlDd1 = sqlCmd1->ExecuteReader();
			sqlDt1->Load(sqlDd1);
			sqlDd1->Close();
			sqlConn1->Close();
			dataGridViewForm2->DataSource = sqlDt1;
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
	sqlConn3->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database1;
	sqlConn4->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database1;
	String^ delete2 = txtDelete->Text;

	if (delete2->Length == 0) {
		MessageBox::Show("Error", " Error", MessageBoxButtons::OK);
		return;
	}
	



	//Delete student
	try {
		sqlConn3->Open();
		System::Windows::Forms::DialogResult  iDelete;
		iDelete = MessageBox::Show("Comfirm if you want to delete student data", "Student Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (iDelete == System::Windows::Forms::DialogResult::Yes) {
			sqlQuery3 = "delete from new_table where StudentID = '" + txtDelete->Text + "'";
		}
		sqlQuery3 = "delete from new_table where StudentID = '" + txtDelete->Text + "'";
		sqlCmd3 = gcnew MySqlCommand(sqlQuery3, sqlConn3);
		sqlDd3 = sqlCmd3->ExecuteReader();
		sqlConn3->Close();
		sqlConn4->Open();
		sqlQuery4 = "delete from phuhuynh where StudentID = '" + txtDelete->Text + "'";
		sqlCmd4 = gcnew MySqlCommand(sqlQuery4, sqlConn4);
		sqlDd4 = sqlCmd4->ExecuteReader();
		sqlConn4->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erorr", "Erorr", MessageBoxButtons::OK);
	}
	finally {
		sqlConn3->Close();
		sqlConn4->Close();
	}
	MessageBox::Show("Deleted student data!");
	studentUpload();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn3->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database1;
	if (cboSearch->Text == "GS") {
		load();
		dSVgUpload();
	}
	else if (cboSearch->Text == "CB") {
		load();
		dSVcbUpload();
	}
	else {
		load();
		searchUpload();
	}

}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	load();
}
};
}
