//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 267.0.0.0.0
//
#ifndef _SYDeferredIncomingSession_h
#define _SYDeferredIncomingSession_h
@import Foundation;

@class IDSMessageContext, NSDictionary, NSString, NSURL;

@interface _SYDeferredIncomingSession : NSObject

@property (copy, nonatomic) NSURL *resourceURL;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) IDSMessageContext *idsContext;

/* instance methods */
@end

#endif /* _SYDeferredIncomingSession_h */
