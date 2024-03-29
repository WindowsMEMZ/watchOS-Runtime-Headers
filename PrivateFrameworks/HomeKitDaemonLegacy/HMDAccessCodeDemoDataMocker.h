//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAccessCodeDemoDataMocker_h
#define HMDAccessCodeDemoDataMocker_h
@import Foundation;

#include "HMFObject.h"
#include "HMFLogging-Protocol.h"

@class NSMutableDictionary, NSString;

@interface HMDAccessCodeDemoDataMocker : HMFObject<HMFLogging>

@property (readonly) NSMutableDictionary *accessCodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)init;
- (id)handleWriteRequests:(id)requests;
- (id)handleReadRequests:(id)requests;
- (id)_controlResponseForReadRequest:(id)request;
- (id)_controlResponseForWriteRequest:(id)request;
- (id)_handleListRequest;
- (id)_handleReadRequest:(id)request;
- (id)_handleAddRequest:(id)request;
- (id)_handleUpdateRequest:(id)request;
- (id)_handleRemoveRequest:(id)request;
@end

#endif /* HMDAccessCodeDemoDataMocker_h */
