//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNContainerUpdate_Protocol_h
#define CNContainerUpdate_Protocol_h
@import Foundation;

#include "CNContainerPropertyDescription.h"
#include "CNContainerUpdate-Protocol.h"

@class NSString;

@protocol CNContainerUpdate <NSObject>
/* instance methods */
- (id)property;
- (id)value;
- (void)applyToMutableContainer:(id)container;
@end

#endif /* CNContainerUpdate_Protocol_h */
