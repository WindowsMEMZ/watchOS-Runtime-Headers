//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDBatchLocationContext_h
#define HMDBatchLocationContext_h
@import Foundation;

#include "HMDBatchLocationDelegate-Protocol.h"

@class HMFTimer, NSDate, NSMutableArray;

@interface HMDBatchLocationContext : NSObject

@property (weak) NSObject<HMDBatchLocationDelegate> *delegate;
@property (readonly) NSMutableArray *tuples;
@property (readonly) HMFTimer *timer;
@property (readonly, copy) NSDate *startDate;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
@end

#endif /* HMDBatchLocationContext_h */
