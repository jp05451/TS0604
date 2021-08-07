#include"VecNf.h"

VecNf::VecNf()
{
				vec.push_back(0);
}
VecNf::VecNf(float* dest, int cnt)
{
				for (int i = 0; i < cnt; i++)
				{
								vec.push_back(dest[i]);
				}
}
VecNf::VecNf(const VecNf& rhs)
{
				this->vec = rhs.vec;
}
VecNf VecNf::operator = (const VecNf& a)
{
				VecNf temp;
				/*if (a.vec == this->vec)
								return *this;*/
				cout << "ASSIGNMENT!!!" <<endl;
				vec=temp.vec = a.vec;
				return temp;
}
VecNf VecNf::operator + (const VecNf& a)
{
				VecNf temp;
				if (a.vec.size() != vec.size())
				{
								cout << "dimensions inconsistent" << endl;
								return temp;
				}
				temp.vec.clear();
				for (int i = 0; i < vec.size(); i++)
				{
								temp.vec.push_back( vec[i] + a.vec[i]);
				}
				return temp;
}
VecNf VecNf::operator - (const VecNf& a)
{
				VecNf temp;
				if (a.vec.size() != vec.size())
				{
								cout << "dimensions inconsistent" << endl;
								return temp;
				}
				temp.vec.clear();
				for (int i = 0; i < vec.size(); i++)
				{
								temp.vec.push_back( vec[i] - a.vec[i]);
				}
				return temp;
}
float VecNf:: operator * (const VecNf& a)
{
				float temp=0;
				if (a.vec.size() != vec.size())
				{
								cout << "dimensions inconsistent" << endl;
								return 0;
				}
				for (int i = 0; i < vec.size(); i++)
				{
								temp += a.vec[i] * vec[i];
				}
				return temp;
}
VecNf operator * (float d, const VecNf& a)
{
				VecNf temp;
				int size = a.vec.size();
				temp.vec.clear();
				for (int i = 0; i < size; i++)
				{
								temp.vec.push_back(a.vec[i] * d);
				}
				return temp;
}
float& VecNf::operator[](int i)
{
				if (i > vec.size())
				{
								return vec[0];
				}
				return vec[i];
}
size_t VecNf::Size()
{
				return vec.size();
}