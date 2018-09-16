#include "tonewt.h"



tonewt::tonewt(double lbs, Mode s)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs)%Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
	status = s;
}

tonewt::tonewt(int stn, double lbs, Mode s)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	status = s;
}

tonewt::tonewt()
{
	stone = pounds = pds_left = 0;
	status = STN;
}


tonewt::~tonewt()
{
}

tonewt tonewt::operator+(const tonewt & st) const
{
	double pds_sum = pounds + st.pounds;
	tonewt sum = tonewt(pds_sum);
	return sum;
}

tonewt tonewt::operator-(const tonewt & st) const
{
	double pds_diff = pounds - st.pounds;
	tonewt diff = tonewt(pds_diff);
	return diff;
}

tonewt tonewt::operator*(double p) const
{
	double multi = pounds * p;
	return tonewt(multi);
}

std::ostream & operator<<(std::ostream & os, const tonewt & st)
{
	if (st.status == tonewt::STN)
		std::cout << st.stone << " stone, " << st.pds_left << "pounds";
	else if (st.status == tonewt::PDS)
		std::cout << st.pounds << " pounds";
	else
		std::cout << "Incorrect status";
	return os;
}