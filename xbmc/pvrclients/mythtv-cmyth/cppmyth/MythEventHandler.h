#pragma once

#include "libcmyth.h"
#include "utils/StdString.h"
#include <boost/shared_ptr.hpp>
#include "MythPointer.h"

class MythRecorder;
class MythSignal;

class MythEventHandler 
{
public:
  MythEventHandler();
  MythEventHandler(CStdString, unsigned short port);
  void SetRecorder(MythRecorder &rec);
  MythSignal GetSignal();
  void Stop();
  void PreventLiveChainUpdate();
  void AllowLiveChainUpdate();
private:
  class ImpMythEventHandler;
  boost::shared_ptr< ImpMythEventHandler > m_imp;
};