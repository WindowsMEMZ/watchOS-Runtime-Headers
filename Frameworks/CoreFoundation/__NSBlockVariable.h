//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef __NSBlockVariable_h
#define __NSBlockVariable_h
@import Foundation;

@interface __NSBlockVariable : NSObject {
  /* instance variables */
  struct Block_byref { void * x0; struct Block_byref * x1; int x2; unsigned int x3; } * forwarding;
  int flags;
  int size;
  undefined * byref_keep;
  undefined * byref_destroy;
  id containedObject;
}

@end

#endif /* __NSBlockVariable_h */
