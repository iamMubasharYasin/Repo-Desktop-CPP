#include"msoftcon.h"
using namespace std;
struct circle
{
	int xCo,yCo;
	int radius;
	color fillcolor;
	fstyle fillstyle;
};
void cric_draw(circle c)
{
	set_color(c.fillcolor);
	set_fill_style(c.fillstyle);
}
	int main()
	{
		init_grapphics();
	}
	circle c1={15,7,5,cBLUE,X_FILL};
	circle c2={41,12,7,cRED,O_FILL};
	circle c3={65,18,4,GREEN,MEDIUM_FILL};
	
	cric_draw(c1);
	cric_draw(c2);
	cric_draw(c3);
	set_cursor_pos(1,25);
	