//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 756.0.0.0.0
//
#ifndef SLTudouService_h
#define SLTudouService_h
@import Foundation;

#include "SLService.h"

@interface SLTudouService : SLService
/* instance methods */
- (id)serviceType;
- (id)accountTypeIdentifier;
- (long long)authenticationStyle;
- (BOOL)isFirstClassService;
@end

#endif /* SLTudouService_h */
