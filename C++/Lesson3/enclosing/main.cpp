class CTyre { //轮胎类
	private:
		int radius; //半径
		int width; //宽度
	public:
		CTyre(int r, int w):radius(r), width(w) { }
	};

	class CEngine { //引擎类
};

class CCar { //汽车类
	private:
		int price; //价格
		CTyre tyre;
		CEngine engine;
	public:
		CCar(int p, int tr, int tw);
};

CCar::CCar(int p, int tr, int w):price(p), tyre(tr, w)
{

};

int main(){
	CCar car(20000,17,225);
	return 0;
}