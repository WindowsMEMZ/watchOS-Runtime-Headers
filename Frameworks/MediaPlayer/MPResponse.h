//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPResponse_h
#define MPResponse_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@class NSArray, NSString;

@interface MPResponse : NSObject<NSCopying, NSObject>

@property (copy, nonatomic) NSArray *middleware;
@property (readonly, nonatomic) id builder;
@property (readonly, copy, nonatomic) id request;
@property (readonly, nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)builderProtocol;

/* instance methods */
- (id)initWithRequest:(id)request middleware:(id)middleware;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)invalidate;
- (id)chain;
- (id)_stateDumpObject;
- (BOOL)isValid;
@end

#endif /* MPResponse_h */
