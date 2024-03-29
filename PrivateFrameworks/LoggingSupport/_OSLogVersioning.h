//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1481.40.16.0.0
//
#ifndef _OSLogVersioning_h
#define _OSLogVersioning_h
@import Foundation;

#include "_OSLogCollectionReference.h"

@class BOOL *;

@interface _OSLogVersioning : NSObject {
  /* instance variables */
  _OSLogCollectionReference *_lcr;
  BOOL _closeOnRelease;
}

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL hasEndTimeRef;
@property (readonly, nonatomic) long long version;

/* instance methods */
- (id)initWithCollection:(id)collection closeOnRelease:(BOOL)release error:(id *)error;
- (id)initWithCollection:(id)collection error:(id *)error;
- (id)initWithURL:(id)url error:(id *)error;
- (void)dealloc;
- (BOOL)performDestructiveUpdates:(id *)updates;
- (BOOL)checkTimesyncDB:(BOOL *)db error:(id *)error;
- (BOOL)repairTimesyncDB:(id *)db;
@end

#endif /* _OSLogVersioning_h */
