#include <iostream>
#include <cmath>
#define PI acos(-1)

using namespace std;

enum {
	SUM, SUM_FROM_1, SANKAKU
};

double radians(double deg) {
	return deg * (PI / 180);
}

int main() {
    unsigned short option;

	cout << "オプションを設定してください。" << endl
		<< SUM << " > 足し算プログラム" << endl
		<< SUM_FROM_1 << " > 1から任意の数までの総和を計算するプログラム" << endl
		<< SANKAKU << " > 2辺と角θから面積を求めるプログラム" << endl << ">> ";

    cin >> option;

    while(option != SUM && option != SUM_FROM_1 && option != SANKAKU){
        cout << "オプションが存在しません。" << endl << ">> ";
        cin >> option;
    }

    switch(option){
        case SUM:
            long long n1, n2;
            cout << "元の数を入力してください。" << endl << ">> ";
            cin >> n1;
            cout << "足す数を入力してください。" << endl << ">> ";
            cin >> n2;

            cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
            break;

        case SUM_FROM_1:
            unsigned long long n3;
            cout << "任意の数を入力してください。" << endl << ">> ";
            cin >> n3;
            while(n3 < 1){
                cout << "自然数を入力してください。" << endl << ">> ";
                cin >> n3;
            }
            cout << "1 ～" << n3 << "までの総和は" << n3 * (n3 + 1) / 2 << endl;
            break;

        case SANKAKU:
		    double a, b, c, s, ans;
            cout << "辺Aの長さ : ";
            cin >> a;
            cout << "辺Bの長さ : ";
            cin >> b;
            cout << "角θの大きさ : ";
            cin >> c;

            s = a * sin(radians(c));
            ans = b * s * (1.0 / 2.0);

            cout << ans << "= √" << pow(ans, 2.0) << endl;
            break;
    }

    return 0;
}
