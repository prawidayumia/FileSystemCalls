#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{
    //stream to write file
    ofstream addData;

    //open file and automatically creating file
    addData.open("[NRP]_[Name].csv", ios::app);

    if (!addData.fail())
    {
        //menulis ke dalam file
        addData << "Daftar Mahasiswa PENS" << endl;
        addData << "#,Nrp,Nama,Jenis_kelamin" << endl;
        addData << "1,4210191002,Irfan Muhammad,Laki - laki" << endl;
        addData << "2,4210191003,Aryazaky Iman Fauzy,Laki - laki" << endl;
        addData << "3,4210191004,Aydin Ihsan Ibrahim Nurdin,Laki - laki" << endl;
        addData << "4,4210191005,Prawida Yumia,Perempuan" << endl;
        addData << "5,4210191006,Khonsa Nadziroh,Perempuan" << endl;
        addData << "6,4210191008,Robby Alexander,Laki - laki" << endl;
        addData << "7,4210191009,Miftah Amiruddin Hakim Ganing,Laki - laki" << endl;
        addData << "8,4210191010,Hikmatul Ulya,Perempuan" << endl;
        addData << "9,4210191011,Mohammad Alifian Rizki Choliq,Laki - laki" << endl;
        addData << "10,4210191012,Berliana Putri Indrasari,Perempuan" << endl;
        addData << "11,4210191013,Marvel Natanael S,Laki - laki" << endl;
        addData << "12,4210191014,Auriel Harlih Rizkinanda,Laki - laki" << endl;
        addData << "13,4210191015,Vivian Azalia Anwari,Perempuan" << endl;
        addData << "14,4210191016,Joane Vanesa Hadi,Perempuan" << endl;
        addData << "15,4210191017,Mochammad Januar Afandi,Laki - laki" << endl;
        addData << "16,4210191018,M.Dwi Febrian,Laki - laki" << endl;
        addData << "17,4210191019,Amos Taruna Siahaan,Laki - laki" << endl;
        addData << "18,4210191020,M Awaluddin Romadhon,Laki - laki" << endl;
        addData << "19,4210191021,Intan Putri Kusuma Wardhani,Perempuan" << endl;
        addData << "20,4210191022,Andika Rizky Oktavian,Laki - laki" << endl;
        addData << "21,4210191023,Natan Andro Tri Arauna,Laki - laki" << endl;
        addData << "22,4210191024,Andhika Arista Permana,Laki - laki" << endl;
        addData << "23,4210191025,Devinindya Safitri Anggraeni,Perempuan" << endl;
        addData << "24,4210191026,Siti Julekhah,Perempuan" << endl;
        addData << "25,4210191027,Imam Biladi,Laki - laki" << endl;
        addData << "26,4210191028,Mukrom Karunia Azza,Laki - laki" << endl;
        addData << "26,4210191028,Mukrom Karunia Azza,Laki - laki" << endl;
        addData << "25,4210191027,Imam Biladi,Laki - laki" << endl;
        addData << "24,4210191026,Siti Julekhah,Perempuan" << endl;
        addData << "23,4210191025,Devinindya Safitri Anggraeni,Perempuan" << endl;
        addData << "22,4210191024,Andhika Arista Permana,Laki - laki" << endl;
        addData << "21,4210191023,Natan Andro Tri Arauna,Laki - laki" << endl;
        addData << "20,4210191022,Andika Rizky Oktavian,Laki - laki" << endl;
        addData << "19,4210191021,Intan Putri Kusuma Wardhani,Perempuan" << endl;
        addData << "18,4210191020,M Awaluddin Romadhon,Laki - laki" << endl;
        addData << "17,4210191019,Amos Taruna Siahaan,Laki - laki" << endl;               
        addData << "16,4210191018,M.Dwi Febrian,Laki - laki" << endl;
        addData << "15,4210191017,Mochammad Januar Afandi,Laki - laki" << endl;
        addData << "14,4210191016,Joane Vanesa Hadi,Perempuan" << endl;
        addData << "13,4210191015,Vivian Azalia Anwari,Perempuan" << endl;
        addData << "12,4210191014,Auriel Harlih Rizkinanda,Laki - laki" << endl;
        addData << "11,4210191013,Marvel Natanael S,Laki - laki" << endl;
        addData << "10,4210191012,Berliana Putri Indrasari,Perempuan" << endl;
        addData << "9,4210191011,Mohammad Alifian Rizki Choliq,Laki - laki" << endl;
        addData << "8,4210191010,Hikmatul Ulya,Perempuan" << endl;
        addData << "7,4210191009,Miftah Amiruddin Hakim Ganing,Laki - laki" << endl;
        addData << "6,4210191008,Robby Alexander,Laki - laki" << endl;
        addData << "5,4210191006,Khonsa Nadziroh,Perempuan" << endl;
        addData << "4,4210191005,Prawida Yumia,Perempuan" << endl;
        addData << "3,4210191004,Aydin Ihsan Ibrahim Nurdin,Laki - laki" << endl;
        addData << "2,4210191003,Aryazaky Iman Fauzy,Laki - laki" << endl;
        addData << "1,4210191002,Irfan Muhammad,Laki - laki" << endl;

        addData.close();
        cout << "Text sudah ditulis ke dalam File" << endl;
    }
    else {
        cout << "File tidak ditemukan" << endl;
    }

}
