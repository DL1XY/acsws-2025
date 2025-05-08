#include <InstrumentsImpl.h>
 
InstrumentsImpl::InstrumentsImpl(const ACE_CString& name, maci::ContainerServices * containerServices) : ACSComponentImpl(name, containerServices) {
}
 
InstrumentsImpl::~InstrumentsImpl() {
}
 
void InstrumentsImpl::cameraOn() {
    std::cout << "CameraOn called" << std::endl;
}
