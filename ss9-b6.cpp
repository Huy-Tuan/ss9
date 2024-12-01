#include<stdio.h>

int main() {
    int matrix[100][100], rows = 0, cols = 0, choice;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so dong: ");
                scanf("%d", &rows);
                printf("Nhap so cot: ");
                scanf("%d", &cols);
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("Phan tu [%d][%d]: ", i + 1, j + 1);
                        scanf("%d", &matrix[i][j]);
                    }
                }
                break;

            case 2:
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("%d ", matrix[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                {
                    int sum = 0;
                    for (int i = 0; i < rows; i++) {
                        for (int j = 0; j < cols; j++) {
                            if (matrix[i][j] % 2 != 0) {
                                printf("%d ", matrix[i][j]);
                                sum += matrix[i][j];
                            }
                        }
                    }
                    printf("\nTong cac phan tu le: %d\n", sum);
                }
                break;

            case 4:
                {
                    int product = 1, has_border = 0;
                    for (int i = 0; i < rows; i++) {
                        for (int j = 0; j < cols; j++) {
                            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                                printf("%d ", matrix[i][j]);
                                product *= matrix[i][j];
                                has_border = 1;
                            }
                        }
                    }
                    if (has_border) {
                        printf("\nTich cac phan tu tren duong bien: %d\n", product);
                    } else {
                        printf("\nKhong co duong bien.\n");
                    }
                }
                break;

            case 5:
                if (rows == cols) {
                    for (int i = 0; i < rows; i++) {
                        printf("%d ", matrix[i][i]);
                    }
                    printf("\n");
                } else {
                    printf("Ma tran khong vuong.\n");
                }
                break;

            case 6:
                if (rows == cols) {
                    for (int i = 0; i < rows; i++) {
                        printf("%d ", matrix[i][rows - i - 1]);
                    }
                    printf("\n");
                } else {
                    printf("Ma tran khong vuong.\n");
                }
                break;

            case 7:
                {
                    int max_row_sum = -1, max_row_index = -1;
                    for (int i = 0; i < rows; i++) {
                        int row_sum = 0;
                        for (int j = 0; j < cols; j++) {
                            row_sum += matrix[i][j];
                        }
                        if (row_sum > max_row_sum) {
                            max_row_sum = row_sum;
                            max_row_index = i;
                        }
                    }
                    printf("Dong co tong lon nhat: %d\n", max_row_index + 1);
                    for (int j = 0; j < cols; j++) {
                        printf("%d ", matrix[max_row_index][j]);
                    }
                    printf("\nTong: %d\n", max_row_sum);
                }
                break;

            case 8:
                return 0;

            default:
                printf("Lua chon khong hop le.\n");
        }
    }

    return 0;
}

