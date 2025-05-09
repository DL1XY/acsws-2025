#include <InstrumentsImpl.h>
#include <SYSTEMErr.h>

InstrumentsImpl::InstrumentsImpl(const ACE_CString& name, maci::ContainerServices * containerServices) : ACSComponentImpl(name, containerServices) {
    _isCameraOn = false;
}
 
InstrumentsImpl::~InstrumentsImpl() {
}
 
void InstrumentsImpl::cameraOn() {
    ACS_DEBUG("InstrumentsImpl::cameraOn()", "Camera ON called");
    CAMERA_MODULE::Camera_var comp = this->getContainerServices()->getComponent<CAMERA_MODULE::Camera>("CAMERA");
    comp->on();
    this->getContainerServices()->releaseComponent(comp->name());
    _isCameraOn = true;
}
void InstrumentsImpl::cameraOff (){ 
    ACS_DEBUG("InstrumentsImpl::cameraOff()",  "Camera OFF called");
    CAMERA_MODULE::Camera_var comp = this->getContainerServices()->getComponent<CAMERA_MODULE::Camera>("CAMERA");
    comp->off();
    this->getContainerServices()->releaseComponent(comp->name());
    _isCameraOn = false;
}

TYPES::ImageType * InstrumentsImpl::takeImage(CORBA::Long exposureTime){
    ACS_DEBUG("InstrumentsImpl::takeImage()", "takeImage called");
    if (_isCameraOn != true) {
        throw SYSTEMErr::CameraIsOffExImpl(__FILE__, __LINE__, "InstrumentsImpl::takeImage").getCameraIsOffEx(); 
    }
    std::string expTimeStr = std::to_string(exposureTime);
    CAMERA_MODULE::Camera_var comp = this->getContainerServices()->getComponent<CAMERA_MODULE::Camera>("CAMERA");
    TYPES::ImageType * image = comp->getFrame(expTimeStr.c_str(), "100");
    this->getContainerServices()->releaseComponent(comp->name());
    return image;
}
void InstrumentsImpl::setRGB(const TYPES::RGB& rgbConfig){
    
    ACS_DEBUG("InstrumentsImpl::setRGB()", "setRGB called");
    if (_isCameraOn != true) {
        throw SYSTEMErr::CameraIsOffExImpl(__FILE__, __LINE__, "InstrumentsImpl::takeImage").getCameraIsOffEx(); 
    }


}
void InstrumentsImpl::setPixelBias(CORBA::Long bias){

    ACS_DEBUG("InstrumentsImpl::setPixelBias()", "setPixelBias called");
    if (_isCameraOn != true) {
        throw SYSTEMErr::CameraIsOffExImpl(__FILE__, __LINE__, "InstrumentsImpl::takeImage").getCameraIsOffEx(); 
    }
    _bias = bias;
}
void InstrumentsImpl::setResetLevel(CORBA::Long resetLevel){
    ACS_DEBUG("InstrumentsImpl::setResetLevel()", "setResetLevel called");
    if (_isCameraOn != true) {
        throw SYSTEMErr::CameraIsOffExImpl(__FILE__, __LINE__, "InstrumentsImpl::takeImage").getCameraIsOffEx(); 
    }
    _resetLevel = resetLevel;
}


/* --------------- [ MACI DLL support functions ] -----------------*/
#include <maciACSComponentDefines.h>
MACI_DLL_SUPPORT_FUNCTIONS(InstrumentsImpl)
/* ----------------------------------------------------------------*/
