/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /builds/slave/rel-2.0-xr-osx64-bld/build/widget/public/nsIStandaloneNativeMenu.idl
 */

#ifndef __gen_nsIStandaloneNativeMenu_h__
#define __gen_nsIStandaloneNativeMenu_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMElement; /* forward declaration */


/* starting interface:    nsIStandaloneNativeMenu */
#define NS_ISTANDALONENATIVEMENU_IID_STR "7f7201eb-510c-4cef-bdf0-04a15a7a4a8c"

#define NS_ISTANDALONENATIVEMENU_IID \
  {0x7f7201eb, 0x510c, 0x4cef, \
    { 0xbd, 0xf0, 0x04, 0xa1, 0x5a, 0x7a, 0x4a, 0x8c }}

/**
 * Platform-independent interface to platform native menu objects.
 */
class NS_NO_VTABLE NS_SCRIPTABLE nsIStandaloneNativeMenu : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISTANDALONENATIVEMENU_IID)

  /**
   * Initialize the native menu using given XUL DOM element.
   *
   * @param aDOMElement A XUL DOM element of tag type |menu| or |menupopup|.
   */
  /* void init (in nsIDOMElement aDOMElement); */
  NS_SCRIPTABLE NS_IMETHOD Init(nsIDOMElement *aDOMElement) = 0;

  /**
   * This method must be called before the menu is opened and displayed to the
   * user. It allows the platform code to update the menu and also determine
   * whether the menu should even be shown.
   *
   * @return true if the menu can be shown, false if it should not be shown
   */
  /* boolean menuWillOpen (); */
  NS_SCRIPTABLE NS_IMETHOD MenuWillOpen(PRBool *_retval NS_OUTPARAM) = 0;

  /**
   * The native object representing the XUL menu that was passed to Init(). On
   * Mac OS X, this will be a NSMenu pointer, which will be retained and
   * autoreleased when the attribute is retrieved.
   */
  /* [noscript] readonly attribute voidPtr nativeMenu; */
  NS_IMETHOD GetNativeMenu(void **aNativeMenu) = 0;

  /**
   * Activate the native menu item specified by |anIndexString|. This method
   * is intended to be used by the test suite.
   *
   * @param anIndexString string containing a list of indices separated by
   *        pipe ('|') characters
   */
  /* void activateNativeMenuItemAt (in AString anIndexString); */
  NS_SCRIPTABLE NS_IMETHOD ActivateNativeMenuItemAt(const nsAString & anIndexString) = 0;

  /**
   * Force an update of the native menu item specified by |anIndexString|. This
   * method is intended to be used by the test suite.
   *
   * @param anIndexString string containing a list of indices separated by
   *        pipe ('|') characters
   */
  /* void forceUpdateNativeMenuAt (in AString anIndexString); */
  NS_SCRIPTABLE NS_IMETHOD ForceUpdateNativeMenuAt(const nsAString & anIndexString) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIStandaloneNativeMenu, NS_ISTANDALONENATIVEMENU_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISTANDALONENATIVEMENU \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIDOMElement *aDOMElement); \
  NS_SCRIPTABLE NS_IMETHOD MenuWillOpen(PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD GetNativeMenu(void **aNativeMenu); \
  NS_SCRIPTABLE NS_IMETHOD ActivateNativeMenuItemAt(const nsAString & anIndexString); \
  NS_SCRIPTABLE NS_IMETHOD ForceUpdateNativeMenuAt(const nsAString & anIndexString); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISTANDALONENATIVEMENU(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIDOMElement *aDOMElement) { return _to Init(aDOMElement); } \
  NS_SCRIPTABLE NS_IMETHOD MenuWillOpen(PRBool *_retval NS_OUTPARAM) { return _to MenuWillOpen(_retval); } \
  NS_IMETHOD GetNativeMenu(void **aNativeMenu) { return _to GetNativeMenu(aNativeMenu); } \
  NS_SCRIPTABLE NS_IMETHOD ActivateNativeMenuItemAt(const nsAString & anIndexString) { return _to ActivateNativeMenuItemAt(anIndexString); } \
  NS_SCRIPTABLE NS_IMETHOD ForceUpdateNativeMenuAt(const nsAString & anIndexString) { return _to ForceUpdateNativeMenuAt(anIndexString); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISTANDALONENATIVEMENU(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIDOMElement *aDOMElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(aDOMElement); } \
  NS_SCRIPTABLE NS_IMETHOD MenuWillOpen(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MenuWillOpen(_retval); } \
  NS_IMETHOD GetNativeMenu(void **aNativeMenu) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNativeMenu(aNativeMenu); } \
  NS_SCRIPTABLE NS_IMETHOD ActivateNativeMenuItemAt(const nsAString & anIndexString) { return !_to ? NS_ERROR_NULL_POINTER : _to->ActivateNativeMenuItemAt(anIndexString); } \
  NS_SCRIPTABLE NS_IMETHOD ForceUpdateNativeMenuAt(const nsAString & anIndexString) { return !_to ? NS_ERROR_NULL_POINTER : _to->ForceUpdateNativeMenuAt(anIndexString); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsStandaloneNativeMenu : public nsIStandaloneNativeMenu
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISTANDALONENATIVEMENU

  nsStandaloneNativeMenu();

private:
  ~nsStandaloneNativeMenu();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsStandaloneNativeMenu, nsIStandaloneNativeMenu)

nsStandaloneNativeMenu::nsStandaloneNativeMenu()
{
  /* member initializers and constructor code */
}

nsStandaloneNativeMenu::~nsStandaloneNativeMenu()
{
  /* destructor code */
}

/* void init (in nsIDOMElement aDOMElement); */
NS_IMETHODIMP nsStandaloneNativeMenu::Init(nsIDOMElement *aDOMElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean menuWillOpen (); */
NS_IMETHODIMP nsStandaloneNativeMenu::MenuWillOpen(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute voidPtr nativeMenu; */
NS_IMETHODIMP nsStandaloneNativeMenu::GetNativeMenu(void **aNativeMenu)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void activateNativeMenuItemAt (in AString anIndexString); */
NS_IMETHODIMP nsStandaloneNativeMenu::ActivateNativeMenuItemAt(const nsAString & anIndexString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void forceUpdateNativeMenuAt (in AString anIndexString); */
NS_IMETHODIMP nsStandaloneNativeMenu::ForceUpdateNativeMenuAt(const nsAString & anIndexString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIStandaloneNativeMenu_h__ */
