/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /builds/slave/rel-2.0-xr-osx64-bld/build/toolkit/components/url-classifier/public/nsIUrlClassifierHashCompleter.idl
 */

#ifndef __gen_nsIUrlClassifierHashCompleter_h__
#define __gen_nsIUrlClassifierHashCompleter_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIUrlClassifierHashCompleterCallback */
#define NS_IURLCLASSIFIERHASHCOMPLETERCALLBACK_IID_STR "bbd6c954-7cb4-4447-bc55-8cefd1ceed89"

#define NS_IURLCLASSIFIERHASHCOMPLETERCALLBACK_IID \
  {0xbbd6c954, 0x7cb4, 0x4447, \
    { 0xbc, 0x55, 0x8c, 0xef, 0xd1, 0xce, 0xed, 0x89 }}

/**
 * This interface is implemented by nsIUrlClassifierHashCompleter clients.
 */
class NS_NO_VTABLE NS_SCRIPTABLE nsIUrlClassifierHashCompleterCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IURLCLASSIFIERHASHCOMPLETERCALLBACK_IID)

  /**
   * A complete hash has been found that matches the partial hash.
   * This method may be called 0-n times for a given
   * nsIUrlClassifierCompleter::complete() call.
   *
   * @param hash
   *        The 128-bit hash that was discovered.
   * @param table
   *        The name of the table that this hash belongs to.
   * @param chunkId
   *        The database chunk that this hash belongs to.
   * @param trusted
   *        The completion was verified with a MAC and can be cached.
   */
  /* void completion (in ACString hash, in ACString table, in PRUint32 chunkId, in PRBool trusted); */
  NS_SCRIPTABLE NS_IMETHOD Completion(const nsACString & hash, const nsACString & table, PRUint32 chunkId, PRBool trusted) = 0;

  /**
   * The completion is complete.  This method is called once per
   * nsIUrlClassifierCompleter::complete() call, after all completion()
   * calls are finished.
   *
   * @param status
   *        NS_OK if the request completed successfully, or an error code.
   */
  /* void completionFinished (in nsresult status); */
  NS_SCRIPTABLE NS_IMETHOD CompletionFinished(nsresult status) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIUrlClassifierHashCompleterCallback, NS_IURLCLASSIFIERHASHCOMPLETERCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIURLCLASSIFIERHASHCOMPLETERCALLBACK \
  NS_SCRIPTABLE NS_IMETHOD Completion(const nsACString & hash, const nsACString & table, PRUint32 chunkId, PRBool trusted); \
  NS_SCRIPTABLE NS_IMETHOD CompletionFinished(nsresult status); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIURLCLASSIFIERHASHCOMPLETERCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Completion(const nsACString & hash, const nsACString & table, PRUint32 chunkId, PRBool trusted) { return _to Completion(hash, table, chunkId, trusted); } \
  NS_SCRIPTABLE NS_IMETHOD CompletionFinished(nsresult status) { return _to CompletionFinished(status); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIURLCLASSIFIERHASHCOMPLETERCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Completion(const nsACString & hash, const nsACString & table, PRUint32 chunkId, PRBool trusted) { return !_to ? NS_ERROR_NULL_POINTER : _to->Completion(hash, table, chunkId, trusted); } \
  NS_SCRIPTABLE NS_IMETHOD CompletionFinished(nsresult status) { return !_to ? NS_ERROR_NULL_POINTER : _to->CompletionFinished(status); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsUrlClassifierHashCompleterCallback : public nsIUrlClassifierHashCompleterCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIURLCLASSIFIERHASHCOMPLETERCALLBACK

  nsUrlClassifierHashCompleterCallback();

private:
  ~nsUrlClassifierHashCompleterCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsUrlClassifierHashCompleterCallback, nsIUrlClassifierHashCompleterCallback)

nsUrlClassifierHashCompleterCallback::nsUrlClassifierHashCompleterCallback()
{
  /* member initializers and constructor code */
}

nsUrlClassifierHashCompleterCallback::~nsUrlClassifierHashCompleterCallback()
{
  /* destructor code */
}

/* void completion (in ACString hash, in ACString table, in PRUint32 chunkId, in PRBool trusted); */
NS_IMETHODIMP nsUrlClassifierHashCompleterCallback::Completion(const nsACString & hash, const nsACString & table, PRUint32 chunkId, PRBool trusted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void completionFinished (in nsresult status); */
NS_IMETHODIMP nsUrlClassifierHashCompleterCallback::CompletionFinished(nsresult status)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIUrlClassifierHashCompleter */
#define NS_IURLCLASSIFIERHASHCOMPLETER_IID_STR "ade9b72b-3562-44f5-aba6-e63246be53ae"

#define NS_IURLCLASSIFIERHASHCOMPLETER_IID \
  {0xade9b72b, 0x3562, 0x44f5, \
    { 0xab, 0xa6, 0xe6, 0x32, 0x46, 0xbe, 0x53, 0xae }}

/**
 * Clients updating the url-classifier database have the option of sending
 * partial (32-bit) hashes of URL fragments to be blacklisted.  If the
 * url-classifier encounters one of these truncated hashes, it will ask
 * an nsIUrlClassifierCompleter instance to asynchronously provide the
 * complete hash, along with some associated metadata.
 */
class NS_NO_VTABLE NS_SCRIPTABLE nsIUrlClassifierHashCompleter : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IURLCLASSIFIERHASHCOMPLETER_IID)

  /**
   * Request a completed hash.
   *
   * @param partialHash
   *        The 32-bit hash encountered by the url-classifier.
   * @param callback
   *        An nsIUrlClassifierCompleterCallback instance.
   */
  /* void complete (in ACString partialHash, in nsIUrlClassifierHashCompleterCallback callback); */
  NS_SCRIPTABLE NS_IMETHOD Complete(const nsACString & partialHash, nsIUrlClassifierHashCompleterCallback *callback) = 0;

  /**
   * Set the client and wrapped key for verified updates.
   */
  /* void setKeys (in ACString clientKey, in ACString wrappedKey); */
  NS_SCRIPTABLE NS_IMETHOD SetKeys(const nsACString & clientKey, const nsACString & wrappedKey) = 0;

  /**
   * The URL for the gethash request
   */
  /* attribute ACString gethashUrl; */
  NS_SCRIPTABLE NS_IMETHOD GetGethashUrl(nsACString & aGethashUrl) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetGethashUrl(const nsACString & aGethashUrl) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIUrlClassifierHashCompleter, NS_IURLCLASSIFIERHASHCOMPLETER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIURLCLASSIFIERHASHCOMPLETER \
  NS_SCRIPTABLE NS_IMETHOD Complete(const nsACString & partialHash, nsIUrlClassifierHashCompleterCallback *callback); \
  NS_SCRIPTABLE NS_IMETHOD SetKeys(const nsACString & clientKey, const nsACString & wrappedKey); \
  NS_SCRIPTABLE NS_IMETHOD GetGethashUrl(nsACString & aGethashUrl); \
  NS_SCRIPTABLE NS_IMETHOD SetGethashUrl(const nsACString & aGethashUrl); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIURLCLASSIFIERHASHCOMPLETER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Complete(const nsACString & partialHash, nsIUrlClassifierHashCompleterCallback *callback) { return _to Complete(partialHash, callback); } \
  NS_SCRIPTABLE NS_IMETHOD SetKeys(const nsACString & clientKey, const nsACString & wrappedKey) { return _to SetKeys(clientKey, wrappedKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetGethashUrl(nsACString & aGethashUrl) { return _to GetGethashUrl(aGethashUrl); } \
  NS_SCRIPTABLE NS_IMETHOD SetGethashUrl(const nsACString & aGethashUrl) { return _to SetGethashUrl(aGethashUrl); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIURLCLASSIFIERHASHCOMPLETER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Complete(const nsACString & partialHash, nsIUrlClassifierHashCompleterCallback *callback) { return !_to ? NS_ERROR_NULL_POINTER : _to->Complete(partialHash, callback); } \
  NS_SCRIPTABLE NS_IMETHOD SetKeys(const nsACString & clientKey, const nsACString & wrappedKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetKeys(clientKey, wrappedKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetGethashUrl(nsACString & aGethashUrl) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGethashUrl(aGethashUrl); } \
  NS_SCRIPTABLE NS_IMETHOD SetGethashUrl(const nsACString & aGethashUrl) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGethashUrl(aGethashUrl); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsUrlClassifierHashCompleter : public nsIUrlClassifierHashCompleter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIURLCLASSIFIERHASHCOMPLETER

  nsUrlClassifierHashCompleter();

private:
  ~nsUrlClassifierHashCompleter();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsUrlClassifierHashCompleter, nsIUrlClassifierHashCompleter)

nsUrlClassifierHashCompleter::nsUrlClassifierHashCompleter()
{
  /* member initializers and constructor code */
}

nsUrlClassifierHashCompleter::~nsUrlClassifierHashCompleter()
{
  /* destructor code */
}

/* void complete (in ACString partialHash, in nsIUrlClassifierHashCompleterCallback callback); */
NS_IMETHODIMP nsUrlClassifierHashCompleter::Complete(const nsACString & partialHash, nsIUrlClassifierHashCompleterCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setKeys (in ACString clientKey, in ACString wrappedKey); */
NS_IMETHODIMP nsUrlClassifierHashCompleter::SetKeys(const nsACString & clientKey, const nsACString & wrappedKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ACString gethashUrl; */
NS_IMETHODIMP nsUrlClassifierHashCompleter::GetGethashUrl(nsACString & aGethashUrl)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsUrlClassifierHashCompleter::SetGethashUrl(const nsACString & aGethashUrl)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIUrlClassifierHashCompleter_h__ */
