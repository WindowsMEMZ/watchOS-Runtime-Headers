//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentPerformResponse_h
#define PKPeerPaymentPerformResponse_h
@import Foundation;

#include "PKPeerPaymentStatusResponse.h"

@class NSUUID;

@interface PKPeerPaymentPerformResponse : PKPeerPaymentStatusResponse

@property (readonly, copy, nonatomic) NSUUID *deviceScoreIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithData:(id)data;
- (id)initWithData:(id)data deviceScoreIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKPeerPaymentPerformResponse_h */
