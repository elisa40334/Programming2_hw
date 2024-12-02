/*----預設代碼部分----*/
#include <iostream>
#include<iomanip>
using namespace std;
class active_region{
	protected:
		double VBB,VCC,VBE,RB,RC,Beta;
	public:
		virtual	void DC_analysis();
};
class saturation_region: public active_region{
	public:
		void DC_analysis();
};
int main(){
	bool region;
	cin >> region;
	active_region *ptr = (region == true ? new saturation_region : new active_region);
	ptr -> DC_analysis();
}

void saturation_region::DC_analysis(){
    cin >> VBB >> VCC >> VBE >> RB >> RC >> Beta;
    double IC,IB,IE,VCE;
    IB = (VBB-VBE)/RB;
    IC = Beta*IB;
    IE = (1+Beta)*IB;
    VCE = VCC-(IC*RC);
    cout << fixed << setprecision(2) << IC << " " <<IB << " " << IE << " " << VCE << endl;
}
void active_region::DC_analysis(){
    cin >> VBB >> VCC >> VBE >> RB >> RC >> Beta;
    double IC,IB,IE,VCE;
    VCE = 0.2;
    IC = (VCC-VCE)/RC;
    IB = (VBB-VBE)/RB;
    IE = IC+IB;
    cout << fixed << setprecision(2) << IC << " " <<IB << " " << IE << " " << VCE << endl;
}