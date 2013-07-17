/* Copyright (c) <2003-2011> <Julio Jerez, Newton Game Dynamics>
* 
* This software is provided 'as-is', without any express or implied
* warranty. In no event will the authors be held liable for any damages
* arising from the use of this software.
* 
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely, subject to the following restrictions:
* 
* 1. The origin of this software must not be misrepresented; you must not
* claim that you wrote the original software. If you use this software
* in a product, an acknowledgment in the product documentation would be
* appreciated but is not required.
* 
* 2. Altered source versions must be plainly marked as such, and must not be
* misrepresented as being the original software.
* 
* 3. This notice may not be removed or altered from any source distribution.
*/

#include "dStdAfxNewton.h"
#include "dNewton.h"
#include "dNewtonCollision.h"
#include "dNewtonKinematicBody.h"

dNewtonKinematicBody::dNewtonKinematicBody()
	:dNewtonBody(m_kinematic)
{
}

dNewtonKinematicBody::dNewtonKinematicBody (dNewton* const dWorld, dFloat mass, const dNewtonCollision* const collision, void* const userData, const dFloat* const matrix)
	:dNewtonBody(dWorld, mass, collision, userData, matrix, m_kinematic)
{
}

dNewtonKinematicBody::~dNewtonKinematicBody()
{
}




/*
void dNewtonKinematicBody::GetPointVeloc (const dFloat* const point, dFloat* const veloc) const
{
	NewtonBodyGetPointVelocity (m_body, &point[0], &veloc[0]);
}
*/

bool dNewtonKinematicBody::GetSleepState() const
{
	return NewtonBodyGetSleepState(m_body) ? true : false;
}
