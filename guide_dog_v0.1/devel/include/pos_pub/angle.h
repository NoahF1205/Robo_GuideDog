// Generated by gencpp from file pos_pub/angle.msg
// DO NOT EDIT!


#ifndef POS_PUB_MESSAGE_ANGLE_H
#define POS_PUB_MESSAGE_ANGLE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pos_pub
{
template <class ContainerAllocator>
struct angle_
{
  typedef angle_<ContainerAllocator> Type;

  angle_()
    : angle(0.0)  {
    }
  angle_(const ContainerAllocator& _alloc)
    : angle(0.0)  {
  (void)_alloc;
    }



   typedef double _angle_type;
  _angle_type angle;





  typedef boost::shared_ptr< ::pos_pub::angle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pos_pub::angle_<ContainerAllocator> const> ConstPtr;

}; // struct angle_

typedef ::pos_pub::angle_<std::allocator<void> > angle;

typedef boost::shared_ptr< ::pos_pub::angle > anglePtr;
typedef boost::shared_ptr< ::pos_pub::angle const> angleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pos_pub::angle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pos_pub::angle_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pos_pub::angle_<ContainerAllocator1> & lhs, const ::pos_pub::angle_<ContainerAllocator2> & rhs)
{
  return lhs.angle == rhs.angle;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pos_pub::angle_<ContainerAllocator1> & lhs, const ::pos_pub::angle_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pos_pub

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pos_pub::angle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pos_pub::angle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pos_pub::angle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pos_pub::angle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pos_pub::angle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pos_pub::angle_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pos_pub::angle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4edb55038e2b888976a0c0c56935341c";
  }

  static const char* value(const ::pos_pub::angle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4edb55038e2b8889ULL;
  static const uint64_t static_value2 = 0x76a0c0c56935341cULL;
};

template<class ContainerAllocator>
struct DataType< ::pos_pub::angle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pos_pub/angle";
  }

  static const char* value(const ::pos_pub::angle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pos_pub::angle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 angle\n"
;
  }

  static const char* value(const ::pos_pub::angle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pos_pub::angle_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct angle_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pos_pub::angle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pos_pub::angle_<ContainerAllocator>& v)
  {
    s << indent << "angle: ";
    Printer<double>::stream(s, indent + "  ", v.angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // POS_PUB_MESSAGE_ANGLE_H
