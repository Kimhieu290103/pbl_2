#include"CongTy.h"
void MENU()
{
	cout << "\n\t\t\t\t\t                  ----------------- Do an PBL2 ----------------- ";
	cout << "\n\t\t\t\t\t                 ||           Giao Vien: Dang Thien Binh         ||";
	cout << "\n\t\t\t\t\t                 ||           DE TAI: QUAN LY NHAN VIEN          ||";
	cout << "\n\t\t\t\t\t                  -----------------------------------------------";
	cout << "\n\n";
	cout << "\n\t\t\t\t\t      *********************CHUONG TRINH : QUAN LY NHAN VIEN*********************";
	cout << "\n\t\t\t\t\t      *----------------------------------------------------------------------*";
	cout << "\n\t\t\t\t\t      | STT | CHUONG TRINH                                                   |";
	cout << "\n\t\t\t\t\t      *----------------------------------------------------------------------*";
	cout << "\n\t\t\t\t\t      |  1  | Doc du lieu tu file input.txt                                  |";
	cout << "\n\t\t\t\t\t      *----------------------------------------------------------------------*";
	cout << "\n\t\t\t\t\t      |  2  | Tinh tong luong va xuat du lieu ra file OUTPUT1.txt            |";
	cout << "\n\t\t\t\t\t      *----------------------------------------------------------------------*";
	cout << "\n\t\t\t\t\t      |  3  | Sap xep nhan vien theo luong xuat ra file OUTPUT2.txt          |";
	cout << "\n\t\t\t\t\t      *----------------------------------------------------------------------*";
	cout << "\n\t\t\t\t\t      |  4  | Tim kiem nhan vien theo MSNV va xuat ra file OUTPUT3.txt       |";
	cout << "\n\t\t\t\t\t      *----------------------------------------------------------------------*";
	cout << "\n\t\t\t\t\t      |  5  | Them nhan vien vao 1 vi tri bat ky va xuat ra file OUTPUT4.txt |";
	cout << "\n\t\t\t\t\t      *----------------------------------------------------------------------*";
	cout << "\n\t\t\t\t\t      |  6  | Update nhan vien theo MSNV                                     |";
	cout << "\n\t\t\t\t\t      *----------------------------------------------------------------------*";
	cout << "\n\t\t\t\t\t      |  7  | Delete va xuat ra file OUTPUT5.txt                             |";
	cout << "\n\t\t\t\t\t      *----------------------------------------------------------------------*";
	cout << "\n\t\t\t\t\t      |  8  | Thoat                                                          |";
	cout << "\n\t\t\t\t\t      ************************************************************************\n";
}
int main(){
    fstream file;
    CongTy x;
	int lc;
	do{ system("cls");
		MENU();
		cout<<"nhap lua chon: ";
		cin>>lc;
		switch(lc){
		case 1:{
		file.open("input.txt", ios_base::in);
					x.Docfile(file);
					file.close();
					break;}
		case 2:{
			file.open("OUTPUT1.txt", ios_base::out);
					x.Xuatfile(file);
					file.close();
					break;
		}	
		case 3:{
			x.Sapxeptheoluong();
					file.open("OUTPUT2.txt", ios_base::out);
					file << "Danh sach nhan vien sau khi sap xep\n";
					x.Xuatfile(file);
					file.close();
					break;
		}	
		case 4:{
			file.open("OUTPUT3.txt", ios_base::out);
					x.TimnhanvienthemID(file);
					file.close();
					break;
		}
		case 5:{
			int index;
					cout << "\nNhap vi tri ma ban muon them vao LIST: ";
					cin >> index;
					x.Themvaovitribatki(index);
					file.open("OUTPUT4.txt", ios_base::out);
					x.Xuatfile(file);
					file.close();
					break;
		}
		case 6:{
			double y;
					cout << "\nNhap MSNV ma ban muon update:";
					cin >> y;
					x.Update(y);
					break;
		}
		case 7:{
			double m;
					cout << "\nNhap ma so nhan vien ban muon xoa: ";
					cin >> m;
					x.Delete(m);
					file.open("OUTPUT5.txt", ios_base::out);
					file << "Danh sach nhan vien sau khi DELETE\n";
					x.Xuatfile(file);
					break;
		}
		case 8:
		{
			cout<<"Ket thuc chuong trinh!!!";
			return 0;
		}
		}

	}
	while(lc>0 or lc<8);

	
	return 0;
}
