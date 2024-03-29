//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef DOMHTMLObjectElement_h
#define DOMHTMLObjectElement_h
@import Foundation;

#include "DOMHTMLElement.h"
#include "DOMDocument.h"
#include "DOMHTMLFormElement.h"
#include "WebFrame.h"

@class NSString, NSURL;

@interface DOMHTMLObjectElement : DOMHTMLElement

@property (readonly, nonatomic) WebFrame *contentFrame;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *code;
@property (copy) NSString *align;
@property (copy) NSString *archive;
@property (copy) NSString *border;
@property (copy) NSString *codeBase;
@property (copy) NSString *codeType;
@property (copy) NSString *data;
@property BOOL declare;
@property (copy) NSString *height;
@property int hspace;
@property (copy) NSString *name;
@property (copy) NSString *standby;
@property (copy) NSString *type;
@property (copy) NSString *useMap;
@property int vspace;
@property (copy) NSString *width;
@property (readonly) DOMDocument *contentDocument;
@property (readonly, copy) NSURL *absoluteImageURL;

@end

#endif /* DOMHTMLObjectElement_h */
