//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSXPCServiceConnectionParent_Protocol_h
#define BSXPCServiceConnectionParent_Protocol_h
@import Foundation;

@protocol BSXPCServiceConnectionParent <NSObject>

@property (readonly, nonatomic) BOOL _invalidated;
@property (readonly, nonatomic) BOOL _clientInvalidated;

/* instance methods */
- (void)_invalidateChildConnection:(id)connection;
- (BOOL)_isInvalidated;
- (BOOL)_isClientInvalidated;
@end

#endif /* BSXPCServiceConnectionParent_Protocol_h */
