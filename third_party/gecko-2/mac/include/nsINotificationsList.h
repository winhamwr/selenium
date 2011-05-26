/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /builds/slave/rel-2.0-xr-osx64-bld/build/toolkit/components/alerts/public/nsINotificationsList.idl
 */

#ifndef __gen_nsINotificationsList_h__
#define __gen_nsINotificationsList_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsINotificationsList */
#define NS_INOTIFICATIONSLIST_IID_STR "11e0176a-4a2d-4a90-8dcc-1590eeb1769d"

#define NS_INOTIFICATIONSLIST_IID \
  {0x11e0176a, 0x4a2d, 0x4a90, \
    { 0x8d, 0xcc, 0x15, 0x90, 0xee, 0xb1, 0x76, 0x9d }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINotificationsList : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INOTIFICATIONSLIST_IID)

  /**
     * Adds a notification to the registration dictionary.
     *
     * @param aName The name of the notification we might be sending.
     * @param aEnabled Indicates if the notification is enabled by default.
     */
  /* void addNotification (in AString aName, in boolean aEnabled); */
  NS_SCRIPTABLE NS_IMETHOD AddNotification(const nsAString & aName, PRBool aEnabled) = 0;

  /**
     * Checks to see if a paticular notification has already been registered.
     *
     * @param aName The name of the notification we are checking against.
     */
  /* boolean isNotification (in AString aName); */
  NS_SCRIPTABLE NS_IMETHOD IsNotification(const nsAString & aName, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINotificationsList, NS_INOTIFICATIONSLIST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINOTIFICATIONSLIST \
  NS_SCRIPTABLE NS_IMETHOD AddNotification(const nsAString & aName, PRBool aEnabled); \
  NS_SCRIPTABLE NS_IMETHOD IsNotification(const nsAString & aName, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINOTIFICATIONSLIST(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddNotification(const nsAString & aName, PRBool aEnabled) { return _to AddNotification(aName, aEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD IsNotification(const nsAString & aName, PRBool *_retval NS_OUTPARAM) { return _to IsNotification(aName, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINOTIFICATIONSLIST(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddNotification(const nsAString & aName, PRBool aEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddNotification(aName, aEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD IsNotification(const nsAString & aName, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsNotification(aName, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNotificationsList : public nsINotificationsList
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINOTIFICATIONSLIST

  nsNotificationsList();

private:
  ~nsNotificationsList();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNotificationsList, nsINotificationsList)

nsNotificationsList::nsNotificationsList()
{
  /* member initializers and constructor code */
}

nsNotificationsList::~nsNotificationsList()
{
  /* destructor code */
}

/* void addNotification (in AString aName, in boolean aEnabled); */
NS_IMETHODIMP nsNotificationsList::AddNotification(const nsAString & aName, PRBool aEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isNotification (in AString aName); */
NS_IMETHODIMP nsNotificationsList::IsNotification(const nsAString & aName, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsINotificationsList_h__ */
