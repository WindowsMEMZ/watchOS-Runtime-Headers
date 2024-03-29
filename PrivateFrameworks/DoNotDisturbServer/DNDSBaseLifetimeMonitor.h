//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSBaseLifetimeMonitor_h
#define DNDSBaseLifetimeMonitor_h
@import Foundation;

#include "DNDSLifetimeMonitor-Protocol.h"
#include "DNDSLifetimeMonitorDataSource-Protocol.h"
#include "DNDSLifetimeMonitorDelegate-Protocol.h"
#include "DNDSSysdiagnoseDataProvider-Protocol.h"

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface DNDSBaseLifetimeMonitor : NSObject<DNDSSysdiagnoseDataProvider, DNDSLifetimeMonitor>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, @dynamic, nonatomic) NSString *sysdiagnoseDataIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
@property (weak, nonatomic) NSObject<DNDSLifetimeMonitorDataSource> *dataSource;
@property (weak, nonatomic) NSObject<DNDSLifetimeMonitorDelegate> *delegate;

/* class methods */
+ (Class)lifetimeClass;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)updateForModeAssertions:(id)assertions date:(id)date;
- (void)refreshMonitorForDate:(id)date;
- (void)refreshMonitorFromQueueForDate:(id)date;
- (id)sysdiagnoseDataForDate:(id)date redacted:(BOOL)redacted;
@end

#endif /* DNDSBaseLifetimeMonitor_h */
