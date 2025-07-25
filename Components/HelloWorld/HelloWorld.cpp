// ======================================================================
// \title  HelloWorld.cpp
// \author swayamshreemohanty
// \brief  cpp file for HelloWorld component implementation class
// ======================================================================

#include "Components/HelloWorld/HelloWorld.hpp"

namespace Components {

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  HelloWorld ::
    HelloWorld(const char* const compName) :
      HelloWorldComponentBase(compName)
  {

  }

  HelloWorld ::
    ~HelloWorld()
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for commands
  // ----------------------------------------------------------------------

  void HelloWorld ::
    SAY_HELLO_cmdHandler(
        FwOpcodeType opCode,
        U32 cmdSeq,
        const Fw::CmdStringArg& greeting
    )
  {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
  }

}
