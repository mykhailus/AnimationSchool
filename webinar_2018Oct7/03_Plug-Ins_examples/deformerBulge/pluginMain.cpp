#include "deformerBulge.h"
#include <maya/MFnPlugin.h>

MStatus initializePlugin( MObject obj )
{
    MStatus status;

    MFnPlugin fnPlugin( obj, "Roman Volodin", "1.0", "Any" );

    status = fnPlugin.registerNode( "bulgeMesh",   BulgeDeformer::id,   BulgeDeformer::creator,   BulgeDeformer::initialize,   MPxNode::kDeformerNode );
    CHECK_MSTATUS_AND_RETURN_IT( status );

    return MS::kSuccess;
}


MStatus uninitializePlugin( MObject obj )
{
    MStatus status;

    MFnPlugin fnPlugin( obj );

    status = fnPlugin.deregisterNode( BulgeDeformer::id );
    CHECK_MSTATUS_AND_RETURN_IT( status );

    return MS::kSuccess;
}
