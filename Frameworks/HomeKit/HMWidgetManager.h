//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMWidgetManager_h
#define HMWidgetManager_h
@import Foundation;

#include "HMFLogging-Protocol.h"
#include "HMHomeManager.h"
#include "_HMContext.h"

@class NSString;

@interface HMWidgetManager : NSObject<HMFLogging>

@property (readonly, weak) HMHomeManager *homeManager;
@property (readonly) _HMContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithHomeManager:(id)manager context:(id)context;
- (void)monitorAndFetchStateForCharacteristics:(id)characteristics widgetIdentifier:(id)identifier kind:(id)kind completion:(id /* block */)completion;
- (void)fetchStateForCharacteristics:(id)characteristics completion:(id /* block */)completion;
- (void)performRequests:(id)requests forKind:(id)kind completion:(id /* block */)completion;
- (void)monitorAndFetchStateForActionSets:(id)sets widgetIdentifier:(id)identifier kind:(id)kind completion:(id /* block */)completion;
- (void)fetchStateForActionSets:(id)sets completion:(id /* block */)completion;
@end

#endif /* HMWidgetManager_h */
