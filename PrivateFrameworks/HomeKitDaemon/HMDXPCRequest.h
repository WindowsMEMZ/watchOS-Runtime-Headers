//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDXPCRequest_h
#define HMDXPCRequest_h
@import Foundation;

#include "HMFObject.h"

@class NSDate, NSString;

@interface HMDXPCRequest : HMFObject

@property (readonly, copy) NSString *name;
@property (readonly) long long qualityOfService;
@property (readonly, copy) NSDate *timeoutDate;
@property (readonly, copy) id /* block */ responseHandler;

/* instance methods */
- (id)initWithName:(id)name qualityOfService:(long long)service timeoutDate:(id)date responseHandler:(id /* block */)handler;
@end

#endif /* HMDXPCRequest_h */
