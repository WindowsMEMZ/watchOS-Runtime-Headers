//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 16.0.0.0.0
//
#ifndef CNMetricsReporter_h
#define CNMetricsReporter_h
@import Foundation;

#include "CNMetricsReporter-Protocol.h"

@class NSString;

@interface CNMetricsReporter : NSObject<CNMetricsReporter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;
+ (void)sendDictionary:(id)dictionary forEvent:(id)event;
+ (void)sendDictionary:(id)dictionary forEvent:(id)event andLog:(BOOL)log;
+ (void)logDatabaseResolution:(id)resolution;

/* instance methods */
- (void)sendDictionary:(id)dictionary forEvent:(id)event andLog:(BOOL)log;
- (void)logSimpleEvent:(id)event forApplication:(id)application andLog:(BOOL)log;
- (id)eventKeyPrefix;
- (id)compoundKeyForEvent:(id)event;
@end

#endif /* CNMetricsReporter_h */
