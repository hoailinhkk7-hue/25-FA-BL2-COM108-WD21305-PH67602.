#include <stdio.h>
#include <stdlib.h>

void kiemTraSoNguyen()
{
		int n, i;
		printf("Nhap so phan tu cua mang: ");
		scanf("%d", &n);


		int a[100];
		for (i = 0; i < n; i++) 
		{
			printf("Nhap du lieu thu %d: ", i + 1);
			scanf("%d", &a[i]);
		}

		float tong = 0;
		int count = 0;   

		for (i = 0; i < n; i++) 
		{
			if (a[i] % 3 == 0) 
			{
				tong += a[i];  
				count++;           
			}
		}

		if (count > 0) 
		{
			float tb = tong / count;
			printf("Trung binh cac so chia het cho 3 la: %.2f\n", tb);
		}
		else 
		{
			printf("Khong co phan tu nao chia het cho 3 trong mang.\n");
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
			// ham goi chuc nang 2
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
		printf("2. TEN chuc nang 2");
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


