//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSFilePresenterOperationRecord_h
#define NSFilePresenterOperationRecord_h
@import Foundation;

#include "NSString.h"

@interface NSFilePresenterOperationRecord : NSObject {
  /* instance variables */
  NSString *reactorID;
}

@property (readonly) NSString *operationDescription;
@property (readonly) long long state;
@property (readonly, weak) id reactor;

/* class methods */
+ (id)operationRecordWithDescription:(id)description reactor:(id)reactor;

/* instance methods */
- (void)dealloc;
- (void)didBegin;
- (void)willEnd;
- (void)didEnd;
- (id)_reactorQueue;
- (id)description;
@end

#endif /* NSFilePresenterOperationRecord_h */
