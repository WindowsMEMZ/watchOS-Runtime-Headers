//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSInvitationContext_Protocol_h
#define IDSInvitationContext_Protocol_h
@import Foundation;

@protocol IDSInvitationContext <NSObject, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *schemaIdentifier;
@property (readonly, nonatomic) long long contextType;

/* instance methods */
- (id)initWithPayload:(id)payload;
- (id)payload;
@end

#endif /* IDSInvitationContext_Protocol_h */
