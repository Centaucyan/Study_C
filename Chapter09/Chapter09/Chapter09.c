#include <stdio.h>

void main(void)
{
	//. p.285
	int n_data = 10;
	int* pn_data = &n_data;

	printf("n_data value: %d, pn_data point_value: %d\n", n_data, *pn_data);
	printf("n_data addr: %p, pn_data value: %p\n\n", &n_data, pn_data);

	*pn_data = 60;
	printf("=== After change *pn_data ===\n");
	printf("n_data value: %d, pn_data point_value: %d\n\n", n_data, *pn_data);

	n_data = 100;
	printf("=== After change n_data ===\n");
	printf("n_data value: %d, pn_data point_value: %d\n\n", n_data, *pn_data);
}