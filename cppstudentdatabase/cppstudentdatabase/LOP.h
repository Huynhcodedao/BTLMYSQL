#pragma once

namespace cppstudentdatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for LOP
	/// </summary>
	public ref class LOP : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd;
		DataSet^ DS = gcnew DataSet();
		String^ server = "localhost";
		String^ username = "root";
		String^ password = "123456789";
		String^ database = "cppstudent";
		String^ sqlQuery;
		MySqlConnection^ sqlConn1 = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd1 = gcnew MySqlCommand();
		DataTable^ sqlDt1 = gcnew DataTable();
		MySqlDataAdapter^ sqlDta1 = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd1;
		DataSet^ DS1 = gcnew DataSet();
	private: System::Windows::Forms::TextBox^ txtFacultyName;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;

		   String^ sqlQuery1;
	public:
		LOP(void)
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
		~LOP()
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
	private: System::Windows::Forms::DataGridView^ dataGridviewLop;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ cboKhoa;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtMaLop;
	private: System::Windows::Forms::TextBox^ txtTenlop;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LOP::typeid));
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnSua = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridviewLop = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtFacultyName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cboKhoa = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtMaLop = (gcnew System::Windows::Forms::TextBox());
			this->txtTenlop = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewLop))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::SystemColors::Control;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExit->Location = System::Drawing::Point(975, 647);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(178, 51);
			this->btnExit->TabIndex = 30;
			this->btnExit->Text = L"Back";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &LOP::btnExit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::SystemColors::Control;
			this->btnDelete->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDelete.Image")));
			this->btnDelete->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDelete->Location = System::Drawing::Point(712, 647);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(178, 51);
			this->btnDelete->TabIndex = 29;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &LOP::btnDelete_Click);
			// 
			// btnSua
			// 
			this->btnSua->BackColor = System::Drawing::SystemColors::Control;
			this->btnSua->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSua->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSua.Image")));
			this->btnSua->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSua->Location = System::Drawing::Point(464, 647);
			this->btnSua->Name = L"btnSua";
			this->btnSua->Size = System::Drawing::Size(178, 51);
			this->btnSua->TabIndex = 28;
			this->btnSua->Text = L"Fix";
			this->btnSua->UseVisualStyleBackColor = false;
			this->btnSua->Click += gcnew System::EventHandler(this, &LOP::btnSua_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::SystemColors::Control;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.Image")));
			this->btnAdd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAdd->Location = System::Drawing::Point(203, 647);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(178, 51);
			this->btnAdd->TabIndex = 27;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &LOP::btnAdd_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::White;
			this->groupBox2->Controls->Add(this->dataGridviewLop);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(627, 182);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(784, 423);
			this->groupBox2->TabIndex = 26;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Danh sách";
			// 
			// dataGridviewLop
			// 
			this->dataGridviewLop->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridviewLop->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridviewLop->Location = System::Drawing::Point(6, 39);
			this->dataGridviewLop->Name = L"dataGridviewLop";
			this->dataGridviewLop->RowHeadersWidth = 51;
			this->dataGridviewLop->Size = System::Drawing::Size(772, 377);
			this->dataGridviewLop->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->txtFacultyName);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->cboKhoa);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtMaLop);
			this->groupBox1->Controls->Add(this->txtTenlop);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(203, 182);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(395, 423);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lựa chọn";
			// 
			// txtFacultyName
			// 
			this->txtFacultyName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFacultyName->Location = System::Drawing::Point(155, 249);
			this->txtFacultyName->Name = L"txtFacultyName";
			this->txtFacultyName->Size = System::Drawing::Size(208, 26);
			this->txtFacultyName->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(33, 252);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 23);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Tên Khoa";
			// 
			// cboKhoa
			// 
			this->cboKhoa->FormattingEnabled = true;
			this->cboKhoa->Location = System::Drawing::Point(155, 183);
			this->cboKhoa->Name = L"cboKhoa";
			this->cboKhoa->Size = System::Drawing::Size(208, 33);
			this->cboKhoa->TabIndex = 7;
			this->cboKhoa->SelectedIndexChanged += gcnew System::EventHandler(this, &LOP::cboKhoa_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(33, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 23);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Mã Khoa";
			// 
			// txtMaLop
			// 
			this->txtMaLop->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMaLop->Location = System::Drawing::Point(155, 61);
			this->txtMaLop->Name = L"txtMaLop";
			this->txtMaLop->Size = System::Drawing::Size(208, 26);
			this->txtMaLop->TabIndex = 1;
			// 
			// txtTenlop
			// 
			this->txtTenlop->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTenlop->Location = System::Drawing::Point(155, 122);
			this->txtTenlop->Name = L"txtTenlop";
			this->txtTenlop->Size = System::Drawing::Size(208, 26);
			this->txtTenlop->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(33, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 23);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Tên lớp";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(33, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 23);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Mã lớp";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(664, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 35);
			this->label1->TabIndex = 24;
			this->label1->Text = L"QUẢN LÝ LỚP";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(1227, 647);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 51);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LOP::button1_Click);
			// 
			// LOP
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
			this->Name = L"LOP";
			this->Text = L"LOP";
			this->Load += gcnew System::EventHandler(this, &LOP::LOP_Load);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewLop))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Load22() {
			DataTable^ sqlDt5 = gcnew DataTable();
			dataGridviewLop->DataSource = sqlDt5;

		}
		 private: System::Void Upload() {
			 Load22();
			 sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
			 sqlConn->Open();
			 sqlCmd->Connection = sqlConn;
			 sqlCmd->CommandText = "select *from class";
			 sqlDd = sqlCmd->ExecuteReader();
			 sqlDt->Load(sqlDd);
			 sqlDd->Close();
			 sqlConn->Close();
			 dataGridviewLop->DataSource = sqlDt;

		 }
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;

		try {
			sqlConn->Open();
		
			sqlQuery = "insert into class(ClassCode, ClassName, Facultycode, FacultyName)" + "value('" +txtMaLop->Text+"',N'"+txtTenlop->Text+"','"+cboKhoa->Text+ "','"+txtFacultyName->Text+"')";
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
		MessageBox::Show("Student Management System Update");
		Upload();
		
	}
		
private: System::Void LOP_Load(System::Object^ sender, System::EventArgs^ e) {
	
	sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	sqlConn1->Open();
	cboKhoa->Items->Clear();
	cboKhoa->Text = "";
	String^ aa = "Select Facultycode from faculty";
	sqlCmd1 = gcnew MySqlCommand(aa, sqlConn1);
	sqlDd1 = sqlCmd1->ExecuteReader();

	while (sqlDd1->Read()) {
		cboKhoa->Items->Add(sqlDd1->GetString(0));
	}

	sqlConn1->Close();
	Upload();
	
}
private: System::Void cboKhoa_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	
	try {
	sqlConn->Open();
	txtFacultyName->Clear();
	txtFacultyName->Text = "";
	String^ aa = "Select FacultyName from faculty where Facultycode ='"+cboKhoa->Text +"' ";
	sqlCmd = gcnew MySqlCommand(aa, sqlConn);
	sqlDd = sqlCmd->ExecuteReader();
	sqlDd->Read();
	String^ s = sqlDd->GetString(0);
	txtFacultyName->Text = s;
	sqlConn->Close();	
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn->Close();
	}

}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	String^ delete2 = txtMaLop->Text;
	if (delete2->Length == 0) {
		MessageBox::Show("Error", " Error", MessageBoxButtons::OK);
		return;
	}




	//Delete student
	try {
		sqlConn->Open();
		System::Windows::Forms::DialogResult  iDelete;
		iDelete = MessageBox::Show("Comfirm if you want to delete class data", "Student Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (iDelete == System::Windows::Forms::DialogResult::Yes) {
			sqlQuery = "delete from class where ClassCode = '" + txtMaLop->Text + "'";
		}
		sqlQuery = "delete from class where ClassCode = '" + txtMaLop->Text + "'";
		sqlCmd = gcnew MySqlCommand(sqlQuery, sqlConn);
		sqlDd = sqlCmd->ExecuteReader();
		sqlConn->Close();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Erorr", "Student Management System", MessageBoxButtons::OK);
	}
	finally {
		sqlConn->Close();
	}
	MessageBox::Show("Deleted class data!");
	Upload();

}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
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
		sqlQuery = "Update class Set ClassCode=N'" + txtMaLop->Text + "',ClassName='" +
			txtTenlop->Text + "',Facultycode='"+cboKhoa->Text+"',FacultyName='"+txtFacultyName->Text+"' where ClassCode='" + txtMaLop->Text + "' ";
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

	Upload();
}
};
}
