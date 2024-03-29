//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKServerRequestConfiguration_h
#define AKServerRequestConfiguration_h
@import Foundation;

#include "AKAppleIDServerResourceLoadDelegate.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSURLRequest;

@interface AKServerRequestConfiguration : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) AKAppleIDServerResourceLoadDelegate *resourceLoadDelegate;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) unsigned long long presentationType;
@property (copy, nonatomic) NSArray *whitelistedPathURLs;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithRequest:(id)request requestType:(unsigned long long)type;
- (id)description;
@end

#endif /* AKServerRequestConfiguration_h */
