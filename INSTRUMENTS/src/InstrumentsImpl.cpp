#include <InstrumentsImpl.h>
 
InstrumentsImpl::InstrumentsImpl(const ACE_CString& name, maci::ContainerServices * containerServices) : ACSComponentImpl(name, containerServices) {
}
 
InstrumentsImpl::~InstrumentsImpl() {
}
 
void InstrumentImpl::cameraOn() {
    std::cout << "CameraOn called" << std::endl;
}
 
/* --------------- [ MACI DLL support functions ] -----------------*/
#include <maciACSComponentDefines.h>
MACI_DLL_SUPPORT_FUNCTIONS(InstrumentsImpl)
/* ----------------------------------------------------------------*/
