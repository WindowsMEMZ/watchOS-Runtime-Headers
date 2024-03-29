//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKWebServiceResponse_h
#define PKWebServiceResponse_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSDictionary;

@interface PKWebServiceResponse : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSData *rawData;
@property (readonly, nonatomic) id JSONObject;
@property (readonly, nonatomic) NSDictionary *headers;

/* class methods */
+ (id)responseWithData:(id)data;
+ (id)responseWithData:(id)data headers:(id)headers;
+ (BOOL)jsonDataOptional;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithData:(id)data;
- (id)initWithData:(id)data headers:(id)headers;
- (id)debugDescription;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKWebServiceResponse_h */
