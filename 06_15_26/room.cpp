#include "room.h"
#include <sstream>

Room::Room(std::string c, std::string b, int r)
{
    campus = c;
    building = b;
    roomNum = r;
} 
std::string Room::getCampus() const
{
  return campus;
}
std::string Room::getBuilding() const
{
  return building;
}
int Room::getRoomNum() const
{
  return roomNum;
}
std::string Room::toString() const
{
  std::ostringstream out;
  out << campus << " " << building << " " << roomNum;
  return out.str();
}
