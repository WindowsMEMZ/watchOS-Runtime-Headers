//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDDataStreamBulkSendOpenSessionResult_h
#define HMDDataStreamBulkSendOpenSessionResult_h
@import Foundation;

#include "HMDDataStreamBulkSendSession-Protocol.h"

@class NSDictionary;

@interface HMDDataStreamBulkSendOpenSessionResult : NSObject

@property (readonly, nonatomic) NSObject<HMDDataStreamBulkSendSession> *session;
@property (readonly, nonatomic) NSDictionary *payload;

/* instance methods */
- (id)initWithSession:(id)session payload:(id)payload;
- (id)attributeDescriptions;
@end

#endif /* HMDDataStreamBulkSendOpenSessionResult_h */
