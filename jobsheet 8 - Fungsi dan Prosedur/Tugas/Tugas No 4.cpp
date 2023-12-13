//Created by_Najwa Eldiara Owilia Tiksa_23343079
#include <iostream.h>
#include <stdio.h>
#include <conio.h>

bayar(long &harga,long diskon,long total)
{
return (total = harga - diskon);
}

potong (long harga,long &diskon)
{
            if(harga > 3000000)
               {
            diskon = harga * 0.35;
            }
            else if(harga >= 1000000)
            {
               diskon = harga * 0.2;
            }
           else
             {
               diskon = 0;
            }
}


main()
{
long harga, diskon, total;

cout<<"\tPROGRAM HITUNG POTONGAN\n";
cout<<"\Total Pembelian(Rp.)             :";cin>>harga;
potong(harga, diskon);
cout<<"Besar Diskon                      :"<<diskon<<endl;
cout<<"Besar Harga yang Harus dibayarkan :"<<bayar(harga, diskon, jumhar);
getch();
}