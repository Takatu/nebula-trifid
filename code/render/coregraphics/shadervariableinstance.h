#pragma once
//------------------------------------------------------------------------------
/**
    @class CoreGraphics::ShaderVariableInstance
  
    A ShaderVariableInstance associates a value with a ShaderVariable
    and can apply that value at any time to the ShaderVariable.
    Setting the value on a ShaderVariableInstance will just store the
    value but not change the actual ShaderVariable. Only calling
    Apply() will set the stored value on the ShaderVariable. 
    ShaderVariableInstance objects are used to manage per-instance
    state when rendering ModelNodeInstances.    
    
    (C) 2007 Radon Labs GmbH
    (C) 2013-2015 Individual contributors, see AUTHORS file
*/
#if (__DX11__ || __DX9__ || __OGL4__)
#include "coregraphics/base/shadervariableinstancebase.h"
namespace CoreGraphics
{
class ShaderVariableInstance : public Base::ShaderVariableInstanceBase
{
    __DeclareClass(ShaderVariableInstance);
};
}
#else
#error "ShaderVariableInstance class not implemented on this platform!"
#endif
//------------------------------------------------------------------------------

