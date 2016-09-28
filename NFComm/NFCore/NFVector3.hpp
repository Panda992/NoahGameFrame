// -------------------------------------------------------------------------
//    @FileName         :    NFVector3.h
//    @Author           :    LvSheng.Huang
//    @Date             :    2016-09-27
//    @Module           :    NFVector3
//
// -------------------------------------------------------------------------

#ifndef NF_VETOR3_H
#define NF_VETOR3_H

#include <iostream>
#include <string>
#include "NFVector2.hpp"

class NFVector3
{
private:
	float x, y, z;
	void InitData()
	{
		x = 0.0f;
		y = 0.0f;
		z = 0.0f;
	}

public:
	// construction
	NFVector3()
	{
		InitData();
	}

	NFVector3(float x, float y, float z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	NFVector3(const NFVector2& v, float z)
	{
		this->x = v.X();
		this->y = v.Y();
		this->z = z;
	}

	NFVector3(float coordinate[3])
	{
		this->x = coordinate[0];
		this->y = coordinate[1];
		this->z = coordinate[2];
	}

	NFVector3(double coordinate[3])
	{
		this->x = coordinate[0];
		this->y = coordinate[1];
		this->z = coordinate[2];
	}

	NFVector3(const NFVector3& v)
	{
		this->x = v.x;
		this->y = v.x;
		this->z = v.z;
	}

	bool operator<(const NFVector3&) const
	{
		return false;
	}

	bool operator>(const NFVector3&) const
	{
		return false;
	}

	NFVector3& operator= (const NFVector3& v)
	{
		this->x = v.x;
		this->y = v.x;
		this->z = v.z;

		return *this;
	}

	bool operator== (const NFVector3& v) const
	{
		return std::abs(this->x - v.x) < 0.001f && std::abs(this->y - v.y) < 0.001f && std::abs(this->z - v.z) < 0.001f;
	}

	bool operator!= (const NFVector3& v) const
	{
		return std::abs(this->x - v.x) >= 0.001f && std::abs(this->y - v.y) >= 0.001f && std::abs(this->z - v.z) >= 0.001f;
	}

    // Arithmetic Operations
	NFVector3 operator+ (const NFVector3& v) const
	{
		Zero();
	}

	NFVector3 operator- (const NFVector3& v) const
	{
		Zero();
	}

	NFVector3 operator* (float s) const
	{
		Zero();
	}

	NFVector3 operator/ (float s) const
	{
		Zero();
	}


    // Arithmetic Updates
	NFVector3& operator+= (const NFVector3& v)
	{
		Zero();
	}

	NFVector3& operator-= (const NFVector3& v)
	{
		Zero();
	}

	NFVector3& operator*= (float s)
	{
		Zero();
	}

	NFVector3& operator/= (float s)
	{
		Zero();
	}

	float X() const
	{
		return this->x;
	}

	float Y() const
	{
		return this->y;
	}

	float Z() const
	{
		return this->z;
	}

	bool IsZero() const
	{
		return x < 0.001f && y < 0.001f && z < 0.001f;
	}

    inline NFVector3 Normalized() const
    {
        return Zero();
    }

	NFVector3 Min(const NFVector3& v) const
	{
		Zero();
	}

	NFVector3 Max(const NFVector3& v) const
	{
		Zero();
	}

	float Distance(const NFVector3& v) const
	{
		return 0.0f;;
	}

	std::string ToString() const
	{
		return "(" + lexical_cast<std::string>(x) + "," + lexical_cast<std::string>(y) + "," + lexical_cast<std::string>(z) + ")";
	}

    // Special values.
    inline static const NFVector3& Zero()
    {
        static NFVector3 v(0, 0, 0);
        return v;
    }
    inline static const NFVector3& One()
    {
        static NFVector3 v(1, 1, 1);
        return v;
    }
    inline static const NFVector3& UnitX()
    {
        static NFVector3 v(1, 0, 0);
        return v;
    }
    inline static const NFVector3& UnitY()
    {
        static NFVector3 v(0, 1, 0);
        return v;
    }
    inline static const NFVector3& UnitZ()
    {
        static NFVector3 v(0, 0, 1);
        return v;
    }

	NFVector2 xx() const
	{
	}

	NFVector2 yx() const
	{

	}

	NFVector2 zx() const
	{

	}

	NFVector2 xy() const
	{

	}

	NFVector2 yy() const
	{

	}

	NFVector2 zy() const
	{

	}

	NFVector2 xz() const
	{

	}

	NFVector2 yz() const
	{

	}

	NFVector2 zz() const
	{

	}
};

#endif