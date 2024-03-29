//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EMHMERecipientCreationResponse_h
#define EMHMERecipientCreationResponse_h
@import Foundation;

#include "AAResponse.h"

@class NSString;

@interface EMHMERecipientCreationResponse : AAResponse

@property (copy, nonatomic) NSString *replyToAddress;

/* class methods */
+ (id)log;

/* instance methods */
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;
@end

#endif /* EMHMERecipientCreationResponse_h */
