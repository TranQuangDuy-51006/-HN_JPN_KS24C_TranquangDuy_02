#include<stdio.h>

int main(){
	int arr[100];
	int size = 0, choice;
	do{
		printf("\n\n\tMENU\n");
		printf("\n1. Nhap vao so phan tu va gia tri cho mang.\n");
		printf("2. In ra cac phan tu trong mang.\n");
		printf("3. Tim so hoan hao.\n");
		printf("4. In ra phan tu lon thu 2 cua mang.\n");
		printf("5. Them vao phan tu moi.\n");
		printf("6. Xoa phan tu.\n");
		printf("7. Sap xep mang theo thu tu tang dan.\n");
		printf("8. Tim kiem phan tu.\n");
		printf("9. Sap xep dua so le len truoc so chan xuong cuoi mang va in ra.\n");
		printf("10. Dao nguoc phan tu trong mang.\n");
		printf("11. Thoat\n");
		printf("\nNhap lua chon cua ban: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Nhap vao kich thuoc cua mang: ");
				scanf("%d", &size);
				if(size > 0){
					for(int i = 0; i < size; i++){
						printf("Nhap vao phan tu thu %d cua mang: ", i + 1);
						scanf("%d", &arr[i]);
					}
				}else{
					printf("kich thuoc mang khong hop le");
				}
				break;
			case 2:
				if(size > 0){
					for(int i = 0; i < size; i++){
						printf("arr[%d] = %d\n", i, arr[i]);
					}
				}else{
					printf("chua khoi tao mang");
				}
				break;
			case 3:
				if(size > 0){
					for(int i = 0; i < size; i++){
						int sum = 0;
						int n = arr[i];
						for(int j = 1; j < n;j++){
							if(n % j ==0){
								sum += j;
							}
						}
						if(n == sum){
							printf("so hoan hao la: %d\n", n);
						}
					}
				}else{
					printf("chua khoi tao mang");
				}
				break;
			case 4:
				if(size > 0){
					int max = arr[0];
					int max2;
					for(int i = 1; i < size; i++){
						if(max < arr[i]){
							max = arr[i];
						}
					}
					for(int i = 0; i < size; i++){
						if(max2 < arr[i]&&arr[i] < max){
							max2 = arr[i];
						}
					}
					printf("Phan tu lon thu 2 cua mang la: %d", max2);
				}else{
					printf("chua khoi tao mang");
				}
				break;
			case 5:
				if(size > 0){
					int viTri, phanTu;
					printf("Nhap vao vi tri muon them: ");
					scanf("%d", &viTri);
					if(viTri < 0|| viTri > size){
						printf("vi tri khong hop le\n");
						continue;
					}
					printf("Nhap vao phan tu muon them: ");
					scanf("%d", &phanTu);
					for(int i = size; i > viTri-1; i--){
						arr[i] = arr[i - 1];
					}
					arr[viTri - 1] = phanTu;
					size ++;
				}else{
					printf("chua khoi tao mang");
				}
				break;
			case 6:
				if(size > 0){
					int viTri;
					printf("Nhap vao vi tri muon xoa: ");
					scanf("%d", &viTri);
					if(viTri < 0|| viTri > size){
						printf("vi tri khong hop le\n");
						continue;
					}
					for(int i = viTri - 1; i < size; i++){
						arr[i] = arr[i + 1];
					}
					size --;
				}else{
					printf("chua khoi tao mang");
				}
				break;
			case 7:
				if(size > 0){
					for(int i = size - 1; i > 0; i--){
						for(int j = 0; j < i; j++){
							if(arr[j] > arr[j+1]){
								int temp = arr[j];
								arr[j] = arr[j+1];
								arr[j+1] = temp;
							}
						}
					}
				}else{
					printf("chua khoi tao mang");
				}
				break;
			case 8:
				if(size > 0){
					int search;
					int check = 0;
					printf("So can tim: ");
					scanf("%d", &search);
					for(int i =0; i < size; i++){
						if(search == arr[i]){
							check = 1;
						}
					}
					if(check == 1){
						printf("Phan tu co ton tai trong mang\n");
					}else{
						printf("Phan tu khong ton tai trong mang");
					}
				}else{
					printf("chua khoi tao mang");
				}
				break;
			case 9:
				if(size > 0){
					for(int i = size - 1; i > 0; i--){
						for(int j = 0; j < i; j++){
							if(arr[j]%2!=0){
								int temp = arr[j];
								arr[j] = arr[j+1];
								arr[j+1] = temp;
							}
						}
					}
					printf("\nmang sau khi sap xep:\n");
					for(int i = 0; i < size; i++){
						printf("%d ", arr[i]);
					}
				}else{
					printf("chua khoi tao mang");
				}
				break;
			case 10:
				if(size > 0){
					printf("Het gio khong lam kip!!!!!\n");
				}else{
					printf("chua khoi tao mang");
				}
				break;
			case 11:
				printf("thoat!");
				break;
			default:
				printf("Lua chon khong hop le!");		
		}
	}while(choice != 11);
	return 0;
}
