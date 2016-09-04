
/** PROGRAM   : tampil ganjil.c 				    	            */
/** DESCRIPTION: Menampilkan bilangan ganjil antara 1 sampai dengan n */
/** NAME   	  : Cahyo Adhi Hartanto		    	                */
/** DATE   : 27 Agustus 2016     				    	    */


#include <stdio.h>
#include <stdlib.h>


/**Kamus Global**/
/*	type Tabint = array [1..1000] of integer */
typedef int Tabel[1000];



/*	procedure printsebelumurut ( input/output M:Tabel, input n: integer )
	{I.S.: T,berkas terdefinisi }
	{F.S.: M terisi sebanyak n elemen }
	{Proses: mencetak tabel sesuai dengan input dari user} */
void printsebelumurut (int n,Tabel M);


/*	procedure sorting ( input/output M:Tabel, input n: integer )
	{I.S.: M,berkas terdefinisi }
	{F.S.: semua elemen M terurut mengecil }
	{Proses: mencetak tabel sesuai dengan input dari user} */
void sorting (int n, Tabel M);
/*	procedure printsebelumurut ( input/output M:Tabel, input n: integer )
	{I.S.: T,berkas terdefinisi }
	{F.S.: M terisi sebanyak n elemen }
	{Proses: mencetak tabel sesuai dengan input dari user} */
void printsudahurut (int n,Tabel M);

/**Program Utama**/


int main (){

    /**Kamus Lokal**/
    Tabel M; /**tabel aktual*/
    int n; /***/
    char a;
    int i;
    char jj;
    /**Algoritma**/

    awal:
    system("cls");

    printf ("Masukkan banyaknya angka = ");
    if(scanf("%d%c", &n, &a) != 2 || a != '\n'){ /**mengecek apakah input hanya terdiri dari integer atau tidak*/
        printf("Masukkan harus berupa angka");

    }else
    if (n<=0){ /*akan dieksekusi jika masukaan kurang dari sama dengan 0*/
        printf("banyak angka harus lebih dari 1");

    }else{
        for (i=1; i<=n; i++){
            printf ("Masukkan data ke %d = " , i);
            if(scanf("%d%c", &M[i], &a) != 2 || a != '\n'){ /**mengecek apakah input hanya terdiri dari integer atau tidak*/


                printf("Data yang dimasukkan %d\n",n);
                n = i-1;
                printf("Masukkan terakhir bukan berupa angka\n");
                printf("Hanya diurutkan %d angka\n\n", n);


            }
        }
        system("cls");
        printf("Data yang dimasukkan %d\n\n",n);
        printsebelumurut(n,M);
        sorting(n,M);
        printsudahurut(n,M);
        }



    akhir:
    printf("\n\nIngin mengulang kembali ? (y/n) \n");
    scanf("%s", &jj);


     if (jj== 'y' || jj == 'Y'){
      goto awal;

    }else if (jj == 'n'|| jj == 'N'){
        exit(0);
    }else{
        printf ("\nMasukkan tidak valid");
        system("cls");
        goto akhir;
    }



return 0;
}




/*	procedure printsebelumurut ( input/output M:Tabel, input n: integer )
	{I.S.: M,berkas terdefinisi }
	{F.S.: - }
	{Proses: mencetak tabel sesuai dengan input dari user} */
void printsebelumurut (int n,Tabel M)
{

        /*Kamus lokal**/
        int i; /*sebagai indeks*/
        /*Algoritma*/

        printf("Data sebelum diurutkan : ");
        for (i=1;i<=n;i++){
            printf("%d ", M[i]);
        }


}


/*	procedure sorting ( input/output M:Tabel, input n: integer )
	{I.S.: M,berkas terdefinisi }
	{F.S.: semua elemen M terurut mengecil }
	{Proses:  mengurutkan elemen M secara sekuensial dari M[1] sampai M[N]} */
void sorting (int n, Tabel M){
        /**Kamus Global**/
        int i,j;
        /**Algoritma**/
        for (i=1;i<=n;i++){
            for (j=i+1;j<=n;j++){
                if (M[i]<=M[j]){
                    M[j]=M[i] + M[j];
                    M[i]=M[j]-M[i];
                    M[j]=M[j]-M[i];
                }
            }
        }
}


/*	procedure printsebelumurut ( input/output M:Tabel, input n: integer )
	{I.S.: T,berkas terdefinisi }
	{F.S.: M terisi sebanyak n elemen }
	{Proses: mencetak tabel sesuai dengan input dari user} */
void printsudahurut (int n,Tabel M)
{
        /*Kamus Lokal*/
        int i; /**sebagai indeks*/
        /*Algoritma*/
        printf("\n\nData setelah diurutkan : ");
        for (i=1;i<=n;i++){
            printf("%d ", M[i]);

        }
}



