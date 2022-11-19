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
	/// Summary for QuanTTSV
	/// </summary>
	public ref class QuanTTSV : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd;
		DataSet^ DS = gcnew DataSet(); String^ sqlQuery;
		String^ server = "localhost";
		String^ username = "root";
		String^ password = "123456789";
		String^ database = "cppstudent";
		MySqlConnection^ sqlConn1 = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd1 = gcnew MySqlCommand();
		DataTable^ sqlDt1 = gcnew DataTable();
		MySqlDataAdapter^ sqlDta1 = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd1;
		DataSet^ DS1 = gcnew DataSet(); String^ sqlQuery1;
		MySqlConnection^ sqlConn2 = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd2 = gcnew MySqlCommand();
		DataTable^ sqlDt2 = gcnew DataTable();
		MySqlDataAdapter^ sqlDta2 = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd2;
		DataSet^ DS2 = gcnew DataSet(); String^ sqlQuery2;

		MySqlConnection^ sqlConn3 = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd3 = gcnew MySqlCommand();
		DataTable^ sqlDt3 = gcnew DataTable();
		MySqlDataAdapter^ sqlDta3 = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd3;
		DataSet^ DS3 = gcnew DataSet(); String^ sqlQuery3;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtSDT;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ btnBAck;
	private: System::Windows::Forms::TextBox^ txtMaLop;
	public:
		QuanTTSV(void)
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
		~QuanTTSV()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox3;
	protected:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ cboKhoahoc;
	private: System::Windows::Forms::ComboBox^ cboLop;
	private: System::Windows::Forms::Button^ btnThoat;
	private: System::Windows::Forms::Button^ btnXoa;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::MaskedTextBox^ mskNgaySinh;
	private: System::Windows::Forms::ComboBox^ cboGioiTinh;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtDiaChi;
	private: System::Windows::Forms::TextBox^ txtHoTen;
	private: System::Windows::Forms::TextBox^ txtMaSV;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridviewDSSV;
	private: System::Windows::Forms::Button^ btnSua;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(QuanTTSV::typeid));
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cboKhoahoc = (gcnew System::Windows::Forms::ComboBox());
			this->cboLop = (gcnew System::Windows::Forms::ComboBox());
			this->btnThoat = (gcnew System::Windows::Forms::Button());
			this->btnXoa = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtSDT = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtMaLop = (gcnew System::Windows::Forms::TextBox());
			this->mskNgaySinh = (gcnew System::Windows::Forms::MaskedTextBox());
			this->cboGioiTinh = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtDiaChi = (gcnew System::Windows::Forms::TextBox());
			this->txtHoTen = (gcnew System::Windows::Forms::TextBox());
			this->txtMaSV = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridviewDSSV = (gcnew System::Windows::Forms::DataGridView());
			this->btnSua = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBAck = (gcnew System::Windows::Forms::Button());
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewDSSV))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->cboKhoahoc);
			this->groupBox3->Controls->Add(this->cboLop);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(128, 155);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(1296, 57);
			this->groupBox3->TabIndex = 28;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Tìm kiếm";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &QuanTTSV::groupBox3_Enter);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(769, 21);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 17);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Lớp học";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(497, 21);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 17);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Khoa";
			// 
			// cboKhoahoc
			// 
			this->cboKhoahoc->BackColor = System::Drawing::Color::Gainsboro;
			this->cboKhoahoc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cboKhoahoc->FormattingEnabled = true;
			this->cboKhoahoc->Location = System::Drawing::Point(583, 16);
			this->cboKhoahoc->Margin = System::Windows::Forms::Padding(4);
			this->cboKhoahoc->Name = L"cboKhoahoc";
			this->cboKhoahoc->Size = System::Drawing::Size(159, 33);
			this->cboKhoahoc->TabIndex = 25;
			this->cboKhoahoc->SelectedIndexChanged += gcnew System::EventHandler(this, &QuanTTSV::cboKhoahoc_SelectedIndexChanged);
			// 
			// cboLop
			// 
			this->cboLop->BackColor = System::Drawing::Color::Gainsboro;
			this->cboLop->FormattingEnabled = true;
			this->cboLop->Location = System::Drawing::Point(853, 16);
			this->cboLop->Margin = System::Windows::Forms::Padding(4);
			this->cboLop->Name = L"cboLop";
			this->cboLop->Size = System::Drawing::Size(161, 33);
			this->cboLop->TabIndex = 24;
			this->cboLop->SelectedIndexChanged += gcnew System::EventHandler(this, &QuanTTSV::cboLop_SelectedIndexChanged);
			// 
			// btnThoat
			// 
			this->btnThoat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThoat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnThoat.Image")));
			this->btnThoat->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnThoat->Location = System::Drawing::Point(1246, 722);
			this->btnThoat->Margin = System::Windows::Forms::Padding(4);
			this->btnThoat->Name = L"btnThoat";
			this->btnThoat->Size = System::Drawing::Size(178, 51);
			this->btnThoat->TabIndex = 27;
			this->btnThoat->Text = L"Cancel";
			this->btnThoat->UseVisualStyleBackColor = true;
			this->btnThoat->Click += gcnew System::EventHandler(this, &QuanTTSV::btnThoat_Click);
			// 
			// btnXoa
			// 
			this->btnXoa->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnXoa->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnXoa.Image")));
			this->btnXoa->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnXoa->Location = System::Drawing::Point(725, 722);
			this->btnXoa->Margin = System::Windows::Forms::Padding(4);
			this->btnXoa->Name = L"btnXoa";
			this->btnXoa->Size = System::Drawing::Size(178, 51);
			this->btnXoa->TabIndex = 26;
			this->btnXoa->Text = L"Delete";
			this->btnXoa->UseVisualStyleBackColor = true;
			this->btnXoa->Click += gcnew System::EventHandler(this, &QuanTTSV::btnXoa_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txtSDT);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->txtEmail);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->txtMaLop);
			this->groupBox2->Controls->Add(this->mskNgaySinh);
			this->groupBox2->Controls->Add(this->cboGioiTinh);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->txtDiaChi);
			this->groupBox2->Controls->Add(this->txtHoTen);
			this->groupBox2->Controls->Add(this->txtMaSV);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(128, 220);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(359, 437);
			this->groupBox2->TabIndex = 23;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Thông tin chi tiết";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &QuanTTSV::groupBox2_Enter);
			// 
			// txtSDT
			// 
			this->txtSDT->Location = System::Drawing::Point(158, 374);
			this->txtSDT->Margin = System::Windows::Forms::Padding(4);
			this->txtSDT->Name = L"txtSDT";
			this->txtSDT->Size = System::Drawing::Size(181, 30);
			this->txtSDT->TabIndex = 29;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(11, 364);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 23);
			this->label11->TabIndex = 28;
			this->label11->Text = L"SDT";
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(158, 333);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(181, 30);
			this->txtEmail->TabIndex = 27;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(11, 328);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 23);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Email";
			// 
			// txtMaLop
			// 
			this->txtMaLop->Location = System::Drawing::Point(158, 288);
			this->txtMaLop->Margin = System::Windows::Forms::Padding(4);
			this->txtMaLop->Name = L"txtMaLop";
			this->txtMaLop->Size = System::Drawing::Size(181, 30);
			this->txtMaLop->TabIndex = 25;
			// 
			// mskNgaySinh
			// 
			this->mskNgaySinh->Location = System::Drawing::Point(158, 141);
			this->mskNgaySinh->Margin = System::Windows::Forms::Padding(4);
			this->mskNgaySinh->Mask = L"00/00/0000";
			this->mskNgaySinh->Name = L"mskNgaySinh";
			this->mskNgaySinh->Size = System::Drawing::Size(181, 30);
			this->mskNgaySinh->TabIndex = 3;
			// 
			// cboGioiTinh
			// 
			this->cboGioiTinh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cboGioiTinh->FormattingEnabled = true;
			this->cboGioiTinh->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Nam", L"Nữ", L"Chưa xác định" });
			this->cboGioiTinh->Location = System::Drawing::Point(158, 185);
			this->cboGioiTinh->Margin = System::Windows::Forms::Padding(4);
			this->cboGioiTinh->Name = L"cboGioiTinh";
			this->cboGioiTinh->Size = System::Drawing::Size(181, 33);
			this->cboGioiTinh->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(11, 283);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 23);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Mã Lớp";
			// 
			// txtDiaChi
			// 
			this->txtDiaChi->Location = System::Drawing::Point(158, 245);
			this->txtDiaChi->Margin = System::Windows::Forms::Padding(4);
			this->txtDiaChi->Name = L"txtDiaChi";
			this->txtDiaChi->Size = System::Drawing::Size(181, 30);
			this->txtDiaChi->TabIndex = 5;
			// 
			// txtHoTen
			// 
			this->txtHoTen->Location = System::Drawing::Point(158, 103);
			this->txtHoTen->Margin = System::Windows::Forms::Padding(4);
			this->txtHoTen->Name = L"txtHoTen";
			this->txtHoTen->Size = System::Drawing::Size(181, 30);
			this->txtHoTen->TabIndex = 2;
			// 
			// txtMaSV
			// 
			this->txtMaSV->Location = System::Drawing::Point(158, 54);
			this->txtMaSV->Margin = System::Windows::Forms::Padding(4);
			this->txtMaSV->Name = L"txtMaSV";
			this->txtMaSV->Size = System::Drawing::Size(181, 30);
			this->txtMaSV->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(11, 178);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 23);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Giới  tính";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(11, 238);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 23);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Địa chỉ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(11, 101);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 23);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Họ Tên";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(11, 137);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 23);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Ngày sinh";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 54);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 23);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Mã Sinh Viên";
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.Image")));
			this->btnAdd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAdd->Location = System::Drawing::Point(158, 722);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(178, 51);
			this->btnAdd->TabIndex = 24;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &QuanTTSV::btnAdd_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridviewDSSV);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(495, 219);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(929, 438);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Danh sách";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &QuanTTSV::groupBox1_Enter);
			// 
			// dataGridviewDSSV
			// 
			this->dataGridviewDSSV->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridviewDSSV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridviewDSSV->Location = System::Drawing::Point(11, 51);
			this->dataGridviewDSSV->Margin = System::Windows::Forms::Padding(4);
			this->dataGridviewDSSV->Name = L"dataGridviewDSSV";
			this->dataGridviewDSSV->RowHeadersWidth = 51;
			this->dataGridviewDSSV->Size = System::Drawing::Size(902, 374);
			this->dataGridviewDSSV->TabIndex = 0;
			// 
			// btnSua
			// 
			this->btnSua->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSua->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSua.Image")));
			this->btnSua->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSua->Location = System::Drawing::Point(441, 722);
			this->btnSua->Margin = System::Windows::Forms::Padding(4);
			this->btnSua->Name = L"btnSua";
			this->btnSua->Size = System::Drawing::Size(178, 51);
			this->btnSua->TabIndex = 25;
			this->btnSua->Text = L"Fix";
			this->btnSua->UseVisualStyleBackColor = true;
			this->btnSua->Click += gcnew System::EventHandler(this, &QuanTTSV::btnSua_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(536, 76);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(456, 38);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Quản Lý Thông Tin Sinh Viên";
			// 
			// btnBAck
			// 
			this->btnBAck->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBAck->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBAck.Image")));
			this->btnBAck->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnBAck->Location = System::Drawing::Point(999, 722);
			this->btnBAck->Margin = System::Windows::Forms::Padding(4);
			this->btnBAck->Name = L"btnBAck";
			this->btnBAck->Size = System::Drawing::Size(178, 51);
			this->btnBAck->TabIndex = 29;
			this->btnBAck->Text = L"Back";
			this->btnBAck->UseVisualStyleBackColor = true;
			this->btnBAck->Click += gcnew System::EventHandler(this, &QuanTTSV::btnBAck_Click);
			// 
			// QuanTTSV
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1873, 1051);
			this->Controls->Add(this->btnBAck);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->btnThoat);
			this->Controls->Add(this->btnXoa);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnSua);
			this->Controls->Add(this->label1);
			this->Name = L"QuanTTSV";
			this->Text = L"QuanTTSV";
			this->Load += gcnew System::EventHandler(this, &QuanTTSV::QuanTTSV_Load);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewDSSV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void userUpload() {
			DataTable^ sqlDt = gcnew DataTable();
			sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
			sqlConn->Open();
			sqlCmd->Connection = sqlConn;
			sqlCmd->CommandText = "select *from student";
			sqlDd = sqlCmd->ExecuteReader();
			sqlDt->Load(sqlDd);
			sqlDd->Close();
			sqlConn->Close();
			dataGridviewDSSV->DataSource = sqlDt;
		}
				 private: System::Void Upload() {

					 sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
					 sqlConn->Open();
					 sqlCmd->Connection = sqlConn;
					 sqlCmd->CommandText = "select *from student";
					 sqlDd = sqlCmd->ExecuteReader();
					 sqlDt->Load(sqlDd);
					 sqlDd->Close();
					 sqlConn->Close();
					 dataGridviewDSSV->DataSource = sqlDt;

				 }
	private: System::Void QuanTTSV_Load(System::Object^ sender, System::EventArgs^ e) {
		sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
		//Add khoa vaof cbo
		sqlConn1->Open();
		cboKhoahoc->Items->Clear();
		cboKhoahoc->Text = "";
		String^ aaa = "Select FacultyName from faculty";
		sqlCmd1 = gcnew MySqlCommand(aaa, sqlConn1);
		sqlDd1 = sqlCmd1->ExecuteReader();

		while (sqlDd1->Read()) {
			cboKhoahoc->Items->Add(sqlDd1->GetString(0));
		}
		sqlConn1->Close();
		Upload();
	}
private: System::Void cboKhoahoc_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//Add lop trong khoa
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;

	try {
		sqlConn->Open();
		cboLop->Items->Clear();
		cboLop->Text = "";
		String^ aa = "Select ClassName from class where FacultyName = '" + cboKhoahoc->Text + "'";
		sqlCmd = gcnew MySqlCommand(aa, sqlConn);
		sqlDd = sqlCmd->ExecuteReader();

		while (sqlDd->Read()) {
			cboLop->Items->Add(sqlDd->GetString(0));
		}
		sqlConn->Close();
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn->Close();

	}
}
private: System::Void cboLop_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;

	try {
		sqlConn1->Open();
		txtMaLop->Clear();
		txtMaLop->Text = "";
		String^ mon = "Select ClassCode from class where ClassName ='" + cboLop->Text + "' ";
		sqlCmd1 = gcnew MySqlCommand(mon, sqlConn1);
		sqlDd1 = sqlCmd1->ExecuteReader();
		sqlDd1->Read();
		String^ du = sqlDd1->GetString(0);
		txtMaLop->Text = du;
		sqlConn1->Close();
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn1->Close();
	}
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	try {
		sqlConn->Open();
		sqlQuery = "insert into student (StudentID, Fullname," + " DOB, Gender, Address, ClassCode, Email, Phone)" + "value('" + txtMaSV->Text + "',N'" + txtHoTen->Text + "',N'" + mskNgaySinh->Text + "',N'" + cboGioiTinh->Text + "',N'" + txtDiaChi->Text + "', '" + txtMaLop->Text + "','" + txtEmail->Text + "','" + txtSDT->Text  + "')";
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
private: System::Void btnXoa_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	String^ delete2 = txtMaSV->Text;
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
			sqlQuery = "delete from student where StudentID = '" + txtMaSV->Text + "'";
		}
		sqlQuery = "delete from student where StudentID = '" + txtMaSV->Text + "'";
		sqlCmd = gcnew MySqlCommand(sqlQuery, sqlConn);
		sqlDd = sqlCmd->ExecuteReader();MessageBox::Show("Deleted student data!");
		sqlConn->Close();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Erorr", "Student Management System", MessageBoxButtons::OK);
	}
	finally {
		sqlConn->Close();
	}
	
	Upload();
	
	userUpload();
}
private: System::Void btnThoat_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult  iExit;
	iExit = MessageBox::Show("Comfirm if you want to cancel", "Student Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (iExit == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
private: System::Void btnBAck_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSua_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	try {
		//GVCode, TeacherName, Gender, DOB, Email, Phone, PL
		sqlConn->Open();
		sqlQuery = "Update student Set StudentID=N'" + txtMaSV->Text + "',Fullname='" + txtHoTen->Text + "',DOB='" +
			mskNgaySinh->Text + "',Gender='" + cboGioiTinh->Text + "',Address='" + txtDiaChi->Text + "',ClassCode='" + txtMaLop->Text + "',Email='" + txtEmail->Text + "',Phone='" + txtSDT->Text + "' where StudentID='" + txtMaSV->Text + "' ";
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
