//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 140.0.0.0.0
//
#ifndef MOSettingsPublisherBase_h
#define MOSettingsPublisherBase_h
@import Foundation;

#include "MOPublisher.h"
#include "MOPublisher.h"

@class NSSet;

@interface MOSettingsPublisherBase : MOPublisher

@property (readonly, nonatomic) MOPublisher *upstream;
@property (readonly, nonatomic) NSSet *interestedGroups;
@property (readonly, nonatomic) id /* block */ startBlock;
@property (readonly, nonatomic) id /* block */ stopBlock;

/* instance methods */
- (id)initWithUpstream:(id)upstream interestedGroups:(id)groups startBlock:(id /* block */)block stopBlock:(id /* block */)block;
- (void)subscribe:(id)subscribe;
@end

#endif /* MOSettingsPublisherBase_h */
