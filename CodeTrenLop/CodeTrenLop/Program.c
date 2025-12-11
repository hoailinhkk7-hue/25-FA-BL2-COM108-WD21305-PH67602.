#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



void kiemTraSoNguyen()
{

		int n;
		scanf_s("%d", &n);          
		int mang[100];

		for (int i = 0; i < n; i++) 
		{
			scanf_s("%d", &mang[i]);   
		}

		float tong = 0;
		int count = 0;

		for (int i = 0; i < n; i++) 
		{
			if (mang[i] % 3 == 0) 
			{
				tong += mang[i];
				count++;
			}
		}

		if (count > 0) 
		{
			printf("%.2f\n", tong / count);  
		}
		else 
		{
			printf("Khong co so nao chia het cho 3\n");
		}
}

void sapXepMang()
{
	int integerArray[100];
	int tmp; 
	int length;
	printf("Nhap kich thuoc mang: ");
	scanf_s("%d", &length);
	printf("Nhap du lieu cho mang %d phan tu\n", length);
	//int lenght = sizeof(mangSoNguyen) / sizeof(int);
	for (int i = 0; i < length ; i++)
	{
		printf("mang [%d] = ", i);
		scanf_s("%d", &integerArray[i]);
	}
	

	printf("Sap xep Giam dan du lieu cho mang %d phan tu\n", length);
	for (int i = 0; i < length - 1; i++)
	{
		if (integerArray[i] < integerArray[i + 1])
		{
			tmp = integerArray[i];
			integerArray[i] = integerArray[i + 1];
			integerArray[i + 1] = tmp;
			i = -1;
		}
	}

	printf("Du lieu cho mang %d phan tu\n", length);
	for (int i = 0; i < length; i++)
	{
		printf("mang[%d] = %d\n", i, integerArray[i]);
	}
}

void demoMang2Chieu()
{
	int array[2][3];

	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 2; i++)
		{
			printf("mang[%d][%d] = ", i, j);
			scanf_s("%d, ", &array[i][j]);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d, ", array[i][j]);
		}
		printf("\n");
	}
}

void demoString()
{
	char name[50] = "LinhDDH";
	while (getchar() != '\n');
	printf("Nhap ten cua ban: ");
	fgets(name, sizeof(name), stdin);
	printf("%s", name);
	printf("\n");

	printf("%d", strlen(name) - 1);
	printf("\n");

	printf("%s", strcmp("B", "b"));
	printf("\n");

}
	

void thongTinThuCung()
{
	system("cls");
	char maThuCung[10];
	char tenThuCung[50];
	int namSinh;
	int tuoi;
	printf("Nhap ma thu cung: ");
	scanf_s("%s", maThuCung, sizeof(maThuCung));
	printf("Nhap ten thu cung: ");
	scanf_s("%s", tenThuCung, sizeof(tenThuCung));
	printf("Nhap nam sinh thu cung: ");
	scanf_s("%d", &namSinh);
	tuoi = 2025 - namSinh;
	printf("\n");
	printf("Ma thu cung: %s\n", maThuCung);
	printf("Ten thu cung: %s\n", tenThuCung);
	printf("Tuoi thu cung: %d\n", tuoi);
}


void tinhTongVaKiemTra()
{
	int n, tong = 0;
	printf("Nhap mot so nguyen duong n (n > 3): ");
	scanf_s("%d", &n);
	if (n <= 3)
	{
		printf("n phai lon hon 3.\n");
	}

	for (int i = 1; i <= n; i += 2)
	{
		tong += i;
	}
	printf("Tong cac so le tu 1 den %d la: %d\n", n, tong);

	if (n % 5 == 0)
		printf("%d la so chia het cho 5.\n", n);
	else
		printf("%d khong phai so chia het cho 5.\n", n);
}



void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			sapXepMang();
			break;
		case 3:
			demoMang2Chieu();
			break;
		case 4:
			demoString();
			break;
		case 5:
			thongTinThuCung();
			break;
		case 6:
			tinhTongVaKiemTra();
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-3]");
			break;
		}

		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf_s("%d", &tiepTuc);
		system("cls");
	}

}



int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. Sap xep phan tu mang 1 chieu ");
		printf("\n");
		printf("3. De mo Mang 2 Chieu ");
		printf("\n");
		printf("4. De mo String");
		printf("\n");
		printf("5.Thong tin thu cung");
		printf("\n");
		printf("6.Tinh tong va kiem tra");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [0-5]: ");
		scanf_s("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}


// GV: AnhTT184

