#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	fstream fin,file;   //�]�w��J�M�ɮת��W�٬� fin,file 
	fin.open("2b.txt",ios::in); //�}���ɮ� 2b.txt �ì���J���A 
	file.open("2b_raw.txt",ios::out); //�Ыؤ@��txt�� (�Y�w�����ɮ׫h�۰ʲM���������e) 
	string a,b; //�ŧia,b �Ψ��x�s�ɮפ��e
	while(fin>>a)  //�Nfin�����e�ǿ鵹 a 
	{
		b+=a+"\n"; // �Na���ɮ׿�X��b�÷|�۰ʸ��� 
	}
	cout<<b<<endl; 
	file<<b; //�Nb�����e ��Jtxt�ɮפ� 
	system ("pause");
}
