//#include<stdio.h>
//int main()
//{
//    int n;
//    int i=0,j;
//    long long arr[10][3],num,ii;
//    scanf("%d",&n);
//    for(i=0; i<n; i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            //用来输入一行数据，用空格分开，以回车结束
//            scanf("%lld",&num);
//            char c=getchar();
//            arr[i][j]=num;
//        }
//    }
//    for(i=0;i<n;i++)
//    {
//        ii=arr[i][0]+arr[i][1];
//        if(arr[i][0]+arr[i][1]>arr[i][2])
//        {
//            printf("Case #%d: true\n",i+1);
//        }
//        else
//        {
//            printf("Case #%d: false\n",i+1);
//        }
//    }
//    return 0;
//}