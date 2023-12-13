#include <conio.h>
#include <iostream>
#include <stdio.h>

struct databrg
{
   char namabrg[15];
   long hrgsatuan;
   int jmlhbeli;
};

struct abc
{
 int nota,jmlhtrx,bayar;

   databrg * d;
};
 abc t;

long total(int a)
{long th;
th=t.d[a].hrgsatuan*t.d[a].jmlhbeli;
return th;
}


long subtotal()
{long s;
 s=0;
   for(int i=0;i<t.jmlhtrx;i++)
    {s=s+total(i);}

   return s;

}
long diskon()
{long d;
 if (subtotal()>180000)
    {d=subtotal()*0.15;}
   else if (subtotal()>70000)
    {d=subtotal()*0.05;}
   else
    {d=0;}
   return d;
}
 long ppn()
 {long p;
    p=0.1*subtotal();
      return p;
}
 long grand()
   {long g;
    g=subtotal()-diskon()+ppn();
      return g;
}
long kembalian()
   {long k;
    k=t.bayar-grand();
   return k;
}
void tampil(int u)
{
 cout<<setiosflags(ios::left)<<setw(15)<<t.d[u].namabrg;
   cout<<setw(1)<<"Rp. ";
   cout<<setiosflags(ios::right)<<setw(2)<<t.d[u].hrgsatuan;
   cout<<setw(5)<<t.d[u].jmlhbeli<<endl;
}

int main(void)
{
cout<<"=============================================="<<endl;
cout<<"           SWALAYAN USAHA MANDIRI              "<<endl;
cout<<"=============================================="<<endl;
cout<<"No Nota : "; cin>>t.nota;
cout<<endl;
cout<<"Jumlah transaksi : ";cin>>t.jmlhtrx;
t.d=new databrg[t.jmlhtrx];
for(int i=0;i<t.jmlhtrx;i++)
{
cout<<endl;
cout<<"Transaksi ke-"<<(i+1)<<endl;
cout<<"Nama Barang : "; cin>>t.d[i].namabrg;
cout<<"Harga Satuan : "; cin>>t.d[i].hrgsatuan;
cout<<"Jumlah Beli : "; cin>>t.d[i].jmlhbeli;
}
system ("CLS");
         cout<<"SWALAYAN USAHA MANDIRI\n";
      cout<<"Jl. Bina Sarana No. 851-OK\n";
      cout<<"\n";
 cout<<"======================================"<<endl;
   cout<<"Nama          Harga      Jumlah       "<<endl;
   cout<<"Barang        satuan     Beli         "<<endl;
   cout<<"======================================"<<endl;
   for(int i=0;i<t.jmlhtrx;i++)
    {tampil(i);}
     cout<<"======================================"<<endl;
     cout<<"SubTotal    : Rp. "<<subtotal()<<endl;
     cout<<"Diskon      : Rp. "<<diskon()<<endl;
     cout<<"PPN 10%     : Rp. "<<ppn()<<endl;
     cout<<"Grand Total : Rp. "<<grand()<<endl;
     cout<<"Bayar       : Rp. "; cin>>t.bayar;
     cout<<"\n";
     cout<<"Kembalian   : Rp. "<<kembalian()<<endl;
     cout<<"\n";
     cout<<"Terimakasih Atas \n";
      cout<<"Kunjungan Anda \n";

   getch();

   }
