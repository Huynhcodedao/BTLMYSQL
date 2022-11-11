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
	/// Summary for QLDIEM
	/// </summary>
	public ref class QLDIEM : public System::Windows::Forms::Form
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
	private: System::Windows::Forms::TextBox^ txtScode;
	private: System::Windows::Forms::Label^ label10;


	public:
		QLDIEM(void)
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
		~QLDIEM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnXuat;
	protected:
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnSua;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::DataGridView^ dataGridviewDiem;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ txtGhiChu;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtDiemTB;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ cboDRL;
	private: System::Windows::Forms::TextBox^ txtDiemThi1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtDiemTK;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtHoTen;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtMaSV;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ cboMonHoc;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cboHocKi;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cboLop;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cboKhoaHoc;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(QLDIEM::typeid));
			this->btnXuat = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnSua = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridviewDiem = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->txtGhiChu = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtDiemTB = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->cboDRL = (gcnew System::Windows::Forms::ComboBox());
			this->txtDiemThi1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtDiemTK = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtHoTen = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtMaSV = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtScode = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->cboMonHoc = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cboHocKi = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cboLop = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cboKhoaHoc = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewDiem))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnXuat
			// 
			this->btnXuat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnXuat->ForeColor = System::Drawing::Color::Blue;
			this->btnXuat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnXuat.Image")));
			this->btnXuat->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnXuat->Location = System::Drawing::Point(1159, 653);
			this->btnXuat->Name = L"btnXuat";
			this->btnXuat->Size = System::Drawing::Size(178, 51);
			this->btnXuat->TabIndex = 22;
			this->btnXuat->Text = L"Print table";
			this->btnXuat->UseVisualStyleBackColor = true;
			this->btnXuat->Click += gcnew System::EventHandler(this, &QLDIEM::btnXuat_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExit->Location = System::Drawing::Point(1159, 472);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(178, 51);
			this->btnExit->TabIndex = 21;
			this->btnExit->Text = L"Back";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &QLDIEM::btnExit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDelete.Image")));
			this->btnDelete->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDelete->Location = System::Drawing::Point(1159, 374);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(178, 51);
			this->btnDelete->TabIndex = 20;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &QLDIEM::btnDelete_Click);
			// 
			// btnSua
			// 
			this->btnSua->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSua->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSua.Image")));
			this->btnSua->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSua->Location = System::Drawing::Point(1159, 279);
			this->btnSua->Name = L"btnSua";
			this->btnSua->Size = System::Drawing::Size(178, 51);
			this->btnSua->TabIndex = 19;
			this->btnSua->Text = L"Fix";
			this->btnSua->UseVisualStyleBackColor = true;
			this->btnSua->Click += gcnew System::EventHandler(this, &QLDIEM::btnSua_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.Image")));
			this->btnAdd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAdd->Location = System::Drawing::Point(1159, 186);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(178, 51);
			this->btnAdd->TabIndex = 18;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &QLDIEM::btnAdd_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->dataGridviewDiem);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(274, 529);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(853, 193);
			this->groupBox4->TabIndex = 17;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Danh sách";
			// 
			// dataGridviewDiem
			// 
			this->dataGridviewDiem->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridviewDiem->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridviewDiem->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridviewDiem->Location = System::Drawing::Point(6, 38);
			this->dataGridviewDiem->Name = L"dataGridviewDiem";
			this->dataGridviewDiem->RowHeadersWidth = 51;
			this->dataGridviewDiem->Size = System::Drawing::Size(842, 149);
			this->dataGridviewDiem->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->txtGhiChu);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(783, 158);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(344, 234);
			this->groupBox3->TabIndex = 16;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ghi chú";
			// 
			// txtGhiChu
			// 
			this->txtGhiChu->Location = System::Drawing::Point(6, 29);
			this->txtGhiChu->Multiline = true;
			this->txtGhiChu->Name = L"txtGhiChu";
			this->txtGhiChu->Size = System::Drawing::Size(333, 199);
			this->txtGhiChu->TabIndex = 12;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->txtDiemTB);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->cboDRL);
			this->groupBox2->Controls->Add(this->txtDiemThi1);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->txtDiemTK);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->txtHoTen);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->txtMaSV);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(274, 398);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(847, 125);
			this->groupBox2->TabIndex = 15;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Thông tin chi tiết";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 25);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Điểm TB";
			// 
			// txtDiemTB
			// 
			this->txtDiemTB->Location = System::Drawing::Point(162, 72);
			this->txtDiemTB->Name = L"txtDiemTB";
			this->txtDiemTB->Size = System::Drawing::Size(72, 30);
			this->txtDiemTB->TabIndex = 8;
			this->txtDiemTB->TextChanged += gcnew System::EventHandler(this, &QLDIEM::txtDiemTB_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(642, 24);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 25);
			this->label13->TabIndex = 23;
			this->label13->Text = L"DRL";
			// 
			// cboDRL
			// 
			this->cboDRL->FormattingEnabled = true;
			this->cboDRL->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"", L"Yếu", L"Trung bình", L"Khá ", L"Tốt", L"Xuất sắc" });
			this->cboDRL->Location = System::Drawing::Point(728, 23);
			this->cboDRL->Name = L"cboDRL";
			this->cboDRL->Size = System::Drawing::Size(98, 33);
			this->cboDRL->TabIndex = 7;
			// 
			// txtDiemThi1
			// 
			this->txtDiemThi1->Location = System::Drawing::Point(442, 74);
			this->txtDiemThi1->Name = L"txtDiemThi1";
			this->txtDiemThi1->Size = System::Drawing::Size(70, 30);
			this->txtDiemThi1->TabIndex = 9;
			this->txtDiemThi1->TextChanged += gcnew System::EventHandler(this, &QLDIEM::txtDiemThi1_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(275, 81);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(143, 25);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Điểm thi lần 1";
			this->label12->Click += gcnew System::EventHandler(this, &QLDIEM::label12_Click);
			// 
			// txtDiemTK
			// 
			this->txtDiemTK->Location = System::Drawing::Point(728, 74);
			this->txtDiemTK->Name = L"txtDiemTK";
			this->txtDiemTK->Size = System::Drawing::Size(59, 30);
			this->txtDiemTK->TabIndex = 11;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(556, 81);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(144, 25);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Điểm tổng kết";
			// 
			// txtHoTen
			// 
			this->txtHoTen->Location = System::Drawing::Point(442, 26);
			this->txtHoTen->Name = L"txtHoTen";
			this->txtHoTen->Size = System::Drawing::Size(163, 30);
			this->txtHoTen->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(314, 28);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 25);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Họ và tên";
			// 
			// txtMaSV
			// 
			this->txtMaSV->Location = System::Drawing::Point(162, 29);
			this->txtMaSV->Name = L"txtMaSV";
			this->txtMaSV->Size = System::Drawing::Size(112, 30);
			this->txtMaSV->TabIndex = 5;
			this->txtMaSV->TextChanged += gcnew System::EventHandler(this, &QLDIEM::txtMaSV_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(5, 31);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(134, 25);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Mã sinh viên";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtScode);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->cboMonHoc);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->cboHocKi);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->cboLop);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->cboKhoaHoc);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(274, 158);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(479, 234);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lựa chọn";
			// 
			// txtScode
			// 
			this->txtScode->Location = System::Drawing::Point(121, 179);
			this->txtScode->Name = L"txtScode";
			this->txtScode->Size = System::Drawing::Size(342, 30);
			this->txtScode->TabIndex = 29;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(13, 179);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(89, 25);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Mã môn";
			// 
			// cboMonHoc
			// 
			this->cboMonHoc->FormattingEnabled = true;
			this->cboMonHoc->Location = System::Drawing::Point(121, 135);
			this->cboMonHoc->Name = L"cboMonHoc";
			this->cboMonHoc->Size = System::Drawing::Size(342, 33);
			this->cboMonHoc->TabIndex = 4;
			this->cboMonHoc->SelectedIndexChanged += gcnew System::EventHandler(this, &QLDIEM::cboMonHoc_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 138);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 25);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Môn học";
			// 
			// cboHocKi
			// 
			this->cboHocKi->FormattingEnabled = true;
			this->cboHocKi->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9"
			});
			this->cboHocKi->Location = System::Drawing::Point(386, 93);
			this->cboHocKi->Name = L"cboHocKi";
			this->cboHocKi->Size = System::Drawing::Size(77, 33);
			this->cboHocKi->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(292, 101);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Học kì";
			// 
			// cboLop
			// 
			this->cboLop->FormattingEnabled = true;
			this->cboLop->Location = System::Drawing::Point(121, 93);
			this->cboLop->Name = L"cboLop";
			this->cboLop->Size = System::Drawing::Size(131, 33);
			this->cboLop->TabIndex = 2;
			this->cboLop->SelectedIndexChanged += gcnew System::EventHandler(this, &QLDIEM::cboLop_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Lớp";
			// 
			// cboKhoaHoc
			// 
			this->cboKhoaHoc->FormattingEnabled = true;
			this->cboKhoaHoc->Location = System::Drawing::Point(121, 44);
			this->cboKhoaHoc->Name = L"cboKhoaHoc";
			this->cboKhoaHoc->Size = System::Drawing::Size(342, 33);
			this->cboKhoaHoc->TabIndex = 1;
			this->cboKhoaHoc->SelectedIndexChanged += gcnew System::EventHandler(this, &QLDIEM::cboKhoaHoc_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Khoa";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(585, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(449, 35);
			this->label1->TabIndex = 13;
			this->label1->Text = L"THÔNG TIN ĐIỂM SINH VIÊN ";
			// 
			// QLDIEM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1873, 1051);
			this->Controls->Add(this->btnXuat);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnSua);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"QLDIEM";
			this->Text = L"QLDIEM";
			this->Load += gcnew System::EventHandler(this, &QLDIEM::QLDIEM_Load);
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewDiem))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void userUpload() {
			DataTable^ sqlDt = gcnew DataTable();
			sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
			sqlConn->Open();
			sqlCmd->Connection = sqlConn;
			sqlCmd->CommandText = "select *from result";
			sqlDd = sqlCmd->ExecuteReader();
			sqlDt->Load(sqlDd);
			sqlDd->Close();
			sqlConn->Close();
			dataGridviewDiem->DataSource = sqlDt;
		}
		 private: System::Void Upload() {

			 sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
			 sqlConn->Open();
			 sqlCmd->Connection = sqlConn;
			 sqlCmd->CommandText = "select *from result";
			 sqlDd = sqlCmd->ExecuteReader();
			 sqlDt->Load(sqlDd);
			 sqlDd->Close();
			 sqlConn->Close();
			 dataGridviewDiem->DataSource = sqlDt;

		 }
	private: System::Void QLDIEM_Load(System::Object^ sender, System::EventArgs^ e) {
		
		sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
		//Add khoa vaof cbo
		sqlConn1->Open();
		cboKhoaHoc->Items->Clear();
		cboKhoaHoc->Text = "";
		String^ aaa = "Select FacultyName from faculty";
		sqlCmd1 = gcnew MySqlCommand(aaa, sqlConn1);
		sqlDd1 = sqlCmd1->ExecuteReader();

		while (sqlDd1->Read()) {
			cboKhoaHoc->Items->Add(sqlDd1->GetString(0));
		}
		sqlConn1->Close();
		

	
	}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	try {
		sqlConn->Open();
		sqlQuery = "insert into result (SubjectCode, StudentID, ClassName,"+" SubjectName, Faculty, Score1, Score2,ScoreTotal, HK,DRL, Note, StudentName)" + "value('" + txtScode->Text + "',N'" + txtMaSV->Text + "',N'" +cboLop->Text + "',N'" + cboMonHoc->Text + "',N'" + cboKhoaHoc->Text + "', '" + txtDiemTB->Text +"','"+txtDiemThi1->Text+"','"+txtDiemTK->Text+"','"+cboHocKi->Text+"','"+cboDRL->Text+"','"+txtGhiChu->Text+"','" +txtHoTen->Text+ "')";
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
	userUpload();
	String^ ok = txtDiemTK->Text;
	if (ok == "0") {

		sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
		try {
			sqlConn1->Open();
			sqlQuery1 = "insert into hlai ( StudentID, StudentName,ClassName, SubjectName, HK,FacultyName )" + "value('" + txtMaSV + "','" + txtHoTen->Text + "','" + cboLop->Text + "','" + cboMonHoc->Text + "','" + cboHocKi->Text + "', '" + cboKhoaHoc->Text + "')";
			sqlCmd1 = gcnew MySqlCommand(sqlQuery1, sqlConn1);
			sqlDd1 = sqlCmd1->ExecuteReader();
			sqlConn1->Close();
		}

		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally {
			sqlConn1->Close();
		}
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void cboKhoaHoc_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//Add lop trong khoa
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	
	try {
	sqlConn->Open();
	cboLop->Items->Clear();
	cboLop->Text = "";
	String^ aa = "Select ClassName from class where FacultyName = '"+cboKhoaHoc->Text+"'";
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
	//Add mon vaof cbo

	sqlConn2->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;

	sqlConn2->Open();
	cboMonHoc->Items->Clear();
	cboMonHoc->Text = "";
	String^ aaaq = "Select SubjectName from subject1";
	sqlCmd2 = gcnew MySqlCommand(aaaq, sqlConn2);
	sqlDd2 = sqlCmd2->ExecuteReader();

	while (sqlDd2->Read()) {
		cboMonHoc->Items->Add(sqlDd2->GetString(0));
	}
	sqlConn2->Close();
	Upload();
	userUpload();
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	cboKhoaHoc->Items->Clear();
	this->Close();
}
private: System::Void txtMaSV_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//Tự thêm tên lớp vào cbo
	sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	try {
		sqlConn1->Open();
		cboLop->Items->Clear();
		cboLop->Text = "";
		String^ io = "Select ClassName from class c, student s where c.ClassCode = c.ClassCode and StudentID = '" + txtMaSV->Text + "'";
		sqlCmd1 = gcnew MySqlCommand(io, sqlConn1);
		sqlDd1 = sqlCmd1->ExecuteReader();
		while (sqlDd1->Read()) {
			String^ sao = sqlDd1->GetString(0);
			cboLop->Text = sao;
			sqlConn1->Close();
		}
	}

	catch (Exception^ ex) {
		//MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn1->Close();
	}
	

	//Add ten vaof txt

	
	sqlConn3->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	try {
	sqlConn3->Open();
	cboMonHoc->Items->Clear();
	cboMonHoc->Text = "";
	String^ i = "Select Fullname from student where StudentID = '" + txtMaSV->Text + "'";
	sqlCmd3 = gcnew MySqlCommand(i, sqlConn3);
	sqlDd3 = sqlCmd3->ExecuteReader();
	while (sqlDd3->Read()) {

	String^ sa = sqlDd3->GetString(0);
	txtHoTen->Text = sa;
	sqlConn3->Close();

	}
	}

	catch (Exception^ ex) {
		//MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn3->Close();
	}
}
private: System::Void cboMonHoc_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	//Add ma mon
	sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	
	try {
	sqlConn1->Open();
	txtScode->Clear();
	txtScode->Text = "";
	String^ mon = "Select SubjectCode from subject1 where SubjectName ='" + cboMonHoc->Text + "' ";
	sqlCmd1 = gcnew MySqlCommand(mon, sqlConn1);
	sqlDd1 = sqlCmd1->ExecuteReader();
	sqlDd1->Read();
	String^ du = sqlDd1->GetString(0);
	txtScode->Text = du;
	sqlConn1->Close();	
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn1->Close();
	}
}
private: System::Void txtDiemThi1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtGhiChu->Text = "";
	float tb, ck, tk;
	try {
		tb = Convert::ToDouble(txtDiemTB->Text);
		ck = Convert::ToDouble(txtDiemThi1->Text);

		tk = tb * 0.4 + ck * 0.6;
		if (tk < 4) {
			txtGhiChu->Text = "Hoc lai";
		}
		if (tk >= 9) {
			tk = 4;
		}
		else if (tk >= 8.5 && tk < 9) {
			tk = 3.7;
		}
		else if (tk >= 8 && tk < 8.5) {
			tk = 3.5;
		}
		else if (tk >= 7 && tk < 8) {
			tk = 3;
		}
		else if (tk >= 6.5 && tk < 7) {
			tk = 2.5;
		}
		else if (tk >= 5.5 && tk < 6.5) {
			tk = 2;
		}
		else if (tk >= 5 && tk < 5.5) {
			tk = 1.5;
		}
		else if (tk >= 4 && tk < 5) {
			tk = 1;
		}
		else {
			tk = 0;
		}

		
		
		txtDiemTK->Text = Convert::ToString(tk);
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	
}
private: System::Void txtDiemTB_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtGhiChu->Text = "";
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	String^ delete2 = txtScode->Text;
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




			sqlQuery = "delete from result where SubjectCode = '" + txtScode->Text + "'";



			sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
			try {
				//GVCode, TeacherName, Gender, DOB, Email, Phone, PL
				sqlConn1->Open();
				sqlQuery1 = "delete from hoccaithien where SubjectName = '" + cboMonHoc->Text + "'";
				sqlCmd1 = gcnew MySqlCommand(sqlQuery1, sqlConn1);
				sqlDd1 = sqlCmd1->ExecuteReader();
				sqlConn1->Close();
			}

			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			finally {
				sqlConn1->Close();
			}


		}
		sqlQuery = "delete from result where SubjectCode = '" + txtScode->Text + "'";
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
	MessageBox::Show("Deleted result data!");
	Upload();
	userUpload();
}
private: System::Void btnXuat_Click(System::Object^ sender, System::EventArgs^ e) {
	try {

		if (dataGridviewDiem->Rows->Count > 0)
		{

			using namespace::Microsoft::Office::Interop::Excel;
			ApplicationClass^ xcelApp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();

			Microsoft::Office::Interop::Excel::_Workbook^ workbook = xcelApp->Workbooks->Add(Type::Missing);
			// creating new Excelsheet in workbook  
			Microsoft::Office::Interop::Excel::_Worksheet^ worksheet = nullptr;
			// see the excel sheet behind the program  
			xcelApp->Visible = true;


			worksheet == workbook->Sheets["Sheet1"];
			worksheet == workbook->ActiveSheet;
			// changing the name of active sheet  
			xcelApp->Name == "ok";

			for (int i = 1; i < dataGridviewDiem->Columns->Count + 1; i++)
			{
				xcelApp->Cells[1, i] = dataGridviewDiem->Columns[i - 1]->HeaderText;
			}

			for (int i = 0; i < dataGridviewDiem->Rows->Count; i++)
			{
				for (int j = 0; j < dataGridviewDiem->Columns->Count; j++)
				{
					xcelApp->Cells[i + 2, j + 1] = dataGridviewDiem->Rows[i]->Cells[j]->Value->ToString();
				}
			}
			xcelApp->Columns->AutoFit();
			xcelApp->Visible = true;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void cboLop_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSua_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	try {
		//GVCode, TeacherName, Gender, DOB, Email, Phone, PL
		sqlConn->Open();
		sqlQuery = "Update result Set SubjectCode=N'" + txtScode->Text + "',StudentID='" +txtMaSV->Text + "',StudentName='" +
			txtHoTen->Text +"',ClassName='" +cboLop->Text +"',SubjectName='" +cboMonHoc->Text + "',Faculty='" + cboKhoaHoc->Text + "',Score1='" + txtDiemTB->Text + "',Score2='" +txtDiemThi1->Text + "',ScoreTotal='" +txtDiemTK->Text + "',HK='" + cboHocKi->Text + "',DRL='" + cboDRL->Text + "',Note='" +txtGhiChu->Text + "' where SubjectCode='" + txtScode->Text + "' ";
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
	try {
		//GVCode, TeacherName, Gender, DOB, Email, Phone, PL
		sqlConn->Open();
		sqlQuery = "Update hoccaithien Set StudentID=N'" + txtMaSV->Text + "',StudentName='" + txtHoTen->Text + "',ClassName='" +
			cboLop->Text + "',SubjectName='" + cboMonHoc->Text + "',SubjectName='" + cboMonHoc->Text + "',DiemHocCaiThien='" + txtDiemTK->Text + "' where StudentID='" + txtMaSV->Text + "' ";
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

}
};
}
