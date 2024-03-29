//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef _NSKeyedUnarchiverHelper_h
#define _NSKeyedUnarchiverHelper_h
@import Foundation;

#include "NSError.h"

@class NSArray, NSMutableArray;

@interface _NSKeyedUnarchiverHelper : NSObject {
  /* instance variables */
  NSArray *_allowed;
  unsigned int _lastRef;
  NSMutableArray *_allowedClasses;
  BOOL expectsUnnestedCollection;
  BOOL decodedCollection;
}

@property (copy) NSError *decodeError;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)allowedClassNames;
- (void)setAllowedClassNames:(id)names;
- (BOOL)classNameAllowed:(Class)allowed;
@end

#endif /* _NSKeyedUnarchiverHelper_h */
