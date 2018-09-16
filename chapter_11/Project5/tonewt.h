#pragma once
#ifndef TONEW_H_
#define TONEW_H_

#include <iostream>

class tonewt
{
	public:
		enum Mode { STN, PDS };
	private:
		enum { Lbs_per_stn = 14 };      // pounds per stone
		int stone;                    // whole stones
		double pds_left;              // fractional pounds
		double pounds;                // entire weight in pounds
		Mode status;
	public:
		tonewt(double lbs, Mode s = STN);          // constructor for double pounds
		tonewt(int stn, double lbs, Mode s = STN); // constructor for stone, lbs
		tonewt();                    // default constructor
		~tonewt();
		// overloaded functions
		tonewt operator+(const tonewt & st) const;
		tonewt operator-(const tonewt & st) const;
		tonewt operator*(double p) const;
		void set_stn() { status = STN; }
		void set_pds() { status = PDS; }
		// friend function
		friend tonewt operator*(double p, const tonewt & st)
		{
			return st * p;
		}
		friend std::ostream & operator<<(std::ostream & os, const tonewt & st);
	// default constructor
};

#endif // !TONEW_H_