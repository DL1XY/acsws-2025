#include <InstrumentsImpl.h>
#include <SYSTEMErr.h>

InstrumentsImpl::InstrumentsImpl(const ACE_CString& name, maci::ContainerServices * containerServices) : ACSComponentImpl(name, containerServices) {
    isCameraOn = false;
}
 
InstrumentsImpl::~InstrumentsImpl() {
}
 
void InstrumentsImpl::cameraOn() {
    ACS_DEBUG("InstrumentsImpl::cameraOn()", "Camera ON called");
    CAMERA_MODULE::Camera_var comp = this->getContainerServices()->getComponent<CAMERA_MODULE::Camera>("<CAMERA>");
    comp->on();
    this->getContainerServices()->releaseComponent(comp->name());
    isCameraOn = true;
}
void InstrumentsImpl::cameraOff (){ 
    ACS_DEBUG("InstrumentsImpl::cameraOff()",  "Camera OFF called");
    CAMERA_MODULE::Camera_var comp = this->getContainerServices()->getComponent<CAMERA_MODULE::Camera>("<CAMERA>");
    comp->off();
    this->getContainerServices()->releaseComponent(comp->name());
    isCameraOn = false;
}

TYPES::ImageType * InstrumentsImpl::takeImage(CORBA::Long exposureTime){
    ACS_DEBUG("InstrumentsImpl::takeImage()", "takeImage called");
    if (isCameraOn != true) {
        throw SYSTEMErr::CameraIsOffExImpl(__FILE__, __LINE__, "InstrumentsImpl::takeImage").getCameraIsOffEx(); 
    }

    TYPES::ImageType * image;
    return image;
}
void InstrumentsImpl::setRGB(const TYPES::RGB& rgbConfig){
    
    ACS_DEBUG("InstrumentsImpl::setRGB()", "setRGB called");
    if (isCameraOn != true) {
        throw SYSTEMErr::CameraIsOffExImpl(__FILE__, __LINE__, "InstrumentsImpl::takeImage").getCameraIsOffEx(); 
    }

}
void InstrumentsImpl::setPixelBias(CORBA::Long bias){

    ACS_DEBUG("InstrumentsImpl::setPixelBias()", "setPixelBias called");
    if (isCameraOn != true) {
        throw SYSTEMErr::CameraIsOffExImpl(__FILE__, __LINE__, "InstrumentsImpl::takeImage").getCameraIsOffEx(); 
    }
}
void InstrumentsImpl::setResetLevel(CORBA::Long resetLevel){
    ACS_DEBUG("InstrumentsImpl::setResetLevel()", "setResetLevel called");
    if (isCameraOn != true) {
        throw SYSTEMErr::CameraIsOffExImpl(__FILE__, __LINE__, "InstrumentsImpl::takeImage").getCameraIsOffEx(); 
    }
}


/* --------------- [ MACI DLL support functions ] -----------------*/
#include <maciACSComponentDefines.h>
MACI_DLL_SUPPORT_FUNCTIONS(InstrumentsImpl)
/* ----------------------------------------------------------------*/
