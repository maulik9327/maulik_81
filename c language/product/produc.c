#include<stdio.h>
int main()
{

	int Qty;
	float Gst,Bill,Amount,Discount,Totalamount,Rate;
	 
	printf("\n	Enter Qty :");
	scanf("%d",&Qty);
	printf("\n	Enter Rate:");
	scanf("%f",&Rate);
	
	
		Amount=Qty*Rate;
		Discount=(Amount*5)/100;
		Bill=Amount-Discount;
		Gst=(Bill*18)/100;
		Totalamount=Bill+Gst;
		printf(" \nQty\tRate\tAmount\tDiscount\tGst\tTotalamount");
		printf(" \n%d\t%0.2f\t%0.2f\t%0.2f\t\t%0.2f\t%0.2f",Qty,Rate,Amount,Discount,Gst,Totalamount);
		return 0;

}
