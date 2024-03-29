//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIViewServiceTextEffectsOperator_XPCInterface_h
#define _UIViewServiceTextEffectsOperator_XPCInterface_h
@import Foundation;

#include "_UIViewServiceDeputyXPCInterface-Protocol.h"

@class NSString;

@interface _UIViewServiceTextEffectsOperator_XPCInterface : NSObject<_UIViewServiceDeputyXPCInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)exportedInterface;
- (id)hostObjectInterface;
- (id)connectionProtocol;
- (SEL)connectionSelector;
- (id)connectionInvocation;
@end

#endif /* _UIViewServiceTextEffectsOperator_XPCInterface_h */
