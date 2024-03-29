//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFFetchedHomeKitObjectItem_h
#define HFFetchedHomeKitObjectItem_h
@import Foundation;

#include "HFItem.h"
#include "HFHomeKitItemProtocol-Protocol.h"
#include "HFHomeKitObject-Protocol.h"

@class NSString;

@interface HFFetchedHomeKitObjectItem : HFItem<HFHomeKitItemProtocol>

@property (retain, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)alwaysPerformFullFetch;

/* instance methods */
- (id)_subclass_updateWithOptions:(id)options;
- (id)initWithHomeKitObject:(id)object;
- (id)_homeKitObjectFetch;
@end

#endif /* HFFetchedHomeKitObjectItem_h */
