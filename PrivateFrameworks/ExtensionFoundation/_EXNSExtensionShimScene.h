//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef _EXNSExtensionShimScene_h
#define _EXNSExtensionShimScene_h
@import Foundation;

#include "_EXScene-Protocol.h"

@class NSExtensionContext, NSString;

@interface _EXNSExtensionShimScene : NSObject<_EXScene>

@property (retain) NSExtensionContext *context;
@property (retain) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)makePrincipalObjectForExtension:(id)extension;
- (void)connectToSession:(id)session;
- (BOOL)shouldAcceptConnection:(id)connection;
@end

#endif /* _EXNSExtensionShimScene_h */
