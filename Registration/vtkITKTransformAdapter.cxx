#include "vtkITKTransformAdapter.h"
#include "vtkObjectFactory.h"

vtkStandardNewMacro(vtkITKTransformAdapter);

void vtkITKTransformAdapter::PrintSelf(ostream& os, vtkIndent indent) 
{
  Superclass::PrintSelf(os,indent);
  os << "ITKTransform: (not implemented)" 
     << std::endl;
}
