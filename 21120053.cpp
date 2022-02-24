#include"Header.h"

int main()
{
	char tieptuc = 'Y';
	int n, count = 0, bai;

	while (tieptuc == 'Y')
	{
		do
		{
			cout << "Hay chon bai de thuc hien : ";
			cin >> bai;
		} while (bai < 1 && bai > 3);

		switch (bai)
		{
		case 1:
			
			do
			{
				cout << "Hay nhap n: ";
				cin >> n;
			} while (n < 10 && n > 10000000);

			cout << "Tat ca cac so so nguyen to nho hon " << n << " la: ";

			for (int i = 2; i <= n; i++)
			{
				if (NguyenTo(i) == true)
				{
					cout << i << " ";
					count++;
				}
			}

			cout << endl << "Co tat ca " << count << " so nguyen to nho hon " << n << endl;

			break;

		case 2:

			do
			{
				cout << "Hay nhap n: ";
				cin >> n;
			} while (n < 1000 && n > 10000000000);

			cout << "Tong cac so o vi tri chan cua " << n << " la: " << TongChuSoViTriChan(n);

			break;

		case 3:

			do
			{
				cout << "Hay nhap n: ";
				cin >> n;
			} while (n < 1000 && n > 10000000000);

			if (SoHappy(n))
			{
				cout << "So Happy";
			}
			else
			{
				cout << "Khong la so Happy";
			}

			break;
		}

		cout << endl << "Ban co muon tiep tuc? (Y: Co, N: Khong)." << endl;
		cin >> tieptuc;

		if (tieptuc = 'N')
		{
			cout << "Chuong trinh dung lai !!!";
		}
	}

	system("pause");

	return 0;
}