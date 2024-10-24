#include <iostream>
using namespace std;
int main()
{
int son;
cin >> son;
cout << "Shu sonni 10ga oshirilgani : " << son + 10 << endl;
cout << "Shu sonni 10ga kamaytirilgani : " << son -10 << endl;
cout << "Shu sonni 10 marta oshirilgani : " << son *10 << endl;
cout << "Shu sonni 2-darjasi : " << son * son << endl;
int son1, son2;

    cout << "1ta sonni kiriting : ";
    cin >> son1;

    cout << "Shu sonni 3-darajasi : " << son1 * son1 * son1 << endl;
    cout << "Shu sinni 5-darajasi : " << son1 * son1 * son1 * son1 * son1 << endl;

    cout << "2ta sonni 1-sini kiriting : ";

    cin >> son1;

    cout << "2ta sonni 2-sini kiriting : ";

    cin >> son2;

    cout << "Shu sonnlar yig'indisi : " << son1 + son2 << endl;
    cout << "Shu sonlar ko'paytmasi : " << son1 * son2 << endl;
    

    float s1,s2,son3,son4,son5,son6,son7,son8;
cout << "Vazifaning 1- Masalani ishlash uchun 8ta sonni kiriting \n";
cout << "1-si : ";
cin >> son1;
cout << "2-si : ";
cin >> son2;
cout << "3-si : ";
cin >> son3;
cout << "4-si : ";
cin >> son4;
cout << "5-si : ";
cin >> son5;
cout << "6-si : ";
cin >> son6;
cout << "7-si : ";
cin >> son7;
cout << "8-si : ";
cin >> son8;

float natija = (son1+son2+son3+son4+son5+son6+son7+son8) / 8;
cout << "Siz yozgan sonlarning o'rta arifmetik natijasi : " << natija << endl <<endl;

   ///2-masala
int son9,son10;
cout << "Vazifaning 2- Masalasini ishlash uchun 2ta sonni kiriting \n";
cout << "1-sonni yozing : ";
cin >> son9;
cout << "2-sonni yozing : ";
cin >> son10;

int saqlovchi = son9;
son9 = son10;
son10 = saqlovchi;

cout << "1chi sonning qiymati o'zgarganda : " << son9 << "bo'ladi" << endl ;
cout << "2chi sonning qiymati o'zgarganda : " << son10 <<"bo'ladi" << endl << endl;

   ///3-masala
int minut,soniya;
cout << "Vazifaning 3- Masalasini ishlash uchun istalgan daqiqa sonini kiriting \n";
cout << "Daqiqa sonini kiriting : ";
cin >> minut;
soniya = minut * 60;
cout << "Berilgan daqiqani soniyaga aylantirganda :" << soniya << "soniya bo'ladi"<< endl;

int sekund = soniya * 60 *60 ;
    cout << " Siz kiritgan soat : " << sekund << "sekund bo'ladi." << endl <<endl;

    ///2-masala
    int kun;
    cout << " Vazifani 2-masalasini ishlash uchun istalgan kun sonini kiriting \n";
    cout << " Necha kunni daqiqaga aylantirmoqchisiz? : ";
    cin >> kun;

    int daqiqa = kun * 24 * 60 ;
    cout << " Siz kiritgan kun : " << daqiqa << "daqiqa b'ladi." << endl <<endl;

    ///3-masala
    int daqiqa1;
    cout << " Vazifaning 3-masalasini ishlash uchun istalgan daqiqa sonini kiriting \n";
    cout << " Necha daqiqani soatga aylantirmoqchisiz? : ";
    cin >> daqiqa1;

    int soat1 = daqiqa1 / 60 ;
    cout << " Siz kiritgan daqiqa : " << soat1 << "soat bo'ladi." <<endl <<endl;

    ///4-masala
    int daqiqa2;
    cout << " Vazifaning 4-masalasini ishlash uchun istalgan daqiqa sonini kiriting \n";
    cout << " Necha daqiqani kunga aylantirmoqchisiz? : ";
    cin >> daqiqa2;

    int kun1 = daqiqa2 / 60 / 24;
    cout << " Siz kiritgan daqiqa : " <<kun1 << "kun bo'ladi." << endl <<endl <<endl;
    cout << " BIZNING DASTURDAN FOYDALANGANINGIZ UCHUN MINNATDORMIZ!!!" <<endl;


return 0;
}