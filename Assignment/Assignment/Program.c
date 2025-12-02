#include <stdio.h>
#include <math.h>
#include <stdlib.h> // Tham khao



void kiemtrasonguyen()
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

void timboiuoccua2so()
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

void karaoke()
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

void ttiendien()
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

void doitien()
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

void vayVon()
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