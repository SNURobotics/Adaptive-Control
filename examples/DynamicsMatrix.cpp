#include "DynamicsMatrix.h"

using namespace Eigen;

DynamicsMatrix::DynamicsMatrix(robot1* pRobot1, vector<Inertia*> vpInertia, AdaptiveControl* pAdaptiveControl) : mpRobot1(pRobot1), mpAdaptiveControl(pAdaptiveControl)
{

}

void DynamicsMatrix::UpdateMatrices(SR_real q, SR_real qdot, SR_real qddot)
{
	/*!
	srRevoluteState

	i.g) For revolute joint state.
	m_rValue[0] : Angle of revolute joint.
	m_rValue[1] : Velocity of revolute joint angle.
	m_rValue[2] : Acceleration of revolute joint angle.
	m_rValue[3] : Torque of revolute joint.
	*/
}

MatrixXd DynamicsMatrix::ComputeA()
{

}

MatrixXd DynamicsMatrix::ComputeL()
{

}

MatrixXd DynamicsMatrix::ComputeG()
{

}

MatrixXd DynamicsMatrix::ComputeGamma()
{

}

MatrixXd DynamicsMatrix::ComputeCbar()
{

}

MatrixXd DynamicsMatrix::MassMatrix()
{

}

MatrixXd DynamicsMatrix::CoriolisMatrix()
{

}

VectorXd DynamicsMatrix::GravitationalVector()
{

}

	