//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef DOMNodeFilter_h
#define DOMNodeFilter_h
@import Foundation;

#include "DOMObject.h"
#include "DOMNodeFilter-Protocol.h"

@class NSString;

@interface DOMNodeFilter : DOMObject<DOMNodeFilter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (short)acceptNode:(id)node;
@end

#endif /* DOMNodeFilter_h */
