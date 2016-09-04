/** PROGRAM   : cek prima.c 				    	            */
/** DESKRIPSI : Mengecek inputan apakah bilangan prima atau bukan */
/** NAMA   	  : Cahyo Adhi Hartanto		    	                */
/** TANGGAL   : 27 Agustus 2016     				    	    */



/***Kamus Global**/
#include <stdio.h>
#include <stdlib.h>


/*	procedure cekprima ( input j: integer )
	{I.S.: j terdefinsis}
	{F.S.: k terdefinisi}
	{Proses: Mengecek bilangan yang dimasukkan bilangan prima atau tidak dengan menghitung jumlah faktor */
void cekprima (int j,int *k);

/*	procedure printhasil ( input j: integer )
	{I.S.: j terdefinsis}
	{F.S.: -}
	{Proses: mencetak bilangan prima atau tidak */
void printhasil (int k,int j);


/**Program Utama**/

int main (){

   /**Kamus Lokal**/
   int j; /**untuk menghitung input*/
   int k; /**untuk menghitung jumlah faktor*/
   char a; /**sebagai input untuk mendeteksi masukan selain angka*/
   char jj;
   /**Algoritma**/

    awal:
    system("cls");
    printf("Masukkan bilagan yang diinginkan = ");
     if(scanf("%d%c", &j, &a) != 2 || a != '\n'){ /**mengecek apakah input hanya terdiri dari integer atau tidak*/
        printf("Masukkan harus berupa angka");

    }else if (j<1){
        printf("Bilangan  yang dimasukkan harus lebih dari 0");
        goto awal;
    } else {
        cekprima(j,&k);
        printhasil(k,j);
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


/*	procedure cekprima ( input j: integer )
	{I.S.: j terdefinsis}
	{F.S.: k terdefinisi}
	{Proses: Mengecek bilangan yang dimasukkan bilangan prima atau tidak dengan menghitung jumlah faktor */
void cekprima (int j,int *k){
    /**Kamus Lokal**/
    int i; // indeks

    /**Algoritma**/
    (*k)=0; /**inisialisasi faktor*/
    for (i=1;i<=j;i++)
    {
            if (j % i == 0){
                (*k)++;
            }
    }

}
/*	procedure printhasil ( input j: integer )
	{I.S.: j terdefinsis}
	{F.S.: -}
	{Proses: mencetak bilangan prima atau tidak */
void printhasil (int k,int j){


    if (k == 2){ /**dieksekusi jika bilangan prima*/
        printf("%d adalah bilangan prima", j);
    }else {
        printf ("%d bukan bilangan prima",j);
    }


}






