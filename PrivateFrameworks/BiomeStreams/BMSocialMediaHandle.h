//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMSocialMediaHandle_h
#define BMSocialMediaHandle_h
@import Foundation;

#include "BMProtoBufWrapper-Protocol.h"

@class NSString;

@interface BMSocialMediaHandle : NSObject<BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *handle;

/* instance methods */
- (id)initWithBundleId:(id)id handle:(id)handle;
- (BOOL)isEqual:(id)equal;
- (id)encodeAsProto;
- (id)initWithProto:(id)proto;
- (id)initWithProtoData:(id)data;
- (id)proto;
@end

#endif /* BMSocialMediaHandle_h */
