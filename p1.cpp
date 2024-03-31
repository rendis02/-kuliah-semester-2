#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << ">>> Menulis ke File" << endl;
    ofstream file_keluaran;
    file_keluaran.open("latihan.txt");

    cout << "Sedang Merekam... " << endl;
    file_keluaran << "Haloo " << endl;
    file_keluaran << "INI ADALAH SAYA" << endl;
    file_keluaran << "JAMAL" << endl;
    file_keluaran.close();

    cout << ">>> Membaca dari File" << endl;

    string line;
    ifstream file_input;
    file_input.open("latihan.txt");

    cout << "Membaca isi file latihan.txt" << endl;
    while(file_input)
    {
        getline(file_input, line);
        cout << line << endl;
    }
    
}
