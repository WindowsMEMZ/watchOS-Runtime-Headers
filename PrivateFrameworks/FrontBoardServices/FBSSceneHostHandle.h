//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSSceneHostHandle_h
#define FBSSceneHostHandle_h
@import Foundation;

@class BSAuditToken;

@interface FBSSceneHostHandle : NSObject

@property (readonly, nonatomic) BOOL local;
@property (readonly, nonatomic) BSAuditToken *auditToken;

/* class methods */
+ (id)localHandle;
+ (id)handleWithAuditToken:(id)token;

/* instance methods */
- (id)description;
- (BOOL)isLocal;
@end

#endif /* FBSSceneHostHandle_h */
