#include <iostream>
#include <conio.h>

using namespace std;
class bangun_kubus
{
 protected:
       double s;
  public:
       virtual void get_data()=0;
       virtual void display_area()=0;
};

class luas_bujursangkar : public bangun_kubus 
{
   public:
    void get_data(void)
    {
       cout<<"\n\n****** Menghitung Luas Bujursangkar ******\n\n";
       cout<<"Masukan Nilai Sisi = "; cin >>s;
    }
    void display_area(void)
    {
       double luas;
       luas = s * s;
       cout<<"\nDik : s = "<< s; 
       cout<<"\nDit : luas bujursangkar";
       cout<<"\n\nPenyelesaian";
       cout<<"\n\nLuas Bujursangkar = sisi x sisi";
       cout<<"\n                  = " <<s <<" x" <<s; 
       cout<<"\n                  = "<<luas;
    }
};

class volume_kubus : public bangun_kubus 
{
   public:
    void get_data(void)
    {
       cout<<"\n\n****** Menghitung Volume Kubus ******\n";
       cout<<"\nMasukan Nilai Sisi = "; cin>>s;
    }
    void display_area(void)
    {
       double volume;
       volume = s * s * s;
       cout<<"\nDik : sisi = "<<s;
       cout<<"\nDit : volume kubus";
       cout<<"\n\nPenyelesaian";
       cout<<"\n\nVolume Kubus = sisi x sisi x sisi";
       cout<<"\n             = " <<s <<" x" <<s <<" x" <<s; 
       cout<<"\n             = "<<volume;
    }
};

class kubus : public bangun_kubus 
{
   public:
    void get_data(void)
    {
       cout<<"\n\n****** Menghitung Bangun Ruang Kubus ******\n\n";
       cout<<"Masukan Nilai Sisi = "; cin>>s; 
    }
    void display_area(void)
    {
       double luas;
       double volume;
       luas = s * s;
       volume = s * s * s;
       
    cout<<"\nDik : s = "<< s; 
       cout<<"\nDit : Luas Bujursangkar";
       cout<<"\n      Volume Kubus";
       cout<<"\n\nPenyelesaian";
       cout<<"\n\nLuas Bujursangkar = sisi x sisi";
       cout<<"\n                  = " <<s <<" x" <<s;
       cout<<"\n                  = "<<luas;
       cout<<"\nVolume Kubus = sisi x sisi x sisi";
       cout<<"\n             = " <<s <<" x" <<s <<" x" <<s;
       cout<<"\n             = "<<volume;
      
    }
};

	int main(){
		system("cls");
		luas_bujursangkar bujur;
		volume_kubus vol;
		kubus kub;

		bangun_kubus *list[3];

	list[0]=&bujur;
	list[1]=&vol;
	list[2]=&kub;

	int pilih;
		while(1)
		{
		system("cls");
		cout<<"########################################";
  		cout<<"\n|     Menghitung Bangun Ruang          |\n";
  		cout<<"########################################\n";
  		cout<<"1) Luas Bujursangkar\n";
  		cout<<"2) Volume Kubus\n";
  		cout<<"3) Luas Bujursangkar & Volume Kubus\n";
  		cout<<"Masukkan Pilihan:-";
  		cin>>pilih;
  
  if(pilih==1){
          list[0]->get_data();
          list[0]->display_area();
          getch();
          }
  else if (pilih==2){
          list[1]->get_data();
          list[1]->display_area();
          getch();
          }
  else if (pilih==3){
          list[2]->get_data();
          list[2]->display_area();
          getch();
          
          }
else
     exit(1);
}
}
