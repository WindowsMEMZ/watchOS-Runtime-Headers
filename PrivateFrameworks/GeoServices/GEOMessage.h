//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMessage_h
#define GEOMessage_h
@import Foundation;

#include "GEOApplicationAuditToken.h"
#include "GEODataRequestThrottlerToken.h"
#include "GEOPeer.h"

@class NSDictionary, NSString;
@protocol OS_xpc_object;

@interface GEOMessage : NSObject {
  /* instance variables */
  NSObject<OS_xpc_object> *_xpcMessage;
}

@property (readonly, nonatomic) NSString *messageName;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) GEOPeer *peer;
@property (readonly, nonatomic) GEOApplicationAuditToken *preferredAuditToken;
@property (readonly, nonatomic) GEODataRequestThrottlerToken *throttleToken;

/* instance methods */
- (id)init;
- (id)initWithXPCMessage:(id)xpcmessage peer:(id)peer;
- (void)sendReply:(id)reply;
- (void)sendReplyWithXPCUserInfo:(id)info;
@end

#endif /* GEOMessage_h */
