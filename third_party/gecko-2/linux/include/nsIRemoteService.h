/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /builds/slave/rel-2.0-xr-lnx-bld/build/toolkit/components/remote/nsIRemoteService.idl
 */

#ifndef __gen_nsIRemoteService_h__
#define __gen_nsIRemoteService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMWindow; /* forward declaration */


/* starting interface:    nsIRemoteService */
#define NS_IREMOTESERVICE_IID_STR "a2240f6a-f1e4-4548-9e1a-6f3bc9b2426c"

#define NS_IREMOTESERVICE_IID \
  {0xa2240f6a, 0xf1e4, 0x4548, \
    { 0x9e, 0x1a, 0x6f, 0x3b, 0xc9, 0xb2, 0x42, 0x6c }}

/**
 * Start and stop the remote service (xremote/phremote), and register
 * windows with the service for backwards compatibility with old xremote
 * clients.
 *
 * @status FLUID This interface is not frozen and is not intended for embedders
 *               who want a frozen API. If you are an embedder and need this
 *               functionality, contact Benjamin Smedberg about the possibility
 *               of freezing the functionality you need.
 */
class NS_NO_VTABLE NS_SCRIPTABLE nsIRemoteService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IREMOTESERVICE_IID)

  /**
   * Start the remote service. This should not be done until app startup
   * appears to have been successful.
   *
   * @param appName     (Required) Sets a window property identifying the
   *                    application.
   * @param profileName (May be null) Sets a window property identifying the
   *                    profile name.
   */
  /* void startup (in string appName, in string profileName); */
  NS_SCRIPTABLE NS_IMETHOD Startup(const char *appName, const char *profileName) = 0;

  /**
   * Register a XUL window with the xremote service. The window will be
   * configured to accept incoming remote requests. If this method is called
   * before startup(), the registration will happen once startup() is called.
   */
  /* void registerWindow (in nsIDOMWindow aWindow); */
  NS_SCRIPTABLE NS_IMETHOD RegisterWindow(nsIDOMWindow *aWindow) = 0;

  /**
   * Stop the remote service from accepting additional requests.
   */
  /* void shutdown (); */
  NS_SCRIPTABLE NS_IMETHOD Shutdown(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIRemoteService, NS_IREMOTESERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIREMOTESERVICE \
  NS_SCRIPTABLE NS_IMETHOD Startup(const char *appName, const char *profileName); \
  NS_SCRIPTABLE NS_IMETHOD RegisterWindow(nsIDOMWindow *aWindow); \
  NS_SCRIPTABLE NS_IMETHOD Shutdown(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIREMOTESERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Startup(const char *appName, const char *profileName) { return _to Startup(appName, profileName); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterWindow(nsIDOMWindow *aWindow) { return _to RegisterWindow(aWindow); } \
  NS_SCRIPTABLE NS_IMETHOD Shutdown(void) { return _to Shutdown(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIREMOTESERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Startup(const char *appName, const char *profileName) { return !_to ? NS_ERROR_NULL_POINTER : _to->Startup(appName, profileName); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterWindow(nsIDOMWindow *aWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterWindow(aWindow); } \
  NS_SCRIPTABLE NS_IMETHOD Shutdown(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Shutdown(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsRemoteService : public nsIRemoteService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIREMOTESERVICE

  nsRemoteService();

private:
  ~nsRemoteService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsRemoteService, nsIRemoteService)

nsRemoteService::nsRemoteService()
{
  /* member initializers and constructor code */
}

nsRemoteService::~nsRemoteService()
{
  /* destructor code */
}

/* void startup (in string appName, in string profileName); */
NS_IMETHODIMP nsRemoteService::Startup(const char *appName, const char *profileName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerWindow (in nsIDOMWindow aWindow); */
NS_IMETHODIMP nsRemoteService::RegisterWindow(nsIDOMWindow *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void shutdown (); */
NS_IMETHODIMP nsRemoteService::Shutdown()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIRemoteService_h__ */
