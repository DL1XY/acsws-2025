#include <InstrumentsImpl.h>
 
InstrumentsImpl::InstrumentsImpl(const ACE_CString& name, maci::ContainerServices * containerServices) : ACSComponentImpl(name, containerServices) {
}
 
InstrumentsImpl::~InstrumentsImpl() {
}
 
void InstrumentsImpl::cameraOn() {
    std::cout << "CameraOn called" << std::endl;
}
void InstrumentsImpl::cameraOff (){ }

TYPES::ImageType * InstrumentsImpl::takeImage(CORBA::Long exposureTime){
    TYPES::ImageType * image;
    return image;
}
void InstrumentsImpl::setRGB(const TYPES::RGB& rgbConfig){}
void InstrumentsImpl::setPixelBias(CORBA::Long bias){}
void InstrumentsImpl::setResetLevel(CORBA::Long resetLevel){}


/* --------------- [ MACI DLL support functions ] -----------------*/
#include <maciACSComponentDefines.h>
MACI_DLL_SUPPORT_FUNCTIONS(InstrumentsImpl)
/* ----------------------------------------------------------------*/
