//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef _NSCoreDataException_h
#define _NSCoreDataException_h
@import Foundation;

#include "NSException.h"

@class NSString;

@interface _NSCoreDataException : NSException {
  /* instance variables */
  long long _code;
  NSString *_domain;
}

/* instance methods */
- (id)initWithName:(id)name reason:(id)reason userInfo:(id)info;
- (void)dealloc;
- (id)errorObjectWithUserInfo:(id)info;
@end

#endif /* _NSCoreDataException_h */
