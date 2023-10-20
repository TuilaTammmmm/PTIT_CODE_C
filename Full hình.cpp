#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double area, perimeter;

    while (true) {
        cout << "Chọn hình học (1-9) hoặc 0 để thoát: ";
        cin >> choice;

        switch (choice) {
            case 0:
                cout << "Kết thúc chương trình." << endl;
                return 0;
            case 1: // Hình vuông
            {
                double side;
                cout << "Nhập độ dài cạnh hình vuông: ";
                cin >> side;
                if (side <= 0) {
                    cout << "Độ dài cạnh không hợp lệ. Vui lòng nhập lại." << endl;
                    break;
                }
                perimeter = 4 * side;
                area = side * side;
                break;
            }
            case 2: // Hình chữ nhật
            {
                double length, width;
                cout << "Nhập chiều dài hình chữ nhật: ";
                cin >> length;
                cout << "Nhập chiều rộng hình chữ nhật: ";
                cin >> width;
                if (length <= 0 || width <= 0) {
                    cout << "Kích thước không hợp lệ. Vui lòng nhập lại." << endl;
                    break;
                }
                perimeter = 2 * (length + width);
                area = length * width;
                break;
            }
            case 3: // Hình tam giác
            {
                double a, b, c;
                cout << "Nhập độ dài các cạnh của tam giác:" << endl;
                cout << "Nhập cạnh a: ";
                cin >> a;
                cout << "Nhập cạnh b: ";
                cin >> b;
                cout << "Nhập cạnh c: ";
                cin >> c;
                if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
                    cout << "Kích thước không hợp lệ. Vui lòng nhập lại." << endl;
                    break;
                }
                perimeter = a + b + c;
                double p = perimeter / 2;
                area = sqrt(p * (p - a) * (p - b) * (p - c));
                break;
            }
            case 4: // Tam giác vuông sai
            {
                double a, b, c;
                cout << "Nhập độ dài các cạnh của tam giác vuông sai:" << endl;
                cout << "Nhập cạnh a: ";
                cin >> a;
                cout << "Nhập cạnh b: ";
                cin >> b;
                cout << "Nhập cạnh c: ";
                cin >> c;
                if (a <= 0 || b <= 0 || c <= 0 || !(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)) {
                    cout << "Kích thước không hợp lệ hoặc không phải tam giác vuông. Vui lòng nhập lại." << endl;
                    break;
                }
                perimeter = a + b + c;
                double s = perimeter / 2;
                area = sqrt(s * (s - a) * (s - b) * (s - c));
                break;
            }
            case 5: // Hình thang
            {
                double a, b, h;
                cout << "Nhập độ dài đáy lớn: ";
                cin >> a;
                cout << "Nhập độ dài đáy nhỏ: ";
                cin >> b;
                cout << "Nhập chiều cao: ";
                cin >> h;
                if (a <= 0 || b <= 0 || h <= 0 || a <= b) {
                    cout << "Kích thước không hợp lệ. Vui lòng nhập lại." << endl;
                    break;
                }
                perimeter = a + b + 2 * sqrt(pow((a - b) / 2, 2) + h * h);
                area = ((a + b) / 2) * h;
                break;
            }
            case 6: // Hình thang cân
            {
                double a, b, h;
                cout << "Nhập độ dài đáy lớn: ";
                cin >> a;
                cout << "Nhập độ dài đáy nhỏ: ";
                cin >> b;
                cout << "Nhập chiều cao: ";
                cin >> h;
                if (a <= 0 || b <= 0 || h <= 0 || a <= b) {
                    cout << "Kích thước không hợp lệ. Vui lòng nhập lại." << endl;
                    break;
                }
                perimeter = a + b + 2 * sqrt(pow((a - b) / 2, 2) + h * h);
                area = ((a + b) / 2) * h;
                break;
            }
            case 7: // Hình tròn
            {
                double r;
                cout << "Nhập bán kính hình tròn: ";
                cin >> r;
                if (r <= 0) {
                    cout << "Bán kính không hợp lệ. Vui lòng nhập lại." << endl;
                    break;
                }
                perimeter = 2 * M_PI * r;
                area = M_PI * r * r;
                break;
            }
            case 8: // Hình thoi
            {
                double d1, d2;
                cout << "Nhập độ dài đường chéo lớn: ";
                cin >> d1;
                cout << "Nhập độ dài đường chéo nhỏ: ";
                cin >> d2;
                if (d1 <= 0 || d2 <= 0) {
                    cout << "Kích thước không hợp lệ. Vui lòng nhập lại." << endl;
                    break;
                }
                perimeter = 2 * sqrt(d1 * d1 + d2 * d2);
                area = (d1 * d2) / 2;
                break;
            }
            case 9: // Hình bình hành
            {
                double a, b;
                cout << "Nhập độ dài cạnh a: ";
                cin >> a;
                cout << "Nhập độ dài cạnh b: ";
                cin >> b;
                if (a <= 0 || b <= 0) {
                    cout << "Kích thước không hợp lệ. Vui lòng nhập lại." << endl;
                    break;
                }
                perimeter = 2 * (a + b);
                area = a * b;
                break;
            }
            default:
                cout << "Lựa chọn không hợp lệ. Vui lòng nhập lại." << endl;
        }

        if (choice >= 1 && choice <= 9) {
            cout << "Chu vi: " << perimeter << endl;
            cout << "Diện tích: " << area << endl;
        }
    }

    return 0;
}
