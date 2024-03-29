//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKDOMElement_h
#define WKDOMElement_h
@import Foundation;

#include "WKDOMNode.h"

@class NSString;

@interface WKDOMElement : WKDOMNode

@property (readonly) NSString *tagName;

/* instance methods */
- (BOOL)hasAttribute:(id)attribute;
- (id)getAttribute:(id)attribute;
- (void)setAttribute:(id)attribute value:(id)value;
@end

#endif /* WKDOMElement_h */
