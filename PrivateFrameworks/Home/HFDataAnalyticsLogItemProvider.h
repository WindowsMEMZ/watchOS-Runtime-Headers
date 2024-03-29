//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFDataAnalyticsLogItemProvider_h
#define HFDataAnalyticsLogItemProvider_h
@import Foundation;

#include "HFItemProvider.h"
#include "HFMediaProfileContainer-Protocol.h"
#include "NSCopying-Protocol.h"

@class NAFuture, NSMapTable, NSMutableSet;

@interface HFDataAnalyticsLogItemProvider : HFItemProvider<NSCopying>

@property (readonly, nonatomic) NSMutableSet *logItems;
@property (readonly, nonatomic) NSMapTable *logEntryUniqueIdentifierToLogItemMap;
@property (retain, nonatomic) NAFuture *logFetchFuture;
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer;

/* class methods */
+ (BOOL)prefersNonBlockingReloads;

/* instance methods */
- (id)initWithMediaProfileContainer:(id)container;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
@end

#endif /* HFDataAnalyticsLogItemProvider_h */
