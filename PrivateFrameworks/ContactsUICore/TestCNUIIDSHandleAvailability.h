//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef TestCNUIIDSHandleAvailability_h
#define TestCNUIIDSHandleAvailability_h
@import Foundation;

#include "CNUIIDSHandle-Protocol.h"
#include "CNUIIDSHandleAvailability-Protocol.h"

@class NSString;

@interface TestCNUIIDSHandleAvailability : NSObject<CNUIIDSHandleAvailability>

@property (retain, nonatomic) NSObject<CNUIIDSHandle> *handle;
@property (nonatomic) BOOL available;
@property (readonly, nonatomic) BOOL isAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHandle:(id)handle availability:(BOOL)availability;
- (BOOL)isEqual:(id)equal;
@end

#endif /* TestCNUIIDSHandleAvailability_h */
