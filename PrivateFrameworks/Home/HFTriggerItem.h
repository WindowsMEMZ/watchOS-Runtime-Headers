//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFTriggerItem_h
#define HFTriggerItem_h
@import Foundation;

#include "HFItem.h"
#include "HFHomeKitItemProtocol-Protocol.h"
#include "HFHomeKitObject-Protocol.h"
#include "HFServiceActionItemProvider.h"

@class HMHome, HMTrigger, NSString;

@interface HFTriggerItem : HFItem<HFHomeKitItemProtocol>

@property (retain, nonatomic) HFServiceActionItemProvider *serviceActionItemProvider;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMTrigger *trigger;
@property (nonatomic) BOOL usesRichIconDescriptors;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHome:(id)home trigger:(id)trigger;
- (id)init;
- (id)_subclass_updateWithOptions:(id)options;
- (id)createRichIconDescriptors:(id)descriptors options:(id)options;
- (id)translateToRichIconDescriptors:(id)descriptors basedOnActionItems:(id)items;
@end

#endif /* HFTriggerItem_h */
