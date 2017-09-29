#pragma once

#include "robot1.h"
#include "Mapping_Inertia.h"
#include "AdaptiveControl.h"
#include <Eigen\Core>

using namespace Eigen;

class AdaptiveControl;

class DynamicsMatrix
{
	AdaptiveControl* mpAdaptiveControl;

	void UpdateMatrices(SR_real q, SR_real qdot, SR_real qddot);

	robot1* mpRobot1;

	MatrixXd mMatrixA;
	MatrixXd mMatrixL;
	MatrixXd mMatrixG;
	MatrixXd mMatrixGamma;
	MatrixXd mMatrixCbar;
	MatrixXd mVdot0;
	//MatrixXd MatrixY;

	MatrixXd ComputeA();
	MatrixXd ComputeL();
	MatrixXd ComputeG();
	MatrixXd ComputeGamma();
	MatrixXd ComputeCbar();

	MatrixXd MassMatrix();
	MatrixXd CoriolisMatrix();
	VectorXd GravitationalVector();

	DynamicsMatrix(robot1* pRobot1, vector<Inertia*> vpInertia, AdaptiveControl* pAdaptiveControl);
};