/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /builds/slave/rel-2.0-xr-osx64-bld/build/toolkit/components/url-classifier/public/nsIUrlClassifierStreamUpdater.idl
 */

#ifndef __gen_nsIUrlClassifierStreamUpdater_h__
#define __gen_nsIUrlClassifierStreamUpdater_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIUrlClassifierDBService_h__
#include "nsIUrlClassifierDBService.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIUrlClassifierStreamUpdater */
#define NS_IURLCLASSIFIERSTREAMUPDATER_IID_STR "daf3038a-556c-47d3-a3d2-36caa9a762a0"

#define NS_IURLCLASSIFIERSTREAMUPDATER_IID \
  {0xdaf3038a, 0x556c, 0x47d3, \
    { 0xa3, 0xd2, 0x36, 0xca, 0xa9, 0xa7, 0x62, 0xa0 }}

/**
 * This is a class to manage large table updates from the server.  Rather than
 * downloading the whole update and then updating the sqlite database, we
 * update tables as the data is streaming in.
 */
class NS_NO_VTABLE NS_SCRIPTABLE nsIUrlClassifierStreamUpdater : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IURLCLASSIFIERSTREAMUPDATER_IID)

  /**
   * The Url to download from.  Should be plain ascii text.
   */
  /* attribute ACString updateUrl; */
  NS_SCRIPTABLE NS_IMETHOD GetUpdateUrl(nsACString & aUpdateUrl) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetUpdateUrl(const nsACString & aUpdateUrl) = 0;

  /**
   * Try to download updates from updateUrl.  Only one instance of this
   * runs at a time, so we return false if another instance is already
   * running.
   * @param aRequestTables Comma-separated list of tables included in this
   *        update.
   * @param aRequestBody The body for the request.
   * @param aClientKey The client key for checking the update's MAC.
   * @param aSuccessCallback Called after a successful update.
   * @param aUpdateErrorCallback Called for problems applying the update
   * @param aDownloadErrorCallback Called if we get an http error or a
   *        connection refused error.
   */
  /* boolean downloadUpdates (in ACString aRequestTables, in ACString aRequestBody, in ACString aClientKey, in nsIUrlClassifierCallback aSuccessCallback, in nsIUrlClassifierCallback aUpdateErrorCallback, in nsIUrlClassifierCallback aDownloadErrorCallback); */
  NS_SCRIPTABLE NS_IMETHOD DownloadUpdates(const nsACString & aRequestTables, const nsACString & aRequestBody, const nsACString & aClientKey, nsIUrlClassifierCallback *aSuccessCallback, nsIUrlClassifierCallback *aUpdateErrorCallback, nsIUrlClassifierCallback *aDownloadErrorCallback, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIUrlClassifierStreamUpdater, NS_IURLCLASSIFIERSTREAMUPDATER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIURLCLASSIFIERSTREAMUPDATER \
  NS_SCRIPTABLE NS_IMETHOD GetUpdateUrl(nsACString & aUpdateUrl); \
  NS_SCRIPTABLE NS_IMETHOD SetUpdateUrl(const nsACString & aUpdateUrl); \
  NS_SCRIPTABLE NS_IMETHOD DownloadUpdates(const nsACString & aRequestTables, const nsACString & aRequestBody, const nsACString & aClientKey, nsIUrlClassifierCallback *aSuccessCallback, nsIUrlClassifierCallback *aUpdateErrorCallback, nsIUrlClassifierCallback *aDownloadErrorCallback, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIURLCLASSIFIERSTREAMUPDATER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUpdateUrl(nsACString & aUpdateUrl) { return _to GetUpdateUrl(aUpdateUrl); } \
  NS_SCRIPTABLE NS_IMETHOD SetUpdateUrl(const nsACString & aUpdateUrl) { return _to SetUpdateUrl(aUpdateUrl); } \
  NS_SCRIPTABLE NS_IMETHOD DownloadUpdates(const nsACString & aRequestTables, const nsACString & aRequestBody, const nsACString & aClientKey, nsIUrlClassifierCallback *aSuccessCallback, nsIUrlClassifierCallback *aUpdateErrorCallback, nsIUrlClassifierCallback *aDownloadErrorCallback, PRBool *_retval NS_OUTPARAM) { return _to DownloadUpdates(aRequestTables, aRequestBody, aClientKey, aSuccessCallback, aUpdateErrorCallback, aDownloadErrorCallback, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIURLCLASSIFIERSTREAMUPDATER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUpdateUrl(nsACString & aUpdateUrl) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUpdateUrl(aUpdateUrl); } \
  NS_SCRIPTABLE NS_IMETHOD SetUpdateUrl(const nsACString & aUpdateUrl) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUpdateUrl(aUpdateUrl); } \
  NS_SCRIPTABLE NS_IMETHOD DownloadUpdates(const nsACString & aRequestTables, const nsACString & aRequestBody, const nsACString & aClientKey, nsIUrlClassifierCallback *aSuccessCallback, nsIUrlClassifierCallback *aUpdateErrorCallback, nsIUrlClassifierCallback *aDownloadErrorCallback, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->DownloadUpdates(aRequestTables, aRequestBody, aClientKey, aSuccessCallback, aUpdateErrorCallback, aDownloadErrorCallback, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsUrlClassifierStreamUpdater : public nsIUrlClassifierStreamUpdater
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIURLCLASSIFIERSTREAMUPDATER

  nsUrlClassifierStreamUpdater();

private:
  ~nsUrlClassifierStreamUpdater();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsUrlClassifierStreamUpdater, nsIUrlClassifierStreamUpdater)

nsUrlClassifierStreamUpdater::nsUrlClassifierStreamUpdater()
{
  /* member initializers and constructor code */
}

nsUrlClassifierStreamUpdater::~nsUrlClassifierStreamUpdater()
{
  /* destructor code */
}

/* attribute ACString updateUrl; */
NS_IMETHODIMP nsUrlClassifierStreamUpdater::GetUpdateUrl(nsACString & aUpdateUrl)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsUrlClassifierStreamUpdater::SetUpdateUrl(const nsACString & aUpdateUrl)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean downloadUpdates (in ACString aRequestTables, in ACString aRequestBody, in ACString aClientKey, in nsIUrlClassifierCallback aSuccessCallback, in nsIUrlClassifierCallback aUpdateErrorCallback, in nsIUrlClassifierCallback aDownloadErrorCallback); */
NS_IMETHODIMP nsUrlClassifierStreamUpdater::DownloadUpdates(const nsACString & aRequestTables, const nsACString & aRequestBody, const nsACString & aClientKey, nsIUrlClassifierCallback *aSuccessCallback, nsIUrlClassifierCallback *aUpdateErrorCallback, nsIUrlClassifierCallback *aDownloadErrorCallback, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIUrlClassifierStreamUpdater_h__ */
