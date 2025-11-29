#include <stdio.h>

void kiemTraSoNguyen()
{

		int n;
		scanf("%d", &n);          
		int mang[100];

		for (int i = 0; i < n; i++) 
		{
			scanf("%d", &mang[i]);   
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
	scanf("%d", &length);
	printf("Nhap du lieu cho mang %d phan tu\n", length);
	//int lenght = sizeof(mangSoNguyen) / sizeof(int);
	for (int i = 0; i < length ; i++)
	{
		printf("mang [%d] = ", i);
		scanf("%d", &integerArray[i]);
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
			// ham goi chuc nang 3
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-3]");
			break;
		}

		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
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
		printf("3. TEN chuc nang 3");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}


// GV: AnhTT184