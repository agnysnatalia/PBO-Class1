#include <iostream>
#include <string>

using namespace std;
class Invoice
{
 public:
  Invoice( string, string, int, int );
  void setPartNumber( string );
  string getPartNumber();
  void setPartDescription(string);
  string getPartDescription();
  void setItemQuantity(int);
  int getItemQuantity();
  void setItemPrice(int);
  int getItemPrice();
  int getInvoiceAmount();
 private:
  string partNumber;
  string partDescription;
  int itemQuantity;
  int itemPrice;
};
Invoice::Invoice ( string number, string description, int quant, int price )
{
	{
 partNumber=number;
 partDescription=description;
 if(quant>0)
  itemQuantity=quant;
 else
 {
  itemQuantity=0;
  cout<<"Kuantitas awal tidak valid."<<endl;
 }
 if(price>0)
  itemPrice=price;
 else
 {
  itemPrice=0;
  cout<<"Harga awal tidak valid."<<endl;
 }
}
}

void Invoice::setPartNumber (string number)
{
	partNumber = number;
}

string Invoice::getPartNumber ()
{
	return partNumber;
}

void Invoice::setPartDescription (string desc)
{
	partDescription = desc;
}

string Invoice::getPartDescription()
{
	return partDescription;
}

void Invoice::setItemQuantity (int quant)
{
 if(quant>0)
  itemQuantity=quant;
 else
 {
  itemQuantity=0;
  cout<<"Kuantitas awal tidak valid."<<endl;
 }
}

int Invoice::getItemQuantity()
{
 return itemQuantity;
}

int Invoice::getItemPrice()
{
 return itemPrice;
}

int Invoice::getInvoiceAmount()
{
 return itemQuantity*itemPrice;
}
int main()
{
 Invoice Invoice1("ba78","Sekrup",300,350);
 Invoice Invoice2("b776","Paku",250,500);
 cout << "Nomor barang tagihan1 adalah: "<< Invoice1.getPartNumber()<< "\ndan nama barang adalah: "<< Invoice1.getPartDescription()<<endl;
 cout<< "Banyaknya tiap barang adalah: "<< Invoice1.getItemQuantity()<< "\nharga tiap barang adalah: "<< Invoice1.getItemPrice()<< endl;
 cout<<"Jumlah total tagihan1 adalah: "<<Invoice1.getInvoiceAmount()<<endl<<endl;
 cout << "Nomor barang tagihan2 adalah: "<< Invoice2.getPartNumber()<< "\ndan nama barang adalah: "<< Invoice2.getPartDescription()<<endl;
 cout<< "Banyaknya tiap barang adalah: "<< Invoice2.getItemQuantity()<< "\nharga tiap barang adalah: "<< Invoice2.getItemPrice()<< endl;
 cout<<"Jumlah total tagihan2 adalah: "<<Invoice2.getInvoiceAmount()<<endl;
}
