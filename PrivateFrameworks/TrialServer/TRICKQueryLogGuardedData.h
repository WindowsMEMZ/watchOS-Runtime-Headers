//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRICKQueryLogGuardedData_h
#define TRICKQueryLogGuardedData_h
@import Foundation;

@class NSFileHandle, NSMutableSet;

@interface TRICKQueryLogGuardedData : NSObject {
  /* instance variables */
  BOOL failed;
  NSMutableSet *uniqueLines;
  NSFileHandle *fh;
}

/* instance methods */
@end

#endif /* TRICKQueryLogGuardedData_h */
