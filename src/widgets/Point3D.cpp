#include "Point3D.h"

namespace mc_rtc::blender
{

Point3D::Point3D(Client & client, const ElementId & id, const ElementId & requestId)
: TransformBase(client, id, requestId)
{
}

void Point3D::data(bool ro, const Eigen::Vector3d & pos, const mc_rtc::gui::PointConfig & config)
{
  TransformBase::data(ro, pos);
  config_ = config;
}

void Point3D::draw3D()
{
  TransformBase::draw3D();
  /** FIXME Implement */
}

} // namespace mc_rtc::blender