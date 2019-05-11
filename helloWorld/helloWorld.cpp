#include <maya/MSimple.h>
#include <maya/MIOStream.h>

DeclareSimpleCommand(hi, "Autodesk", "2019");

MStatus hi::doIt(const MArgList&)
{
	cout << "Hello World\n" << endl;
	return MS::kSuccess;
}