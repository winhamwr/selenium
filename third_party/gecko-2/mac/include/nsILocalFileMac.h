/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /builds/slave/rel-2.0-xr-osx64-bld/build/xpcom/io/nsILocalFileMac.idl
 */

#ifndef __gen_nsILocalFileMac_h__
#define __gen_nsILocalFileMac_h__


#ifndef __gen_nsILocalFile_h__
#include "nsILocalFile.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include <Carbon/Carbon.h>
#include <CoreFoundation/CoreFoundation.h>

/* starting interface:    nsILocalFileMac */
#define NS_ILOCALFILEMAC_IID_STR "de4c75be-d42b-4f8c-95d9-284c83cf29a4"

#define NS_ILOCALFILEMAC_IID \
  {0xde4c75be, 0xd42b, 0x4f8c, \
    { 0x95, 0xd9, 0x28, 0x4c, 0x83, 0xcf, 0x29, 0xa4 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsILocalFileMac : public nsILocalFile {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ILOCALFILEMAC_IID)

  /**
    * initWithCFURL
    *
    * Init this object with a CFURLRef
    *
    * NOTE: Supported only for XP_MACOSX
    * NOTE: If the path of the CFURL is /a/b/c, at least a/b must exist beforehand.
    *
    * @param   aCFURL         the CoreFoundation URL
    *
    */
  /* [noscript] void initWithCFURL (in CFURLRef aCFURL); */
  NS_IMETHOD InitWithCFURL(CFURLRef aCFURL) = 0;

  /**
    * initWithFSRef
    *
    * Init this object with an FSRef
    *
    * NOTE: Supported only for XP_MACOSX
    *
    * @param   aFSRef         the native FSRef
    *
    */
  /* [noscript] void initWithFSRef ([const] in FSRefPtr aFSRef); */
  NS_IMETHOD InitWithFSRef(const FSRef *aFSRef) = 0;

  /**
    * getCFURL
    *
    * Returns the CFURLRef of the file object. The caller is
    * responsible for calling CFRelease() on it.
    *
    * NOTE: Observes the state of the followLinks attribute.
    * If the file object is an alias and followLinks is TRUE, returns
    * the target of the alias. If followLinks is FALSE, returns
    * the unresolved alias file.
    *
    * NOTE: Supported only for XP_MACOSX
    *
    * @return
    *  
    */
  /* [noscript] CFURLRef getCFURL (); */
  NS_IMETHOD GetCFURL(CFURLRef *_retval NS_OUTPARAM) = 0;

  /**
    * getFSRef
    *
    * Returns the FSRef of the file object.
    *
    * NOTE: Observes the state of the followLinks attribute.
    * If the file object is an alias and followLinks is TRUE, returns
    * the target of the alias. If followLinks is FALSE, returns
    * the unresolved alias file.
    *
    * NOTE: Supported only for XP_MACOSX
    *
    * @return
    *  
    */
  /* [noscript] FSRef getFSRef (); */
  NS_IMETHOD GetFSRef(FSRef *_retval NS_OUTPARAM) = 0;

  /**
    * getFSSpec
    *
    * Returns the FSSpec of the file object.
    *
    * NOTE: Observes the state of the followLinks attribute.
    * If the file object is an alias and followLinks is TRUE, returns
    * the target of the alias. If followLinks is FALSE, returns
    * the unresolved alias file.
    *
    * @return
    *  
    */
  /* [noscript] FSSpec getFSSpec (); */
  NS_IMETHOD GetFSSpec(FSSpec *_retval NS_OUTPARAM) = 0;

  /**
    * fileSizeWithResFork
    * 
    * Returns the combined size of both the data fork and the resource
    * fork (if present) rather than just the size of the data fork
    * as returned by GetFileSize()
    *
    */
  /* readonly attribute PRInt64 fileSizeWithResFork; */
  NS_SCRIPTABLE NS_IMETHOD GetFileSizeWithResFork(PRInt64 *aFileSizeWithResFork) = 0;

  /**
    * fileType, creator
    *
    * File type and creator attributes
    *
    */
  /* [noscript] attribute OSType fileType; */
  NS_IMETHOD GetFileType(OSType *aFileType) = 0;
  NS_IMETHOD SetFileType(OSType aFileType) = 0;

  /* [noscript] attribute OSType fileCreator; */
  NS_IMETHOD GetFileCreator(OSType *aFileCreator) = 0;
  NS_IMETHOD SetFileCreator(OSType aFileCreator) = 0;

  /**
    * launchWithDoc
    *
    * Launch the application that this file points to with a document.
    *
    * @param   aDocToLoad          Must not be NULL. If no document, use nsILocalFile::launch
    * @param   aLaunchInBackground TRUE if the application should not come to the front.
    *
    */
  /* void launchWithDoc (in nsILocalFile aDocToLoad, in boolean aLaunchInBackground); */
  NS_SCRIPTABLE NS_IMETHOD LaunchWithDoc(nsILocalFile *aDocToLoad, PRBool aLaunchInBackground) = 0;

  /**
    * openDocWithApp
    *
    * Open the document that this file points to with the given application.
    *
    * @param   aAppToOpenWith      The application with  which to open the document.
    *                              If NULL, the creator code of the document is used
    *                              to determine the application.
    * @param   aLaunchInBackground TRUE if the application should not come to the front.
    *
    */
  /* void openDocWithApp (in nsILocalFile aAppToOpenWith, in boolean aLaunchInBackground); */
  NS_SCRIPTABLE NS_IMETHOD OpenDocWithApp(nsILocalFile *aAppToOpenWith, PRBool aLaunchInBackground) = 0;

  /**
    * isPackage
    *
    * returns true if a directory is determined to be a package under Mac OS 9/X
    *
    */
  /* boolean isPackage (); */
  NS_SCRIPTABLE NS_IMETHOD IsPackage(PRBool *_retval NS_OUTPARAM) = 0;

  /**
    * bundleDisplayName
    *
    * returns the display name of the application bundle (usually the human 
    * readable name of the application)
    */
  /* readonly attribute AString bundleDisplayName; */
  NS_SCRIPTABLE NS_IMETHOD GetBundleDisplayName(nsAString & aBundleDisplayName) = 0;

  /**
    * bundleIdentifier
    *
    * returns the identifier of the bundle
    */
  /* readonly attribute AUTF8String bundleIdentifier; */
  NS_SCRIPTABLE NS_IMETHOD GetBundleIdentifier(nsACString & aBundleIdentifier) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsILocalFileMac, NS_ILOCALFILEMAC_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSILOCALFILEMAC \
  NS_IMETHOD InitWithCFURL(CFURLRef aCFURL); \
  NS_IMETHOD InitWithFSRef(const FSRef *aFSRef); \
  NS_IMETHOD GetCFURL(CFURLRef *_retval NS_OUTPARAM); \
  NS_IMETHOD GetFSRef(FSRef *_retval NS_OUTPARAM); \
  NS_IMETHOD GetFSSpec(FSSpec *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFileSizeWithResFork(PRInt64 *aFileSizeWithResFork); \
  NS_IMETHOD GetFileType(OSType *aFileType); \
  NS_IMETHOD SetFileType(OSType aFileType); \
  NS_IMETHOD GetFileCreator(OSType *aFileCreator); \
  NS_IMETHOD SetFileCreator(OSType aFileCreator); \
  NS_SCRIPTABLE NS_IMETHOD LaunchWithDoc(nsILocalFile *aDocToLoad, PRBool aLaunchInBackground); \
  NS_SCRIPTABLE NS_IMETHOD OpenDocWithApp(nsILocalFile *aAppToOpenWith, PRBool aLaunchInBackground); \
  NS_SCRIPTABLE NS_IMETHOD IsPackage(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBundleDisplayName(nsAString & aBundleDisplayName); \
  NS_SCRIPTABLE NS_IMETHOD GetBundleIdentifier(nsACString & aBundleIdentifier); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSILOCALFILEMAC(_to) \
  NS_IMETHOD InitWithCFURL(CFURLRef aCFURL) { return _to InitWithCFURL(aCFURL); } \
  NS_IMETHOD InitWithFSRef(const FSRef *aFSRef) { return _to InitWithFSRef(aFSRef); } \
  NS_IMETHOD GetCFURL(CFURLRef *_retval NS_OUTPARAM) { return _to GetCFURL(_retval); } \
  NS_IMETHOD GetFSRef(FSRef *_retval NS_OUTPARAM) { return _to GetFSRef(_retval); } \
  NS_IMETHOD GetFSSpec(FSSpec *_retval NS_OUTPARAM) { return _to GetFSSpec(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFileSizeWithResFork(PRInt64 *aFileSizeWithResFork) { return _to GetFileSizeWithResFork(aFileSizeWithResFork); } \
  NS_IMETHOD GetFileType(OSType *aFileType) { return _to GetFileType(aFileType); } \
  NS_IMETHOD SetFileType(OSType aFileType) { return _to SetFileType(aFileType); } \
  NS_IMETHOD GetFileCreator(OSType *aFileCreator) { return _to GetFileCreator(aFileCreator); } \
  NS_IMETHOD SetFileCreator(OSType aFileCreator) { return _to SetFileCreator(aFileCreator); } \
  NS_SCRIPTABLE NS_IMETHOD LaunchWithDoc(nsILocalFile *aDocToLoad, PRBool aLaunchInBackground) { return _to LaunchWithDoc(aDocToLoad, aLaunchInBackground); } \
  NS_SCRIPTABLE NS_IMETHOD OpenDocWithApp(nsILocalFile *aAppToOpenWith, PRBool aLaunchInBackground) { return _to OpenDocWithApp(aAppToOpenWith, aLaunchInBackground); } \
  NS_SCRIPTABLE NS_IMETHOD IsPackage(PRBool *_retval NS_OUTPARAM) { return _to IsPackage(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBundleDisplayName(nsAString & aBundleDisplayName) { return _to GetBundleDisplayName(aBundleDisplayName); } \
  NS_SCRIPTABLE NS_IMETHOD GetBundleIdentifier(nsACString & aBundleIdentifier) { return _to GetBundleIdentifier(aBundleIdentifier); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSILOCALFILEMAC(_to) \
  NS_IMETHOD InitWithCFURL(CFURLRef aCFURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithCFURL(aCFURL); } \
  NS_IMETHOD InitWithFSRef(const FSRef *aFSRef) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithFSRef(aFSRef); } \
  NS_IMETHOD GetCFURL(CFURLRef *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCFURL(_retval); } \
  NS_IMETHOD GetFSRef(FSRef *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFSRef(_retval); } \
  NS_IMETHOD GetFSSpec(FSSpec *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFSSpec(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFileSizeWithResFork(PRInt64 *aFileSizeWithResFork) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileSizeWithResFork(aFileSizeWithResFork); } \
  NS_IMETHOD GetFileType(OSType *aFileType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileType(aFileType); } \
  NS_IMETHOD SetFileType(OSType aFileType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFileType(aFileType); } \
  NS_IMETHOD GetFileCreator(OSType *aFileCreator) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileCreator(aFileCreator); } \
  NS_IMETHOD SetFileCreator(OSType aFileCreator) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFileCreator(aFileCreator); } \
  NS_SCRIPTABLE NS_IMETHOD LaunchWithDoc(nsILocalFile *aDocToLoad, PRBool aLaunchInBackground) { return !_to ? NS_ERROR_NULL_POINTER : _to->LaunchWithDoc(aDocToLoad, aLaunchInBackground); } \
  NS_SCRIPTABLE NS_IMETHOD OpenDocWithApp(nsILocalFile *aAppToOpenWith, PRBool aLaunchInBackground) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenDocWithApp(aAppToOpenWith, aLaunchInBackground); } \
  NS_SCRIPTABLE NS_IMETHOD IsPackage(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsPackage(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBundleDisplayName(nsAString & aBundleDisplayName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBundleDisplayName(aBundleDisplayName); } \
  NS_SCRIPTABLE NS_IMETHOD GetBundleIdentifier(nsACString & aBundleIdentifier) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBundleIdentifier(aBundleIdentifier); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsLocalFileMac : public nsILocalFileMac
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSILOCALFILEMAC

  nsLocalFileMac();

private:
  ~nsLocalFileMac();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsLocalFileMac, nsILocalFileMac)

nsLocalFileMac::nsLocalFileMac()
{
  /* member initializers and constructor code */
}

nsLocalFileMac::~nsLocalFileMac()
{
  /* destructor code */
}

/* [noscript] void initWithCFURL (in CFURLRef aCFURL); */
NS_IMETHODIMP nsLocalFileMac::InitWithCFURL(CFURLRef aCFURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void initWithFSRef ([const] in FSRefPtr aFSRef); */
NS_IMETHODIMP nsLocalFileMac::InitWithFSRef(const FSRef *aFSRef)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] CFURLRef getCFURL (); */
NS_IMETHODIMP nsLocalFileMac::GetCFURL(CFURLRef *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] FSRef getFSRef (); */
NS_IMETHODIMP nsLocalFileMac::GetFSRef(FSRef *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] FSSpec getFSSpec (); */
NS_IMETHODIMP nsLocalFileMac::GetFSSpec(FSSpec *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRInt64 fileSizeWithResFork; */
NS_IMETHODIMP nsLocalFileMac::GetFileSizeWithResFork(PRInt64 *aFileSizeWithResFork)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] attribute OSType fileType; */
NS_IMETHODIMP nsLocalFileMac::GetFileType(OSType *aFileType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsLocalFileMac::SetFileType(OSType aFileType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] attribute OSType fileCreator; */
NS_IMETHODIMP nsLocalFileMac::GetFileCreator(OSType *aFileCreator)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsLocalFileMac::SetFileCreator(OSType aFileCreator)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void launchWithDoc (in nsILocalFile aDocToLoad, in boolean aLaunchInBackground); */
NS_IMETHODIMP nsLocalFileMac::LaunchWithDoc(nsILocalFile *aDocToLoad, PRBool aLaunchInBackground)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void openDocWithApp (in nsILocalFile aAppToOpenWith, in boolean aLaunchInBackground); */
NS_IMETHODIMP nsLocalFileMac::OpenDocWithApp(nsILocalFile *aAppToOpenWith, PRBool aLaunchInBackground)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isPackage (); */
NS_IMETHODIMP nsLocalFileMac::IsPackage(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString bundleDisplayName; */
NS_IMETHODIMP nsLocalFileMac::GetBundleDisplayName(nsAString & aBundleDisplayName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String bundleIdentifier; */
NS_IMETHODIMP nsLocalFileMac::GetBundleIdentifier(nsACString & aBundleIdentifier)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

extern "C"
{
NS_EXPORT nsresult NS_NewLocalFileWithFSRef(const FSRef* aFSRef, PRBool aFollowSymlinks, nsILocalFileMac** result);
NS_EXPORT nsresult NS_NewLocalFileWithCFURL(const CFURLRef aURL, PRBool aFollowSymlinks, nsILocalFileMac** result);
}

#endif /* __gen_nsILocalFileMac_h__ */
