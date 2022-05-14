#pragma once
#include <memory>

#include "IMessage.h"


struct ISubscriber
{
  virtual ~ISubscriber() = default;

  virtual void Start() = 0;
  virtual void Stop() = 0;
  virtual std::unique_ptr<IMessage> Receive() = 0;
  virtual void SetTimeout(int timeout_ms) = 0;
};
