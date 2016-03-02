/*
 * Name        : lab_9.cpp
 * Author      : Tyler O'Guinn
 * Description : Building a Spaceship Class
 */
#include "lab_9.h"

void Spaceship::set_name(string name)
  {
  name_=name;
  }

void Spaceship::set_top_speed(double top_speed)
  {
top_speed_=top_speed;
  }
  
   void Spaceship::set_fuel_source(string fuel_source)
  {
fuel_source_=fuel_source;
  }
  
    void Spaceship::set_crew_capacity(int crew_capacity)
{
 crew_capacity_=crew_capacity;
}

 string Spaceship::name() const
{
 return name_;
}

  double Spaceship::top_speed() const
{
 return top_speed_;
}

  string Spaceship::fuel_source() const
{
 return fuel_source_;
}

  int Spaceship::crew_capacity() const
{
 return crew_capacity_;
}

string Spaceship::ToString() const
{
    stringstream ss;
    
    ss<<name()<<"\nTop Speed:     Warp "<<std::fixed<<std::setprecision(2)<<top_speed()<<"\nFuel Source:   "<<fuel_source()<<"\nCrew Capacity: "<<crew_capacity();
    return ss.str();
}