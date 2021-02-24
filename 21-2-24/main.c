//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<ctype.h>
//int main()
//{
//    char arr1[85],arr2[85],arr3[85]={0};
//    int i=0,count=0;
//    gets(arr1);
//    gets(arr2);
//    while(arr1[i])
//    {
//        if(islower(arr1[i]))
//            arr1[i]=toupper(arr1[i]);
//        if(strchr(arr2,arr1[i]))
//        {
//            if(!strchr(arr3,arr1[i]))
//            {
//                arr3[count]=arr1[i];
//                count++;
//            }
//        }
//        i++;
//    }
//    printf("%s",arr3);
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<ctype.h>
//int main()
//{
//    char arr1[85],arr2[85],arr3[85]={0};
//    int i=0,count=0;
//    gets(arr1);
//    gets(arr2);
//    while(arr1[i])
//    {
//        if(!strchr(arr2,arr1[i]))
//        {
//            if(islower(arr1[i]))
//                arr1[i]=toupper(arr1[i]);
//            if(!strchr(arr3,arr1[i]))
//            {
//                arr3[count]=arr1[i];
//                count++;
//            }
//        }
//        i++;
//    }
//    printf("%s",arr3);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,t,count=0;
//    long long tmp=10000000001,m;
//    int arr[10000000005],arr1[100005];
//    scanf("%d%lld",&n,&m);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&t);
//        arr[t]=1;
//        if((long long)t<tmp)
//        {
//            tmp=(long long)t;
//        }
//    }
//    for(i=0;i<1000000001;i++)
//    {
//        if(arr[i]&&(long long)i<=tmp*m)
//        {
//            arr1[count]=i;
//            count++;
//        }
//        else
//        {
//            printf("%d",count);
//            break;
//        }
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,t,count=0;
//    long long tmp=10000000001,m;
//    char arr[1000000005];int arr1[100005];
//    scanf("%d%lld",&n,&m);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&t);
//        arr[t]='1';
//        if((long long)t<tmp)
//        {
//            tmp=(long long)t;
//        }
//    }
//    for(i=0;i<1000000001;i++)
//    {
//        if(arr[i]&&(long long)i<=tmp*m)
//        {
//            arr1[count]=i;
//            count++;
//        }
//        else
//        {
//            printf("%d",count);
//            break;
//        }
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,t,count=0;
//    int tmp=10000000001,m;
//    char arr[1000000005];
//    int arr1[100005];
//    scanf("%d%d",&n,&m);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&t);
//        arr[t]='1';
//        if(t<tmp)
//        {
//            tmp=t;
//        }
//    }
//    for(i=0;i<1000000001;i++)
//    {
//        if(arr[i]&&i<=tmp*m)
//        {
//            arr1[count]=i;
//            count++;
//        }
//        else
//        {
//            printf("%d",count);
//            break;
//        }
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,t,count=0;
//    int tmp=10000000001,m;
//    char arr[100005];int arr1[100005];
//    scanf("%d%d",&n,&m);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&t);
//        arr[t]='1';
//        if(t<tmp)
//        {
//            tmp=t;
//        }
//    }
//    for(i=0;i<100001;i++)
//    {
//        if(arr[i]&&i<=tmp*m)
//        {
//            arr1[count]=i;
//            count++;
//        }
//        else if(i>tmp*m)
//        {
//            printf("%d",count);
//            break;
//        }
//    }
//}
//#include<stdio.h>
//#include<stdlib.h>
//int cmp(const void*a,const void*b)
//{
//    return *(int*)a-*(int*)b;
//}
//int shu(char* arr,int x,int m,int n)
//{
//    int count=0,min,i;
//    min=arr[x];
//    for(i=x;i<n;i++)
//    {
//        if((long long)arr[i]<=(long long)min*(long long)m)
//            count++;
//        else
//            break;
//    }
//    return count;
//}
//int main()
//{
//    int n,i,m,min,count,tmp;
//    scanf("%d%d",&n,&m);
//    int arr[n];
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    qsort(arr,n,sizeof(int),cmp);
//    count=shu(arr,0,m,n);
//    for(i=1;i<n/2;i++)
//    {
//        if((tmp=shu(arr,i,m,n))>count)
//            count=tmp;
//    }
//    printf("%d",count);
//}
