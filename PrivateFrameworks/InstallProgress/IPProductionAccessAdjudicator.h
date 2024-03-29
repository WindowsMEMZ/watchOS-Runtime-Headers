//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 8.0.0.0.0
//
#ifndef IPProductionAccessAdjudicator_h
#define IPProductionAccessAdjudicator_h
@import Foundation;

#include "IPAccessAdjudicator-Protocol.h"

@class NSString;

@interface IPProductionAccessAdjudicator : NSObject<IPAccessAdjudicator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)progressServer:(id)server shouldAcceptConnection:(id)connection;
@end

#endif /* IPProductionAccessAdjudicator_h */
