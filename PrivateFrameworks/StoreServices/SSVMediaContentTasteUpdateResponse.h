//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVMediaContentTasteUpdateResponse_h
#define SSVMediaContentTasteUpdateResponse_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "SSXPCCoding-Protocol.h"

@class NSArray, NSDate, NSString;

@interface SSVMediaContentTasteUpdateResponse : NSObject<SSXPCCoding, NSSecureCoding>

@property (copy, nonatomic) NSArray *contentTasteItems;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned long long responseRevisionID;
@property (nonatomic) BOOL cachedResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)xpcencoding;
- (BOOL)isCachedResponse;
@end

#endif /* SSVMediaContentTasteUpdateResponse_h */
