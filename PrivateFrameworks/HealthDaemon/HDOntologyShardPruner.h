//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDOntologyShardPruner_h
#define HDOntologyShardPruner_h
@import Foundation;

#include "HDCacheDeleteProvider-Protocol.h"
#include "HDOntologyUpdateCoordinator.h"

@class NSString;

@interface HDOntologyShardPruner : NSObject<HDCacheDeleteProvider>

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithOntologyUpdateCoordinator:(id)coordinator;
- (BOOL)pruneOntologyWithOptions:(unsigned long long)options error:(id *)error;
- (long long)purgeableSpaceForUrgency:(int)urgency volume:(id)volume;
- (long long)purgeSpaceForUrgency:(int)urgency volume:(id)volume;
@end

#endif /* HDOntologyShardPruner_h */
