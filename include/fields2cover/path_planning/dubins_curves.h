//=============================================================================
//    Copyright (C) 2021-2022 Wageningen University - All Rights Reserved
//                     Author: Gonzalo Mier
//                        BSD-3 License
//=============================================================================

#pragma once
#ifndef FIELDS2COVER_PATH_PLANNING_DUBINS_CURVES_H_
#define FIELDS2COVER_PATH_PLANNING_DUBINS_CURVES_H_

#include "fields2cover/types.h"
#include "fields2cover/path_planning/turning_base.h"

namespace f2c {
namespace pp {

/// Dubins' curves planner
class DubinsCurves : public TurningBase {
 public:
  explicit DubinsCurves(const F2CRobot& _params);
  /// @cond DOXYGEN_SHOULD_SKIP_THIS
  ~DubinsCurves() = default;
  DubinsCurves(DubinsCurves &&) = default;
  DubinsCurves() = default;
  DubinsCurves(const DubinsCurves&) = default;
  DubinsCurves &operator=(const DubinsCurves&) = default;
  DubinsCurves &operator=(DubinsCurves&&) = default;
  /// @endcond

  F2CPath createSimpleTurn(double _dist_start_pos, double _start_angle,
      double _end_angle) override;

 public:
  double discretization_ {0.01};
};

}  // namespace pp
}  // namespace f2c

#endif  // FIELDS2COVER_PATH_PLANNING_DUBINS_CURVES_H_