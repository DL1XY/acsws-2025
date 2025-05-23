#ifndef _INSTRUMENT_COMPONENT_IMPL_H
#define _INSTRUMENT_COMPONENT_IMPL_H
 
#ifndef __cplusplus
#error This is a C++ include file and cannot be used from plain C
#endif
 
//Base component implementation, including container services and component lifecycle infrastructure
#include <acscomponentImpl.h>
 
//Skeleton interface for server implementation
#include <InstrumentS.h>

#include <TypesC.h>

#include <CameraC.h>
 
//Error definitions for catching and raising exceptions
class InstrumentsImpl : public virtual acscomponent::ACSComponentImpl, public virtual POA_INSTRUMENT_MODULE::Instrument{
  bool _isCameraOn;
  CORBA::Long _bias;
  CORBA::Long _resetLevel;
  public:
    InstrumentsImpl(const ACE_CString& name, maci::ContainerServices * containerServices);
    virtual ~InstrumentsImpl();
    void cameraOn ();
    void cameraOff ();
    TYPES::ImageType * takeImage(CORBA::Long exposureTime);
    void setRGB(const TYPES::RGB& rgbConfig);
    void setPixelBias(CORBA::Long bias);
    void setResetLevel(CORBA::Long resetLevel);
  private:
    
};
 
#endif
