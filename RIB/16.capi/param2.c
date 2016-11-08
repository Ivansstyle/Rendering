/* param.c - create a linear patch to demonstrate
			parameter lists */

#include <ri.h>

int main(int argc, char *argv[])
{
RtPoint square[4]={{0,0,0},{1,0,0},{0,1,0},{1,1,0}};
RtColor red={1,0,0};
float fov[1]={30};

RiBegin(RI_NULL);
	RiDisplay ("param2.tiff","file","rgb",RI_NULL);
	
	{
	char *tokens[]={"fov"};
	void *vals[]={fov};
	RiProjectionV("perspective",1,tokens,vals);
	}
	RiTranslate(-0.5,-0.5,3);
	RiWorldBegin();
		RiColor(red);
		RiPatch("bilinear","P",square,
					RI_NULL);
	RiWorldEnd();
RiEnd();
return 0;
}
