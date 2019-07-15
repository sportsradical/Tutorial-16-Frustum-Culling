////////////////////////////////////////////////////////////////////////////////
// Filename: positionclass.h
////////////////////////////////////////////////////////////////////////////////
#ifndef _POSITIONCLASS_H_
#define _POSITIONCLASS_H_


//////////////
// INCLUDES //
//////////////
#include <math.h>


////////////////////////////////////////////////////////////////////////////////
// Class name: PositionClass
////////////////////////////////////////////////////////////////////////////////
class PositionClass
{
public:
	PositionClass();
	PositionClass(const PositionClass&);
	~PositionClass();

	void SetFrameTime(float);
	void GetRotation(float&);

	void TurnLeft(bool keydown);
	void TurnRight(bool keydown);
	void TurnUp(bool keydown);
	void TurnDown(bool keydown);

private:
	float m_frameTime;
	float m_rotationY;
	float m_rotationX;
	float m_leftTurnSpeed, m_rightTurnSpeed;
	float m_upTurnSpeed, m_downTurnSpeed;
};

#endif