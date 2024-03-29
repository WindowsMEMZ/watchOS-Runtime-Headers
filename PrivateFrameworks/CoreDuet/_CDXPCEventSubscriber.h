//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDXPCEventSubscriber_h
#define _CDXPCEventSubscriber_h
@import Foundation;

@class NSString;
@protocol OS_xpc_object;

@interface _CDXPCEventSubscriber : NSObject

@property (readonly, nonatomic) unsigned long long token;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *descriptor;
@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) NSString *streamName;
@property (readonly, nonatomic) NSString *clientIdentifier;

/* instance methods */
- (id)initWithToken:(unsigned long long)token descriptor:(id)descriptor userID:(unsigned int)id streamName:(id)name;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* _CDXPCEventSubscriber_h */
