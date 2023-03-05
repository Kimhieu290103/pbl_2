#include"NhanVien.h"
NhanVien::NhanVien(){
    this->Id=0;
    this->Name="";
    this->Address="";
    this->DateOfBirth="";
    this->Gender="";
    this->CCCD=0;
    this->SDT=0;
}
NhanVien::~NhanVien(){}

double NhanVien::Get_Id(){
    return this->Id;
}
int NhanVien::Get_CCCD(){
    return this->CCCD;
}
int NhanVien::Get_SDT(){
    return this->SDT;
}
string NhanVien::Get_Name(){
    return this->Name;
}
string NhanVien::Get_Address(){
    return this->Address;
}
string NhanVien::Get_DateOfBirth(){
    return this->DateOfBirth;
}
string NhanVien::Get_Gender(){
    return this->Gender;
}
void NhanVien::Set_Id(double s){
    this->Id=s;
}
void NhanVien::Set_Name(string name){
    this->Name=name;
    }
void NhanVien::Set_Address(string adr){
    this->Address=adr;
}
void NhanVien::Set_DateOfBirth(string date){
    this->DateOfBirth=date;
}
void NhanVien::Set_Gender(string gender){
    this->Gender=gender;
}

void NhanVien::Set_CCCD(int cccd){
    this->CCCD=cccd;
}void NhanVien::Set_SDT(int sdt){
    this->SDT=sdt;
}
void NhanVien::InPut(){
    cin.ignore();
    cout<<"nhap ho va ten: ";
    getline(cin,this->Name);
    cout<<"nhap CCCD:  ";
    cin>>this->CCCD;
    cout<<"nhap SDT:  ";
    cin>>this->SDT;
    cin.ignore();
    cout<<"nhap ngay thang sinh: ";
    getline(cin,this->DateOfBirth);
    cout<<"nhap gioi tinh:  ";
    getline(cin,this->Gender);
    cout<<"nhap dia chi:  ";
    getline(cin,this->Address);
   
}
void NhanVien::OutPut(){
    
    cout << setw(6) << left << this->Id << setw(2) << "|" << setw(20) << this->Name << "| " << setw(11) << this->DateOfBirth << "|    " << left << setw(7) << this->Gender<< "|  " << setw(12) << this->Address << "|  " ;
        
}
float NhanVien::Tinhluong(){
    return 0;
}
void NhanVien::DocFile(fstream &file){
    file>>this->Id;
    file.ignore(2);
    getline(file,this->Name,',');
    file.ignore(1);
    file>>this->CCCD;
    file.ignore(2);
    file>>this->SDT;
    file.ignore(2);
    getline(file,this->DateOfBirth,',');
    file.ignore(1);
    getline(file,this->Gender,',');
    file.ignore(1);
    getline(file,this->Address,',');
   file.ignore(1);
    
}
void NhanVien::XuatFile(fstream& file){
    file<<"Id: "<<this->Id<<endl;
    file<<"Name: "<<this->Name<<endl;
    file<<"CCCD: "<<this->CCCD<<endl;
    file<<"SDT: "<<this->SDT<<endl;
    file<<"Date: "<<this->DateOfBirth<<endl;
    file<<"Gender: "<<this->Gender<<endl;
    file<<"Address: "<<this->Address<<endl;
    

    
}