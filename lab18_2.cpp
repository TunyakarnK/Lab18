#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
	double MaxX,MaxY,MinX,MinY;
	if(R1->x>R2->x){
		MaxX = R1->x;
	}else{
		MaxX = R2->x;
	}
	if(R1->x+R1->w>R2->x+R2->w){
		MinX = R2->x+R2->w;
		}else{
		MinX = R1->x+R1->w;
	}
	if(R1->y<R2->y){
		MinY = R1->y;
	}else{
		MinY = R2->y;
		}
	if(R1->y-R1->h>R2->y-R2->h){
		MaxY = R1->y-R1->h;
		}else{
		MaxY = R2->y-R2->h;
		}
	if ((MinX-MaxX)*(MinY-MaxY)>0){
		return (MinX-MaxX)*(MinY-MaxY);
	}else return 0;
}
