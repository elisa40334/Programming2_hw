/*----預設代碼部分----*/
#include<iostream>
#include<vector>
#include <cmath>
using namespace std;
class Xarray {
public:
	vector<double> X;
    double zx(){
        double add = 0;
        for (int i = 0; i < X.size(); i++) add += X[i];
        return add;
    }
    double zptx(){
        double add = 0;
        for (int i = 0; i < X.size(); i++) add += (X[i] * X[i]);
        return add*X.size();
    }
	/*
		建立自己計算需要的函式，限定只能用 vector X 進行計算
	*/
};
class Yarray {
public:
	vector<double>Y;
    double zy(){
        double add = 0;
        for (int i = 0; i < Y.size(); i++) add += Y[i];
        return add;
    }
    double zpty(){
        double add = 0;
        for (int i = 0; i < Y.size(); i++) add += (Y[i] * Y[i]);
        return add*Y.size();
    }
	/*
		建立自己計算需要的函式，限定只能用 vector Y 進行計算
	*/
};

class CC:public Xarray,public Yarray
{
public:
    double ans(){
        double add = 0;
        for (int i = 0; i < X.size(); i++) add += (X[i] * Y[i]);
        return ((add*X.size())-(zx()*zy()))/(sqrt(zptx()-pow(zx(),2))*(sqrt(zpty()-pow(zy(),2))));
    }
};
/*
	請建立 CC 類別，並繼承 Xarray、Yarray
	並以繼承的函式計算出相關係數 r (回傳記得要用絕對值)
*/
int main() {
	double total[10], r;
	while (cin >> total[0]) {
		for (int i = 1; i < 10; i++)	cin >> total[i];
        CC ans;
        for (int i = 0; i < 5; i++) ans.X.push_back(total[i]);
        for (int i = 5; i < 10; i++) ans.Y.push_back(total[i]);
        float x = ans.ans();
        if (abs(x) == 0) cout << "無相關" << endl;
        else if (abs(x) >= 1) cout << "完全相關" << endl;
        else if (abs(x) < 0.4) cout << "低度線性相關" << endl;
        else if (abs(x) >= 0.4 && abs(x) < 0.7) cout << "顯著線性相關" << endl;
        else if ((abs(x) >= 0.7) && (abs(x) < 1)) cout << "高度線性相關" << endl;
		/*
			1. 建立 CC 物件
			2. 透過 CC 物件將 total 分別 push_back 到 Xarray、Yarray 的 vector X、Y內，
			   並以類別函式進行相關係數的運算
			3. main() 內使用類別的函式 限定 用 CC 的物件！
			4. 最後請用已算出的相關係數 r 來判斷測資的相關程度
		*/
	}
	return 0;
}