#include <stdio.h>
#include <math.h>
#include <stdlib.h> // Tham khao



void kiemtrasonguyen()
{
    char Tieptuc;
    do
    {
        system("cls");
        int x;
        printf("Moi nhap gia tri x ban muon kiem tra : ");
        scanf("%d", &x);

        printf("X la so nguyen? -> Correct\n");

        
        int isPrime = 1; // tham khao
        if (x < 2) 
        {
            isPrime = 0;
        }
        else {
            for (int i = 2; i <= sqrt(x); i++) 
            {
                if (x % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime == 1) 
        {
            printf("X la so nguyen to? -> Correct\n");
        }
        else 
        {
            printf("X la so nguyen to? -> Incorrect\n");
        }


        if (x < 0) 
        {
            printf("X la so chinh phuong? -> Incorrect\n");
        }
        else 
        {
            int root = (int)sqrt(x);  // tham khao
            if (root * root == x)   
            {
                printf("X la so chinh phuong? -> Correct\n");
            }

            else 
            {
                printf("X la so chinh phuong? -> Incorrect\n");
            }
        }

        printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
        scanf(" %c", &Tieptuc);
    } while (Tieptuc == 'y' || Tieptuc == 'Y');
}

void timboiuoccua2so()
{
    char Tieptuc;
    do
    {
        system("cls");
        int x, y;
        printf("Moi ban nhap 2 so nguyen bat ki (x, y): ");
        scanf("%d %d", &x, &y);

        int uscln = 1; 
        int bcnn = x * y; 

        int min = (x < y) ? x : y;
        for (int i = min; i >= 1; i--) // tham khao
        {
            if (x % i == 0 && y % i == 0) 
            {
                uscln = i;
                break; 
            }
        }

    
        int max = (x > y) ? x : y;
        for (int i = max; i <= x * y; i++) // tham khao
        {
            if (i % x == 0 && i % y == 0)
            {
                bcnn = i;
                break; 
            }
        }

     
        if (uscln > 0) 
        {
            printf("Uoc so chung lon nhat cua %d va %d la: %d\n", x, y, uscln);
        }
        else
        {
            printf("Khong co USCLN\n");
        }

        if (bcnn > 0) 
        {
            printf("Boi so chung nho nhat cua %d va %d la: %d\n", x, y, bcnn);
        }
        else 
        {
            printf("Khong co BSCNN\n");
        }

        printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
        scanf(" %c", &Tieptuc);
    } while (Tieptuc == 'y' || Tieptuc == 'Y');
}

void karaoke()
{
    char Tieptuc;
    do
    {
        system("cls");
        int start, end;  // tham khao
        printf("Gio bat dau: ");
        scanf("%d", &start);
        printf("Gio ket thuc: ");
        scanf("%d", &end);

        // Ki?m tra gi? h?p l?
        if (start < 12 || end > 23 || start >= end) // tham khao
        {
            printf("Invalid time entered! The shop is only open from 12h to 23h.\n");
        }
        else 
        {
            int hours = end - start;  //tham khao
            int total = 0; // tham khao

           
            for (int i = 1; i <= hours; i++) 
            {
                if (i <= 3) 
                {
                    total += 150000; 
                }
                else 
                {
                    total += 150000 * 0.7; // giam 30% còn 70% tien phai tra
                }
            }

            
            if (start >= 14 && start <= 17) 
            {
                total = total * 0.9;// gi?m 10% con 90% phai tra
            }

            printf("Tong thoi gian: %d\n", hours);
            printf("So tien can thanh toan: %d\n", total);
        }

        printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
        scanf(" %c", &Tieptuc);
    } while (Tieptuc == 'y' || Tieptuc == 'Y');
}

void ttiendien()
{
    char Tieptuc;
    do
    {
        system("cls");
        int kwh;
        printf("Nhap so kWh dien su dung: ");
        scanf("%d", &kwh);

        int total = 0;// phep toan cong don

     // tinh theo tung bac
        for (int i = 1; i <= kwh; i++) // tham khao
        {
            if (i <= 50) 
            {
                total += 1678;
            }
            else if (i <= 100) 
            {
                total += 1734;
            }
            else if (i <= 200) 
            {
                total += 2014;
            }
            else if (i <= 300) 
            {
                total += 2536;
            }
            else if (i <= 400) 
            {
                total += 2834;
            }
            else 
            {
                total += 2927;
            }
        }

        printf("So tien dien phai tra: %d VND\n", total);


        printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
        scanf(" %c", &Tieptuc);
    } while (Tieptuc == 'y' || Tieptuc == 'Y');
}

void doitien()
{
    char Tieptuc;
    do
    {
        system("cls");
        int tien;
        printf("So tien ban muon doi: ");
        scanf("%d", &tien);

        int array[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
        int count; // do luong to tien

        for (int i = 0; i < 9; i++) 
        {
            if (tien >= array[i]) 
            {
                count = tien / array[i];
                tien = tien % array[i];
                printf("%d to : %d.000 VND\n", count, array[i]);
            }
            else if (tien == 0) 
            {
                break;
            }
        }

        printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
        scanf(" %c", &Tieptuc);
    } while (Tieptuc == 'y' || Tieptuc == 'Y');
}

void vayVon()
{
    char Tieptuc;
    do
    {
        system("cls");
        int tienVay;
        printf("Nhap so tien ban can vay: ");
        scanf("%d", &tienVay);

        int gocPhaiTra = tienVay / 12;
        int soTienConLai = tienVay;
        float lai, tong;

        // In tiêu ?? b?ng
        printf("\n+-------+-------------------+-------------------+------------------------+------------------------+\n");
        printf("| Thang | Lai phai tra      | Goc phai tra      | Tong phai tra          | So tien con lai        |\n");       // tham khao cach trinh bay
        printf("+-------+-------------------+-------------------+------------------------+------------------------+\n");

       
        for (int thang = 1; thang <= 12; thang++) 
        {
            if (soTienConLai > 0) 
            {
                lai = soTienConLai * 0.05;
                tong = lai + gocPhaiTra;
                soTienConLai -= gocPhaiTra;

                printf("| %-5d | %-17.0f | %-17d | %-22.0f | %-22d |\n",
                    thang, lai, gocPhaiTra, tong, soTienConLai);
            }
            else if (soTienConLai == 0)
            {
                printf("| %-5d | %-17.0f | %-17d | %-22.0f | %-22d |\n",
                    thang, 0.0, gocPhaiTra, (float)gocPhaiTra, 0);
            }
        }
        printf("+-------+-------------------+-------------------+------------------------+------------------------+\n");



        printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
        scanf(" %c", &Tieptuc);
    } while (Tieptuc == 'y' || Tieptuc == 'Y');
}

void muaxe()
{
    char Tieptuc;
    do
    {
        system("cls");
        printf("Chuong trinh dang phat trien, vui long cho ^^\n");

        printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
        scanf(" %c", &Tieptuc);
    } while (Tieptuc == 'y' || Tieptuc == 'Y');
}

void thongTin()
{
    char Tieptuc;
    do
    {
        system("cls");
        printf("Chuong trinh dang phat trien, vui long cho ^^\n");

        printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
        scanf(" %c", &Tieptuc);
    } while (Tieptuc == 'y' || Tieptuc == 'Y');
}

void game()
{
    char Tieptuc;
    do
    {
        system("cls");
        printf("Chuong trinh dang phat trien, vui long cho ^^\n");

        printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
        scanf(" %c", &Tieptuc);
    } while (Tieptuc == 'y' || Tieptuc == 'Y');
}

void phanso()
{
    char Tieptuc;
    do
    {
        system("cls");
        printf("Chuong trinh dang phat trien, vui long cho ^^\n");

        printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
        scanf(" %c", &Tieptuc);
    } while (Tieptuc == 'y' || Tieptuc == 'Y');
}

int main()
{
    int chon;
    do
    {
        system("cls");
        printf("MENU CHUC NANG\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim Uoc va Boi chung cua 2 so\n");
        printf("3. Tinh tien Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Lai suat ngan hang\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Xay dung game FPOLY-LOTT (2/15)\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat chuong trinh\n");
        printf("Vui long chon chuc nang tren MENU: ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            kiemtrasonguyen();
            break;
        case 2:
            timboiuoccua2so();
            break;
        case 3:
            karaoke();
            break;
        case 4:
            ttiendien();
            break;
        case 5:
            doitien();
            break;
        case 6:
            vayVon();
            break;
        case 7:
            muaxe();
            break;
        case 8:
            thongTin();
            break;
        case 9:
            game();
            break;
        case 10:
            phanso();
            break;
        case 0:
            printf("Thoat chuong trinh\n");
            break;
        default:
            printf("Chuc nang ban chon khong hop le. Vui long chon lai!\n");
            break;
        }
    } while (chon != 0);
}