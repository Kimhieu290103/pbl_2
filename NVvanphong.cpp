#include"NVvanphong.h"
float NVvanphong::Tinhluong(){
    return this->years_of_experience*1000;
}
void NVvanphong::DocFile(fstream &file){
    NhanVien::DocFile(file);
    file>>this->years_of_experience;
}
 void NVvanphong::XuatFile(fstream &file){
    NhanVien::XuatFile(file);
    file<<"Chuc vu: Nhan vien van phong"<<endl;
    file<<"so nam kinh nghiem: "<<this->years_of_experience<<endl;
    file<<"luong: "<<Tinhluong()<<endl;
}
void NVvanphong::InPut(){
    NhanVien::InPut();
    cout<<"nhap so nam kinh nghiem: ";
    cin>>this->years_of_experience;
}
void NVvanphong::OutPut(){
    NhanVien::OutPut();
    cout<<"so nam kinh nghiem: "<<this->years_of_experience<<endl;
    cout<<"luong: "<<Tinhluong()<<endl;
}
