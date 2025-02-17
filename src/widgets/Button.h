#pragma once

#include "Widget.h"

namespace mc_rtc::blender
{

struct Button : public Widget
{
  inline Button(Client & client, const ElementId & id) : Widget(client, id) {}

  ~Button() override = default;

  inline void draw2D() override
  {
    if(ImGui::Button(label(id.name).c_str()))
    {
      client.send_request(id);
    }
  }
};

} // namespace mc_rtc::blender