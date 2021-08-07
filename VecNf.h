#include<iostream>
#include<vector>

using namespace std;
#pragma once

class VecNf
{
public:
				VecNf();
				VecNf(float* dest, int cnt);
				VecNf(const VecNf& rhs);
				VecNf operator = (const VecNf& a);
				VecNf operator + (const VecNf& a);
				VecNf operator - (const VecNf& a);
				float operator * (const VecNf& a);
				float &operator[](int i);
				friend VecNf operator * (float d,const VecNf& a);
				size_t Size();

				vector<float> vec;
};
