//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSSQLiteIndexStatisticsResult_h
#define NSSQLiteIndexStatisticsResult_h
@import Foundation;

#include "NSPersistentStoreResult.h"

@interface NSSQLiteIndexStatisticsResult : NSPersistentStoreResult

@property (readonly) id result;

/* instance methods */
- (id)initWithResult:(id)result;
- (id)initWithSubresults:(id)subresults;
- (void)dealloc;
@end

#endif /* NSSQLiteIndexStatisticsResult_h */
