#include"MyForm.h"
#include"Header_for_class.h"
#include"MyForm1.h"
#include"MyForm2.h"
#include"MyForm3.h"

int count = 5;
Client* cl = new Client[count];
System::Void rgz::MyForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}
System::Void rgz::MyForm::�����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	return System::Void();
}
System::Void rgz::MyForm::������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("�� ��������� ���� ���� ����, ����� ����� �������� ���������� ��� ����� �����.����� �������� ���������� ��� ����������, �� ������� �����.", "���������� ��� ��������");
	return System::Void();
}
System::Void rgz::MyForm::���������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("�������� ��������� 2 �����\n �����: 321-� \n ˳���� ������", "���������� ��� ������");
	return System::Void();
}
System::Void rgz::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	/*int count = 5;*/
	create_mass(cl, count);
	dataGridView1->ColumnCount = count;
	dataGridView1->RowCount = count;
	dataGridView1->Columns[0]->Name = "ϲ� �볺���";
	dataGridView1->Columns[1]->Name = "³� �볺���";
	dataGridView1->Columns[2]->Name = "ϲ� ����������";
	dataGridView1->Columns[3]->Name = "����� �������";
	dataGridView1->Columns[4]->Name = "ֳ��, ���";
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < 1; j++) {
			//dataGridView1->Rows[i]->Cells[j]->Value = "5";
			dataGridView1->Rows[i]->Cells[j]->Value = gcnew System::String(cl[i].get_name().c_str());// Convert::ToString(cl[i].());
			dataGridView1->Rows[i]->Cells[j+1]->Value =Convert::ToString(cl[i].get_age());
			dataGridView1->Rows[i]->Cells[j+2]->Value = gcnew System::String(cl[i].spesialist.get_name().c_str());
			dataGridView1->Rows[i]->Cells[j+3]->Value = gcnew System::String(cl[i].spesialist.get_name_posluga().c_str());
			dataGridView1->Rows[i]->Cells[j+4]->Value = Convert::ToString(cl[i].spesialist.get_price());
		}
	}
	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();
	return System::Void();
}

void rgz::MyForm::create_mass(Client cl[], int count)
{
	int age_cl[5] = { 15,20,34,23,56 };
	std::string name_sp[5] = { "������� ������ �������","������ ���'��� ���������","����� ���� ������������","������ ˳�� ��������","������� ��� ����������" };
	std::string name_cl[5] = { "���������� ���� ������������","��������� ������ ������","��������� ����� �������","������ ���� �����������","���� ���� �����������" };
	std::string spe[5] = { "��������","����������","����������","������","��������-����������" };
	std::string posluga[5] = { "�������� ������","������ �������","��������� ������","������������","������� ������" };
	int stag[5] = { 10,5,3,2,1 };
	int prise[5] = { 2500,650,550,4500,1200 };
	for (int i = 0; i < count; i++) {
		cl[i].set_name(name_cl[i]);
		cl[i].set_age(age_cl[i]);
		cl[i].spesialist.set_name(name_sp[i]);
		cl[i].spesialist.set_stag(stag[i]);
		cl[i].spesialist.set_price(prise[i]);
		cl[i].spesialist.set_name_price(posluga[i]);
		cl[i].spesialist.set_stag(stag[i]);
	}
	//throw gcnew System::NotImplementedException();
}
System::Void rgz::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (count > 0) {
		MyForm2^ form2 = gcnew MyForm2();
		form2->Show();
		
	}
	else {
		MessageBox::Show("��������� ���������", "�����");
	}
	return System::Void();
}
System::Void rgz::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm1^ form1 = gcnew MyForm1();
	form1->Show();
	return System::Void();
}
System::Void rgz::MyForm1::button1_Click(System::Object^ sender, System::EventArgs^ e)//��������� ���� �����
{
	if (textBox1->Text == "") {
		MessageBox::Show("������ ϲ� �볺���", "�������");
	}
	else {
		System::String^ name_persone = textBox1->Text;
		std::string name_per = msclr::interop::marshal_as<std::string>(name_persone);
		int k;
		bool is = false;
		for (int i = 0; i <count; i++) {
			if (cl[i].get_name() == name_per) {
				is = true;
				k = i;
			}
		}
		if (is) {
			MessageBox::Show("ϲ�: " + gcnew System::String(cl[k].get_name().c_str()) + "\n" + "��������� " + gcnew System::String(cl[k].spesialist.get_name_posluga().c_str()) + "\n" +
				"��������� " + gcnew System::String(cl[k].spesialist.get_name().c_str()) + "\n" + "ֳ�� " + Convert::ToString(cl[k].spesialist.get_price()), "���������� ��� �볺���");
		}
		else {
			MessageBox::Show("������ �볺��� ���� � ��� �����", "���������� ��� �볺���");
		}
		/*std::wstring name1 = marshal_as<std::wstring>(this->textBox1->Text);*/
		//MyForm1::Hide();
	}
	return System::Void();
}
System::Void rgz::MyForm2::button1_Click(System::Object^ sender, System::EventArgs^ e)//��� ��������� 
{
	if (textBox1->Text == "") {
		MessageBox::Show("������ ϲ� �볺���", "�������");
	}
	else {
		if (count > 1) {
			System::String^ name_persone = textBox1->Text;
			std::string name_per = msclr::interop::marshal_as<std::string>(name_persone);
			int k;
			bool is = false;
			for (int i = 0; i < count; i++) {
				if (cl[i].get_name() == name_per) {
					is = true;
					k = i;
				}
			}
			if (is) {
				Client* cl1 = new Client[count - 1];
				for (int i = 0; i < k; i++) {
					cl1[i].set_age(cl[i].get_age());
					cl1[i].set_name(cl[i].get_name());
					cl1[i].spesialist.set_age(cl[i].spesialist.get_age());
					cl1[i].spesialist.set_name(cl[i].spesialist.get_name());
					cl1[i].spesialist.set_name_price(cl[i].spesialist.get_name_posluga());
					cl1[i].spesialist.set_price(cl[i].spesialist.get_price());
					cl1[i].spesialist.set_stag(cl[i].spesialist.get_stag());
				}
				for (int i = k + 1; i < count; i++) {
					cl1[i - 1].set_age(cl[i].get_age());
					cl1[i - 1].set_name(cl[i].get_name());
					cl1[i - 1].spesialist.set_age(cl[i].spesialist.get_age());
					cl1[i - 1].spesialist.set_name(cl[i].spesialist.get_name());
					cl1[i - 1].spesialist.set_name_price(cl[i].spesialist.get_name_posluga());
					cl1[i - 1].spesialist.set_price(cl[i].spesialist.get_price());
					cl1[i - 1].spesialist.set_stag(cl[i].spesialist.get_stag());
				}
				count--;
				delete[] cl;
				//cl = nullptr;
				cl = new Client[count];
				for (int i = 0; i < count; i++) {
					cl[i].set_age(cl1[i].get_age());
					cl[i].set_name(cl1[i].get_name());
					cl[i].spesialist.set_age(cl1[i].spesialist.get_age());
					cl[i].spesialist.set_name(cl1[i].spesialist.get_name());
					cl[i].spesialist.set_name_price(cl1[i].spesialist.get_name_posluga());
					cl[i].spesialist.set_price(cl1[i].spesialist.get_price());

				}
				delete[]cl1;
				MyForm2::Hide();
				MessageBox::Show("��������� �������� ������", "�����������");
			}
			else {
				MessageBox::Show("������ �볺��� ���� � ��� �����", "���������� ��� �볺���");
			}
		}
		else {
			count--;
			delete[] cl;
			MyForm2::Hide();
			MessageBox::Show("��������� �������� ������", "�����������");
		}
	}
	return System::Void();
}
System::Void rgz::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)//�������� ����������
{
	if (count > 0) {
		dataGridView1->ColumnCount = 5;
		dataGridView1->RowCount = count;
		dataGridView1->Columns[0]->Name = "ϲ� �볺���";
		dataGridView1->Columns[1]->Name = "³� �볺���";
		dataGridView1->Columns[2]->Name = "ϲ� ����������";
		dataGridView1->Columns[3]->Name = "����� �������";
		dataGridView1->Columns[4]->Name = "ֳ��, ���";
		for (int i = 0; i < count; i++) {
			for (int j = 0; j < 1; j++) {
				//dataGridView1->Rows[i]->Cells[j]->Value = "5";
				dataGridView1->Rows[i]->Cells[j]->Value = gcnew System::String(cl[i].get_name().c_str());// Convert::ToString(cl[i].());
				dataGridView1->Rows[i]->Cells[j + 1]->Value = Convert::ToString(cl[i].get_age());
				dataGridView1->Rows[i]->Cells[j + 2]->Value = gcnew System::String(cl[i].spesialist.get_name().c_str());
				dataGridView1->Rows[i]->Cells[j + 3]->Value = gcnew System::String(cl[i].spesialist.get_name_posluga().c_str());
				dataGridView1->Rows[i]->Cells[j + 4]->Value = Convert::ToString(cl[i].spesialist.get_price());
			}
		}
		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView1->AutoResizeColumns();
	}
	else {
		dataGridView1->ColumnCount = 5;
		dataGridView1->RowCount = 1;

		for (int i = 0; i < 1; i++) {
			for (int j = 0; j < 5; j++) {
				//dataGridView1->Rows[i]->Cells[j]->Value = "5";
				dataGridView1->Rows[i]->Cells[j]->Value = " ";
			}
		}
	}
	return System::Void();
}
System::Void rgz::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)//������ �볺���
{
	MyForm3^ form3 = gcnew MyForm3();
	form3->Show();
	return System::Void();
}
System::Void rgz::MyForm3::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string name_sp[5] = { "������� ������ �������","������ ���'��� ���������","����� ���� ������������","������ ˳�� ��������","������� ��� ����������" };
	//std::string name_cl[5] = { "���������� ���� ������������","��������� ������ ������","��������� ����� �������","������ ���� �����������","���� ���� �����������" };
	std::string spe[5] = { "��������","����������","����������","������","��������-����������" };
	std::string posluga[5] = { "�������� ������","������ �������","��������� ������","������������","������� ������" };
	int stag[5] = { 10,5,3,2,1 };
	int prise[5] = { 2500,650,550,4500,1200 };

	System::String^ name_persone = textBox1->Text;
	std::string name_per = msclr::interop::marshal_as<std::string>(name_persone);
	int number = System::Convert::ToInt32(textBox2->Text);
	count++;
	Client* cl1 = new Client[count];
	for (int i = 0; i < count-1; i++) {
		cl1[i].set_age(cl[i].get_age());
		cl1[i].set_name(cl[i].get_name());
		cl1[i].spesialist.set_age(cl[i].spesialist.get_age());
		cl1[i].spesialist.set_name(cl[i].spesialist.get_name());
		cl1[i].spesialist.set_name_price(cl[i].spesialist.get_name_posluga());
		cl1[i].spesialist.set_price(cl[i].spesialist.get_price());
		cl1[i].spesialist.set_stag(cl[i].spesialist.get_stag());
	}
	cl1[count - 1].set_name(name_per);
	cl1[count-1].set_age(number);
	if (radioButton1->Checked == true) {
		cl1[count-1].spesialist.set_name(name_sp[0]);
		cl1[count-1].spesialist.set_stag(stag[0]);
		cl1[count-1].spesialist.set_price(prise[0]);
		cl1[count-1].spesialist.set_name_price(posluga[0]);
		cl1[count-1].spesialist.set_stag(stag[0]);
	}
	else if (radioButton2->Checked == true) {
		cl1[count - 1].spesialist.set_name(name_sp[1]);
		cl1[count - 1].spesialist.set_stag(stag[1]);
		cl1[count - 1].spesialist.set_price(prise[1]);
		cl1[count - 1].spesialist.set_name_price(posluga[1]);
		cl1[count - 1].spesialist.set_stag(stag[1]);
	}
	else if (radioButton3->Checked == true) {
		cl1[count - 1].spesialist.set_name(name_sp[2]);
		cl1[count - 1].spesialist.set_stag(stag[2]);
		cl1[count - 1].spesialist.set_price(prise[2]);
		cl1[count - 1].spesialist.set_name_price(posluga[2]);
		cl1[count - 1].spesialist.set_stag(stag[2]);
	}
	else if (radioButton4->Checked == true) {
		cl1[count - 1].spesialist.set_name(name_sp[3]);
		cl1[count - 1].spesialist.set_stag(stag[3]);
		cl1[count - 1].spesialist.set_price(prise[3]);
		cl1[count - 1].spesialist.set_name_price(posluga[3]);
		cl1[count - 1].spesialist.set_stag(stag[3]);
	}
	else {
		cl1[count - 1].spesialist.set_name(name_sp[4]);
		cl1[count - 1].spesialist.set_stag(stag[4]);
		cl1[count - 1].spesialist.set_price(prise[4]);
		cl1[count - 1].spesialist.set_name_price(posluga[4]);
		cl1[count - 1].spesialist.set_stag(stag[4]);
	}
	delete[] cl;
	//cl = nullptr;
	cl = new Client[count];
	for (int i = 0; i < count; i++) {
		cl[i].set_age(cl1[i].get_age());
		cl[i].set_name(cl1[i].get_name());
		cl[i].spesialist.set_age(cl1[i].spesialist.get_age());
		cl[i].spesialist.set_name(cl1[i].spesialist.get_name());
		cl[i].spesialist.set_name_price(cl1[i].spesialist.get_name_posluga());
		cl[i].spesialist.set_price(cl1[i].spesialist.get_price());

	}
	delete[]cl1;
	MyForm3::Hide();
	MessageBox::Show("���������� �������� ������", "�����������");
	

	return System::Void();
}