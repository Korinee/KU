#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
/*
//�� �� ������ �Ÿ�
struct point
{
	double		x, y;
};
int main(void)
{
	struct point p1, p2;
	double		dist;
	scanf("%lf %lf", &p1.x, &p1.y);
	scanf("%lf %lf", &p2.x, &p2.y);
	dist = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
	printf("Distance = %lf\n", dist);
}*/
/*
//�簢���� ����
struct point
{
	double		x, y;
} p1, p2;
int main(void)
{
	double		dist;
	scanf("%lf %lf", &p1.x, &p1.y);
	scanf("%lf %lf", &p2.x, &p2.y);
	dist = sqrt(pow((p2.x - p1.x) * (p2.y - p1.y), 2));
	printf("���� = %.1lf", dist);
}*/
/*
//���� ����
struct point
{
	double		x, y, r;
} c;
int main(void)
{
	float			PI = 3.14;
	double		circle;
	scanf("%lf %lf %lf", &c.x, &c.y, &c.r);
	circle = PI * pow(c.r, 2);
	printf("���� = %.1lf", circle);
}*/
/*
//���� ����
struct point
{
	double		x, y, r;
} c1, p1;
int main(void)
{
	float		i;
	double		circle;
	scanf("%lf %lf %lf", &c1.x, &c1.y, &c1.r);
	scanf("%lf %lf", &p1.x, &p1.y);
	i = sqrt(pow((p1.x - c1.x) * (p1.y - c1.y), 2));
	if (i < c1.r)
		printf("���� ���ο� �ֽ��ϴ�!");
	else
		printf("���� �ܺο� �ֽ��ϴ�!");
}*/