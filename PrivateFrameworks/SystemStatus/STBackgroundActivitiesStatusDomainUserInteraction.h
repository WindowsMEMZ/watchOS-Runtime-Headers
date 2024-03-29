//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STBackgroundActivitiesStatusDomainUserInteraction_h
#define STBackgroundActivitiesStatusDomainUserInteraction_h
@import Foundation;

#include "STBackgroundActivitiesStatusDomainData.h"
#include "STStatusDomainUserInteraction-Protocol.h"

@class NSString;

@interface STBackgroundActivitiesStatusDomainUserInteraction : STBackgroundActivitiesStatusDomainData<STStatusDomainUserInteraction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithData:(id)data;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* STBackgroundActivitiesStatusDomainUserInteraction_h */
