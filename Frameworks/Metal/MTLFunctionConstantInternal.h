//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLFunctionConstantInternal_h
#define MTLFunctionConstantInternal_h
@import Foundation;

#include ".h"

@class NSString;

@interface MTLFunctionConstantInternal :  {
  /* instance variables */
  NSString *_name;
  unsigned long long _type;
  unsigned long long _index;
  BOOL _required;
}

/* instance methods */
- (id)initWithName:(id)name type:(unsigned long long)type index:(unsigned long long)index required:(BOOL)required;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)description;
- (id)description;
- (id)name;
- (unsigned long long)type;
- (unsigned long long)index;
- (BOOL)required;
@end

#endif /* MTLFunctionConstantInternal_h */
