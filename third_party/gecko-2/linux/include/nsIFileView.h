/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /builds/slave/rel-2.0-xr-lnx-bld/build/toolkit/components/filepicker/public/nsIFileView.idl
 */

#ifndef __gen_nsIFileView_h__
#define __gen_nsIFileView_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIArray; /* forward declaration */

class nsIFile; /* forward declaration */


/* starting interface:    nsIFileView */
#define NS_IFILEVIEW_IID_STR "60b320d2-1dd2-11b2-bd73-dc3575f78ddd"

#define NS_IFILEVIEW_IID \
  {0x60b320d2, 0x1dd2, 0x11b2, \
    { 0xbd, 0x73, 0xdc, 0x35, 0x75, 0xf7, 0x8d, 0xdd }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIFileView : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFILEVIEW_IID)

  enum { sortName = 0 };

  enum { sortSize = 1 };

  enum { sortDate = 2 };

  /* attribute boolean showHiddenFiles; */
  NS_SCRIPTABLE NS_IMETHOD GetShowHiddenFiles(PRBool *aShowHiddenFiles) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetShowHiddenFiles(PRBool aShowHiddenFiles) = 0;

  /* attribute boolean showOnlyDirectories; */
  NS_SCRIPTABLE NS_IMETHOD GetShowOnlyDirectories(PRBool *aShowOnlyDirectories) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetShowOnlyDirectories(PRBool aShowOnlyDirectories) = 0;

  /* readonly attribute short sortType; */
  NS_SCRIPTABLE NS_IMETHOD GetSortType(PRInt16 *aSortType) = 0;

  /* readonly attribute boolean reverseSort; */
  NS_SCRIPTABLE NS_IMETHOD GetReverseSort(PRBool *aReverseSort) = 0;

  /* void sort (in short sortType, in boolean reverseSort); */
  NS_SCRIPTABLE NS_IMETHOD Sort(PRInt16 sortType, PRBool reverseSort) = 0;

  /* void setDirectory (in nsIFile directory); */
  NS_SCRIPTABLE NS_IMETHOD SetDirectory(nsIFile *directory) = 0;

  /* void setFilter (in AString filterString); */
  NS_SCRIPTABLE NS_IMETHOD SetFilter(const nsAString & filterString) = 0;

  /* readonly attribute nsIArray selectedFiles; */
  NS_SCRIPTABLE NS_IMETHOD GetSelectedFiles(nsIArray **aSelectedFiles) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFileView, NS_IFILEVIEW_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFILEVIEW \
  NS_SCRIPTABLE NS_IMETHOD GetShowHiddenFiles(PRBool *aShowHiddenFiles); \
  NS_SCRIPTABLE NS_IMETHOD SetShowHiddenFiles(PRBool aShowHiddenFiles); \
  NS_SCRIPTABLE NS_IMETHOD GetShowOnlyDirectories(PRBool *aShowOnlyDirectories); \
  NS_SCRIPTABLE NS_IMETHOD SetShowOnlyDirectories(PRBool aShowOnlyDirectories); \
  NS_SCRIPTABLE NS_IMETHOD GetSortType(PRInt16 *aSortType); \
  NS_SCRIPTABLE NS_IMETHOD GetReverseSort(PRBool *aReverseSort); \
  NS_SCRIPTABLE NS_IMETHOD Sort(PRInt16 sortType, PRBool reverseSort); \
  NS_SCRIPTABLE NS_IMETHOD SetDirectory(nsIFile *directory); \
  NS_SCRIPTABLE NS_IMETHOD SetFilter(const nsAString & filterString); \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedFiles(nsIArray **aSelectedFiles); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFILEVIEW(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetShowHiddenFiles(PRBool *aShowHiddenFiles) { return _to GetShowHiddenFiles(aShowHiddenFiles); } \
  NS_SCRIPTABLE NS_IMETHOD SetShowHiddenFiles(PRBool aShowHiddenFiles) { return _to SetShowHiddenFiles(aShowHiddenFiles); } \
  NS_SCRIPTABLE NS_IMETHOD GetShowOnlyDirectories(PRBool *aShowOnlyDirectories) { return _to GetShowOnlyDirectories(aShowOnlyDirectories); } \
  NS_SCRIPTABLE NS_IMETHOD SetShowOnlyDirectories(PRBool aShowOnlyDirectories) { return _to SetShowOnlyDirectories(aShowOnlyDirectories); } \
  NS_SCRIPTABLE NS_IMETHOD GetSortType(PRInt16 *aSortType) { return _to GetSortType(aSortType); } \
  NS_SCRIPTABLE NS_IMETHOD GetReverseSort(PRBool *aReverseSort) { return _to GetReverseSort(aReverseSort); } \
  NS_SCRIPTABLE NS_IMETHOD Sort(PRInt16 sortType, PRBool reverseSort) { return _to Sort(sortType, reverseSort); } \
  NS_SCRIPTABLE NS_IMETHOD SetDirectory(nsIFile *directory) { return _to SetDirectory(directory); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilter(const nsAString & filterString) { return _to SetFilter(filterString); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedFiles(nsIArray **aSelectedFiles) { return _to GetSelectedFiles(aSelectedFiles); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFILEVIEW(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetShowHiddenFiles(PRBool *aShowHiddenFiles) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShowHiddenFiles(aShowHiddenFiles); } \
  NS_SCRIPTABLE NS_IMETHOD SetShowHiddenFiles(PRBool aShowHiddenFiles) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetShowHiddenFiles(aShowHiddenFiles); } \
  NS_SCRIPTABLE NS_IMETHOD GetShowOnlyDirectories(PRBool *aShowOnlyDirectories) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShowOnlyDirectories(aShowOnlyDirectories); } \
  NS_SCRIPTABLE NS_IMETHOD SetShowOnlyDirectories(PRBool aShowOnlyDirectories) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetShowOnlyDirectories(aShowOnlyDirectories); } \
  NS_SCRIPTABLE NS_IMETHOD GetSortType(PRInt16 *aSortType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSortType(aSortType); } \
  NS_SCRIPTABLE NS_IMETHOD GetReverseSort(PRBool *aReverseSort) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReverseSort(aReverseSort); } \
  NS_SCRIPTABLE NS_IMETHOD Sort(PRInt16 sortType, PRBool reverseSort) { return !_to ? NS_ERROR_NULL_POINTER : _to->Sort(sortType, reverseSort); } \
  NS_SCRIPTABLE NS_IMETHOD SetDirectory(nsIFile *directory) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDirectory(directory); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilter(const nsAString & filterString) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFilter(filterString); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectedFiles(nsIArray **aSelectedFiles) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectedFiles(aSelectedFiles); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFileView : public nsIFileView
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFILEVIEW

  nsFileView();

private:
  ~nsFileView();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsFileView, nsIFileView)

nsFileView::nsFileView()
{
  /* member initializers and constructor code */
}

nsFileView::~nsFileView()
{
  /* destructor code */
}

/* attribute boolean showHiddenFiles; */
NS_IMETHODIMP nsFileView::GetShowHiddenFiles(PRBool *aShowHiddenFiles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFileView::SetShowHiddenFiles(PRBool aShowHiddenFiles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean showOnlyDirectories; */
NS_IMETHODIMP nsFileView::GetShowOnlyDirectories(PRBool *aShowOnlyDirectories)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFileView::SetShowOnlyDirectories(PRBool aShowOnlyDirectories)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute short sortType; */
NS_IMETHODIMP nsFileView::GetSortType(PRInt16 *aSortType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean reverseSort; */
NS_IMETHODIMP nsFileView::GetReverseSort(PRBool *aReverseSort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sort (in short sortType, in boolean reverseSort); */
NS_IMETHODIMP nsFileView::Sort(PRInt16 sortType, PRBool reverseSort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setDirectory (in nsIFile directory); */
NS_IMETHODIMP nsFileView::SetDirectory(nsIFile *directory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFilter (in AString filterString); */
NS_IMETHODIMP nsFileView::SetFilter(const nsAString & filterString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIArray selectedFiles; */
NS_IMETHODIMP nsFileView::GetSelectedFiles(nsIArray **aSelectedFiles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_FILEVIEW_CONTRACTID "@mozilla.org/filepicker/fileview;1"

#endif /* __gen_nsIFileView_h__ */
