/*=========================================================================
 *
 *  Copyright UMC Utrecht and contributors
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#ifndef __itkOpenCLVectorTest_h
#define __itkOpenCLVectorTest_h

#include "itkMacro.h"

namespace itk
{
/** Create a helper GPU Kernel class for OpenCLVectorTest.cl kernel */
itkGPUKernelClassMacro( OpenCLVectorTestKernel );
} // end namespace itk

#endif /* __itkOpenCLVectorTest_h */
