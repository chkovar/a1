// Generated by gencpp from file ublox_msgs/CfgGNSS.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_CFGGNSS_H
#define UBLOX_MSGS_MESSAGE_CFGGNSS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ublox_msgs
{
template <class ContainerAllocator>
struct CfgGNSS_
{
  typedef CfgGNSS_<ContainerAllocator> Type;

  CfgGNSS_()
    : msgVer(0)
    , numTrkChHw(0)
    , numTrkChUse(0)
    , numConfigBlocks(0)
    , gnssId(0)
    , resTrkCh(0)
    , maxTrkCh(0)
    , reserved1(0)
    , flags(0)  {
    }
  CfgGNSS_(const ContainerAllocator& _alloc)
    : msgVer(0)
    , numTrkChHw(0)
    , numTrkChUse(0)
    , numConfigBlocks(0)
    , gnssId(0)
    , resTrkCh(0)
    , maxTrkCh(0)
    , reserved1(0)
    , flags(0)  {
  (void)_alloc;
    }



   typedef uint8_t _msgVer_type;
  _msgVer_type msgVer;

   typedef uint8_t _numTrkChHw_type;
  _numTrkChHw_type numTrkChHw;

   typedef uint8_t _numTrkChUse_type;
  _numTrkChUse_type numTrkChUse;

   typedef uint8_t _numConfigBlocks_type;
  _numConfigBlocks_type numConfigBlocks;

   typedef uint8_t _gnssId_type;
  _gnssId_type gnssId;

   typedef uint8_t _resTrkCh_type;
  _resTrkCh_type resTrkCh;

   typedef uint8_t _maxTrkCh_type;
  _maxTrkCh_type maxTrkCh;

   typedef uint8_t _reserved1_type;
  _reserved1_type reserved1;

   typedef uint32_t _flags_type;
  _flags_type flags;


    enum { CLASS_ID = 6u };
     enum { MESSAGE_ID = 62u };
     enum { GNSS_ID_GPS = 0u };
     enum { GNSS_ID_SBAS = 1u };
     enum { GNSS_ID_GALILEO = 2u };
     enum { GNSS_ID_BEIDOU = 3u };
     enum { GNSS_ID_QZSS = 5u };
     enum { GNSS_ID_GLONASS = 6u };
 

  typedef boost::shared_ptr< ::ublox_msgs::CfgGNSS_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::CfgGNSS_<ContainerAllocator> const> ConstPtr;

}; // struct CfgGNSS_

typedef ::ublox_msgs::CfgGNSS_<std::allocator<void> > CfgGNSS;

typedef boost::shared_ptr< ::ublox_msgs::CfgGNSS > CfgGNSSPtr;
typedef boost::shared_ptr< ::ublox_msgs::CfgGNSS const> CfgGNSSConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::CfgGNSS_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ublox_msgs': ['/home/ubuntu/catkin_ws/src/ublox/ublox_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgGNSS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgGNSS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgGNSS_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b7f92af0b44aa7c047fd14c5926fb0fc";
  }

  static const char* value(const ::ublox_msgs::CfgGNSS_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb7f92af0b44aa7c0ULL;
  static const uint64_t static_value2 = 0x47fd14c5926fb0fcULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/CfgGNSS";
  }

  static const char* value(const ::ublox_msgs::CfgGNSS_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CFG-GNSS (0x06 0x3E)\n\
# GNSS Configuration\n\
# Gets or sets the GNSS system channel sharing configuration.\n\
\n\
uint8 CLASS_ID = 6\n\
uint8 MESSAGE_ID = 62\n\
\n\
uint8 msgVer            # Message version (= 0 for this version)\n\
uint8 numTrkChHw        # Number of tracking channels in hardware (read only)\n\
uint8 numTrkChUse       # Number of tracking channels to use (<= numTrkChHw)\n\
uint8 numConfigBlocks   # Number of configuration blocks following (set to 1)\n\
\n\
uint8 gnssId            # GNSS identifier (select from following list)\n\
\n\
uint8 GNSS_ID_GPS = 0\n\
uint8 GNSS_ID_SBAS = 1\n\
uint8 GNSS_ID_GALILEO = 2\n\
uint8 GNSS_ID_BEIDOU = 3\n\
uint8 GNSS_ID_QZSS = 5\n\
uint8 GNSS_ID_GLONASS = 6\n\
\n\
uint8 resTrkCh          # Number of reserved (minimum) tracking channels for this GNSS system\n\
uint8 maxTrkCh          # Maximum number of tracking channels (>=resTrkChn)\n\
uint8 reserved1         # Reserved\n\
uint32 flags            # Bitfield of flags (bit 0 = enable/disable)\n\
";
  }

  static const char* value(const ::ublox_msgs::CfgGNSS_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.msgVer);
      stream.next(m.numTrkChHw);
      stream.next(m.numTrkChUse);
      stream.next(m.numConfigBlocks);
      stream.next(m.gnssId);
      stream.next(m.resTrkCh);
      stream.next(m.maxTrkCh);
      stream.next(m.reserved1);
      stream.next(m.flags);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CfgGNSS_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::CfgGNSS_<ContainerAllocator>& v)
  {
    s << indent << "msgVer: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.msgVer);
    s << indent << "numTrkChHw: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.numTrkChHw);
    s << indent << "numTrkChUse: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.numTrkChUse);
    s << indent << "numConfigBlocks: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.numConfigBlocks);
    s << indent << "gnssId: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gnssId);
    s << indent << "resTrkCh: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.resTrkCh);
    s << indent << "maxTrkCh: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.maxTrkCh);
    s << indent << "reserved1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved1);
    s << indent << "flags: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.flags);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_CFGGNSS_H
