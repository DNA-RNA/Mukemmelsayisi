#include<iostream>
  
using namespace std;




int main() {

	int sayi;
	int toplam = 0;
	cout << "Sayi giriniz:";
	cin >> sayi;
	for (int i = 1;i < sayi;i++) 
	{
		if (sayi % i == 0) {
			 toplam = toplam + i;
			
		}
		
	
	}

	if (toplam == sayi)
		cout << "Sayiniz mukemmel sayisidir." << endl;
	else cout << "Sayiniz mukemmel sayisi degildir." << endl;
	
	
	system("PAUSE");
	return 0;

	

}
