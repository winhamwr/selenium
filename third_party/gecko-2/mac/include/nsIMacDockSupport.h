/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /builds/slave/rel-2.0-xr-osx64-bld/build/widget/public/nsIMacDockSupport.idl
 */

#ifndef __gen_nsIMacDockSupport_h__
#define __gen_nsIMacDockSupport_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIStandaloneNativeMenu; /* forward declaration */


/* starting interface:    nsIMacDockSupport */
#define NS_IMACDOCKSUPPORT_IID_STR "cbc8a835-0733-470b-a51d-b7ebbfa88689"

#define NS_IMACDOCKSUPPORT_IID \
  {0xcbc8a835, 0x0733, 0x470b, \
    { 0xa5, 0x1d, 0xb7, 0xeb, 0xbf, 0xa8, 0x86, 0x89 }}

/**
 * Allow applications to interface with the Mac OS X Dock.
 */
class NS_NO_VTABLE NS_SCRIPTABLE nsIMacDockSupport : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMACDOCKSUPPORT_IID)

  /**
   * Menu to use for application-specific dock menu items.
   */
  /* attribute nsIStandaloneNativeMenu dockMenu; */
  NS_SCRIPTABLE NS_IMETHOD GetDockMenu(nsIStandaloneNativeMenu **aDockMenu) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDockMenu(nsIStandaloneNativeMenu *aDockMenu) = 0;

  /**
   * Activate the application. This should be used by an application to
   * activate itself when a dock menu is selected as selection of a dock menu
   * item does not automatically activate the application.
   *
   * @param aIgnoreOtherApplications If false, the application is activated
   *        only if no other application is currently active. If true, the
   *        application activates regardless. 
   */
  /* void activateApplication (in boolean aIgnoreOtherApplications); */
  NS_SCRIPTABLE NS_IMETHOD ActivateApplication(PRBool aIgnoreOtherApplications) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMacDockSupport, NS_IMACDOCKSUPPORT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMACDOCKSUPPORT \
  NS_SCRIPTABLE NS_IMETHOD GetDockMenu(nsIStandaloneNativeMenu **aDockMenu); \
  NS_SCRIPTABLE NS_IMETHOD SetDockMenu(nsIStandaloneNativeMenu *aDockMenu); \
  NS_SCRIPTABLE NS_IMETHOD ActivateApplication(PRBool aIgnoreOtherApplications); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMACDOCKSUPPORT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDockMenu(nsIStandaloneNativeMenu **aDockMenu) { return _to GetDockMenu(aDockMenu); } \
  NS_SCRIPTABLE NS_IMETHOD SetDockMenu(nsIStandaloneNativeMenu *aDockMenu) { return _to SetDockMenu(aDockMenu); } \
  NS_SCRIPTABLE NS_IMETHOD ActivateApplication(PRBool aIgnoreOtherApplications) { return _to ActivateApplication(aIgnoreOtherApplications); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMACDOCKSUPPORT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDockMenu(nsIStandaloneNativeMenu **aDockMenu) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDockMenu(aDockMenu); } \
  NS_SCRIPTABLE NS_IMETHOD SetDockMenu(nsIStandaloneNativeMenu *aDockMenu) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDockMenu(aDockMenu); } \
  NS_SCRIPTABLE NS_IMETHOD ActivateApplication(PRBool aIgnoreOtherApplications) { return !_to ? NS_ERROR_NULL_POINTER : _to->ActivateApplication(aIgnoreOtherApplications); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMacDockSupport : public nsIMacDockSupport
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMACDOCKSUPPORT

  nsMacDockSupport();

private:
  ~nsMacDockSupport();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsMacDockSupport, nsIMacDockSupport)

nsMacDockSupport::nsMacDockSupport()
{
  /* member initializers and constructor code */
}

nsMacDockSupport::~nsMacDockSupport()
{
  /* destructor code */
}

/* attribute nsIStandaloneNativeMenu dockMenu; */
NS_IMETHODIMP nsMacDockSupport::GetDockMenu(nsIStandaloneNativeMenu **aDockMenu)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsMacDockSupport::SetDockMenu(nsIStandaloneNativeMenu *aDockMenu)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void activateApplication (in boolean aIgnoreOtherApplications); */
NS_IMETHODIMP nsMacDockSupport::ActivateApplication(PRBool aIgnoreOtherApplications)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIMacDockSupport_h__ */
