//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMMentionResolverRequestCommand_h
#define CDMMentionResolverRequestCommand_h
@import Foundation;

#include "CDMBaseCommand.h"

@class SIRINLUINTERNALMENTION_RESOLVERMentionResolverRequest;

@interface CDMMentionResolverRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALMENTION_RESOLVERMentionResolverRequest *mrRequest;

/* instance methods */
- (id)initWithMRRequest:(id)mrrequest;
- (id)description;
@end

#endif /* CDMMentionResolverRequestCommand_h */
