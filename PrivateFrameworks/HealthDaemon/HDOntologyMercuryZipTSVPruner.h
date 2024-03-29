//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDOntologyMercuryZipTSVPruner_h
#define HDOntologyMercuryZipTSVPruner_h
@import Foundation;

#include "HDOntologyUpdateCoordinator.h"

@interface HDOntologyMercuryZipTSVPruner : NSObject

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;

/* instance methods */
- (id)init;
- (id)initWithOntologyUpdateCoordinator:(id)coordinator;
- (long long)pruneEntries:(id)entries options:(unsigned long long)options error:(id *)error;
@end

#endif /* HDOntologyMercuryZipTSVPruner_h */
