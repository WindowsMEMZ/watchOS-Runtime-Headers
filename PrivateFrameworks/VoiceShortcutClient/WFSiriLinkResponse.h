//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSiriLinkResponse_h
#define WFSiriLinkResponse_h
@import Foundation;

#include "WFSiriActionResponse.h"

@class LNActionOutput;

@interface WFSiriLinkResponse : WFSiriActionResponse

@property (readonly, nonatomic) LNActionOutput *actionOutput;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithOutput:(id)output andError:(id)error;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WFSiriLinkResponse_h */
