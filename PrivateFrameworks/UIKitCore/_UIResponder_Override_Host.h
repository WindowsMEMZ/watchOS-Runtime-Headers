//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIResponder_Override_Host_h
#define _UIResponder_Override_Host_h
@import Foundation;

#include "UIResponder.h"

@class NSMutableArray;

@interface _UIResponder_Override_Host : NSObject {
  /* instance variables */
  NSMutableArray *_overrides;
}

@property (readonly, weak, nonatomic) UIResponder *owner;

/* class methods */
+ (id)hostForResponder:(id)responder;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)attachOverrider:(id)overrider forTypes:(long long)types;
- (void)detachOverrider:(id)overrider forTypes:(long long)types;
- (long long)typesForResponder:(id)responder;
- (id)description;
@end

#endif /* _UIResponder_Override_Host_h */
