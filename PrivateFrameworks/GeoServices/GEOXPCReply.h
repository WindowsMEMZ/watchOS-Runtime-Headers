//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOXPCReply_h
#define GEOXPCReply_h
@import Foundation;

#include "GEOXPCSerializable-Protocol.h"

@class NSError, NSString;
@protocol OS_xpc_object;

@interface GEOXPCReply : NSObject<GEOXPCSerializable>

@property (retain, nonatomic) NSObject<OS_xpc_object> *object;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *replyDictionary;
@property (readonly, nonatomic) unsigned char flags;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithRequest:(id)request;
- (id)initWithReplyObject:(id)object;
- (id)initWithXPCDictionary:(id)xpcdictionary error:(id *)error;
- (void)encodeToXPCDictionary:(id)xpcdictionary;
- (void)send;
@end

#endif /* GEOXPCReply_h */
