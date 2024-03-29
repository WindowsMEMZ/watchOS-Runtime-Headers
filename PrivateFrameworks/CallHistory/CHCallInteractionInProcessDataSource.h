//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1222.300.51.0.0
//
#ifndef CHCallInteractionInProcessDataSource_h
#define CHCallInteractionInProcessDataSource_h
@import Foundation;

#include "CHCallInteractionDataSource-Protocol.h"
#include "CHCallInteractionDataSourceDelegate-Protocol.h"
#include "CHNotifyObserver.h"

@class NSString;

@interface CHCallInteractionInProcessDataSource : NSObject<CHCallInteractionDataSource>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } accessorLock;
@property (readonly, nonatomic) CHNotifyObserver *callInteractionObserver;
@property (retain, nonatomic) NSObject<CHCallInteractionDataSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
@end

#endif /* CHCallInteractionInProcessDataSource_h */
