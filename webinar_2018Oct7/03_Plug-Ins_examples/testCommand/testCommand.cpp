#include "testCommand.h"



myTestCmd::myTestCmd()
{
	
}

void* myTestCmd::creator()
{
	return new myTestCmd;
}


MStatus myTestCmd::doIt(const MArgList& argList)
{
	MStatus status;

	MGlobal::displayInfo(MString() + "Hello, AnimationSchool.ru!");


	return MS::kSuccess;

}
