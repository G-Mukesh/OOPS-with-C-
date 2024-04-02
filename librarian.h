
#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include "person.h"

#include <string>

/**
  * class librarian
  * 
  */

class librarian : public person
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  librarian ();

  /**
   * Empty Destructor
   */
  virtual ~librarian ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void verify_membership ()
  {
  }


  /**
   */
  void issue_membership ()
  {
  }


  /**
   */
  void check_availability_of_books ()
  {
  }


  /**
   */
  void stock_new_books ()
  {
  }


  /**
   */
  void remove_boooks ()
  {
  }


  /**
   */
  void issue_books ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void qualification;
  void experience;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of qualification
   * @param new_var the new value of qualification
   */
  void setQualification (void new_var)   {
      qualification = new_var;
  }

  /**
   * Get the value of qualification
   * @return the value of qualification
   */
  void getQualification ()   {
    return qualification;
  }

  /**
   * Set the value of experience
   * @param new_var the new value of experience
   */
  void setExperience (void new_var)   {
      experience = new_var;
  }

  /**
   * Get the value of experience
   * @return the value of experience
   */
  void getExperience ()   {
    return experience;
  }
private:


  void initAttributes () ;

};

#endif // LIBRARIAN_H
