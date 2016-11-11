// souitest.cpp
// main��gtest.lib��
//
//�ο� http://www.cnblogs.com/coderzh/archive/2009/04/10/1432789.html
/*
--gtest_filter �÷�

��ִ�еĲ��԰������й��ˣ�֧��ͨ���
?    �����ַ�
*    �����ַ�
-    �ų����磬-a ��ʾ����a
:    ȡ���磬a:b ��ʾa��b
������������ӣ�

./foo_test û��ָ�������������������а���
./foo_test --gtest_filter=* ʹ��ͨ���*����ʾ�������а���
./foo_test --gtest_filter=FooTest.* �������С����԰�������(testcase_name)��ΪFooTest�İ���
./foo_test --gtest_filter=*Null*:*Constructor* �������С����԰�������(testcase_name)���򡰲�������(test_name)������Null��Constructor�İ�����
./foo_test --gtest_filter=-*DeathTest.* �������з��������԰�����
./foo_test --gtest_filter=FooTest.*-FooTest.Bar �������С����԰�������(testcase_name)��ΪFooTest�İ��������ǳ���FooTest.Bar�������
*/

#include <gtest/gtest.h>  

int Add(int a,int b){return a+b;}

TEST(Add, ����) {  
	EXPECT_EQ(Add(-1,-2), -3);  
	EXPECT_GT(Add(-4,-5), -6); // �����  
}  

TEST(Add, ����) {  
	EXPECT_EQ(Add(1,2), 3);  
	EXPECT_GT(Add(4,5), 6);  
} 