#include <iostream>
#include <array>

using namespace std;

int main()
{
    int matriksA[10][10];
    int matriksB[10][10];
    int hasil[10][10];
    int jumlah=0,i,j,k,l,m,n,o;

    cout<<"======================= Kalkulator buat kamu yang gajago Matriks ======================"<< endl;
    cout<<endl;
    cout<<" cara menggunakan : ";
    cout<<" 1. Tentukan jumlah baris dan kolom pada matriks tertentu"<<endl;
    cout<<"                     2. Masukkan bilangan ke tiap baris dan kolom pada matriks  tertentu"<<endl;
    cout<<"                        dengan syarat kolom matriks A = baris matriks B (syarat pekalian" <<endl;
    cout<<"                        matriks"<<endl;
    cout<<"                     3. Tampilan matriks dan hasil matriks akan ditampilkan dahulu"<< endl;
    cout<<"                     3. Hasil perkalian akan ditampilkan "<<endl;


    cout<< endl;
    cout<< "========================= Masukkan Bilangan untuk Matriks A ============================"<<endl;
    cout<< " masukkan jumlah baris : ";
    cin>> k;
    cout<< " masukkan jumlah kolom : ";
    cin>> l;

    for(i=0;i<k;i++){
        for(j=0;j<l;j++){
            cout<<" Masukkan nilai baris ke  "<< i <<" kolom ke " << j<< "  :  ";
            cin>> matriksA[i][j];
            cout<<" \n";

        }

    }

    for(i=0;i<k;i++){
        for(j=0;j<l;j++){
            cout<< matriksA[i][j];
            cout<< " \t";

        }
        cout<<endl;

}
                cout<< endl;
                cout<<" Hasil dari transpose Matriks A adalah : "<<endl;

        for(i=0;i<k;i++){
            for(j=0; j<l; j++){
                cout<< matriksA[j][i];
                cout<< " \t";
            }
            cout<<endl;
        }


   cout<< "========================== Masukkan Bilangan untuk Matriks B =============================="<<endl;;
    cout<< " masukkan jumlah baris : ";
    cin>> m;
    cout<< " masukkan jumlah kolom : ";
    cin>> n;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<" Masukkan nilai baris ke  "<< i <<" kolom ke " << j<< "  :  ";
            cin>> matriksB[i][j];
            cout<<" \n";

        }

    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<< matriksB[i][j];
            cout<< " \t";

        }
        cout<<endl;

}
    cout<< endl;
                cout<<" Hasil dari transpose Matriks B adalah : "<<endl;

        for(i=0;i<m;i++){
            for(j=0; j<n; j++){
                cout<< matriksB[j][i];
                cout<< " \t";
            }
            cout<<endl;
        }

    for(i=0; i<k ; i++){
        for (j=0; j<n ; j++){
            for(o=0;o<l;o++){
                    jumlah= jumlah + matriksA[i][o]*matriksB[o][j];
            }
            hasil[i][j] = jumlah;
            jumlah=0;
    }
}

    cout<<"================================== Hasil Perkalian Matriks =========================="<<endl;

    for(i=0; i< k; i++){
        for(j=0 ;j<l ; j++ ){
            cout<<hasil[i][j];
            cout<<" \t";
        }
        cout<<endl;
    }
}
