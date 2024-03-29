//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef GlobeLineContainerDelegate_h
#define GlobeLineContainerDelegate_h
@import Foundation;

#include "VKGlobeLineContainerDelegate-Protocol.h"

@class NSString;

@interface GlobeLineContainerDelegate : NSObject<VKGlobeLineContainerDelegate> {
  /* instance variables */
  void * _renderer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRenderer:(void *)renderer;
- (void)lineContainerNeedsDisplay:(id)display;
@end

#endif /* GlobeLineContainerDelegate_h */
