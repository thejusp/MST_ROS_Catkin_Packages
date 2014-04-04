/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by gensrv_cpp from file /home/enterprise/enterprise_ws/src/mst_position/srv/gps_to_pose.srv
 *
 */


#ifndef MST_POSITION_MESSAGE_GPS_TO_POSE_H
#define MST_POSITION_MESSAGE_GPS_TO_POSE_H

#include <ros/service_traits.h>


#include <mst_position/gps_to_poseRequest.h>
#include <mst_position/gps_to_poseResponse.h>


namespace mst_position
{

struct gps_to_pose
{

typedef gps_to_poseRequest Request;
typedef gps_to_poseResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct gps_to_pose
} // namespace mst_position


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mst_position::gps_to_pose > {
  static const char* value()
  {
    return "f74ca49185df14e33a0275379d37e62c";
  }

  static const char* value(const ::mst_position::gps_to_pose&) { return value(); }
};

template<>
struct DataType< ::mst_position::gps_to_pose > {
  static const char* value()
  {
    return "mst_position/gps_to_pose";
  }

  static const char* value(const ::mst_position::gps_to_pose&) { return value(); }
};


// service_traits::MD5Sum< ::mst_position::gps_to_poseRequest> should match 
// service_traits::MD5Sum< ::mst_position::gps_to_pose > 
template<>
struct MD5Sum< ::mst_position::gps_to_poseRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mst_position::gps_to_pose >::value();
  }
  static const char* value(const ::mst_position::gps_to_poseRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mst_position::gps_to_poseRequest> should match 
// service_traits::DataType< ::mst_position::gps_to_pose > 
template<>
struct DataType< ::mst_position::gps_to_poseRequest>
{
  static const char* value()
  {
    return DataType< ::mst_position::gps_to_pose >::value();
  }
  static const char* value(const ::mst_position::gps_to_poseRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mst_position::gps_to_poseResponse> should match 
// service_traits::MD5Sum< ::mst_position::gps_to_pose > 
template<>
struct MD5Sum< ::mst_position::gps_to_poseResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mst_position::gps_to_pose >::value();
  }
  static const char* value(const ::mst_position::gps_to_poseResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mst_position::gps_to_poseResponse> should match 
// service_traits::DataType< ::mst_position::gps_to_pose > 
template<>
struct DataType< ::mst_position::gps_to_poseResponse>
{
  static const char* value()
  {
    return DataType< ::mst_position::gps_to_pose >::value();
  }
  static const char* value(const ::mst_position::gps_to_poseResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MST_POSITION_MESSAGE_GPS_TO_POSE_H
