#include <stdio.h>
#include <math.h>
int main()
{
	    float a,b,c;
			    printf("请输入triangle的三条边:\n");
				    scanf("%f %f %f",&a,&b,&c);
					    if(a+b>c&&b+c>a&&a+c>b)
							    {
															      if(a==b&&a==c)
																		            printf("三角形是等边三角形\n");
																	        else if(a==b||a==c||b==c)
																				            printf("三角形是等腰三角形\n");
																			        else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
																						            printf("三角形是直角三角形\n");
																					        else
																								            printf("三角形是普通三角形\n");
																							    }
						    else
								        printf("不能构成triangle\n");
							    return 0;
}
