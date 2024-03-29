//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSAppViewImageService_h
#define CSLSAppViewImageService_h
@import Foundation;

#include "CSLSAppViewImageProviding-Protocol.h"

@class NSString, NSXPCConnection;

@interface CSLSAppViewImageService : NSObject<CSLSAppViewImageProviding>

@property (retain) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)xpcServerInterface;

/* instance methods */
- (id)init;
- (void)provideAppViewListImageDataForWidth:(double)width height:(double)height scale:(double)scale completion:(id /* block */)completion;
@end

#endif /* CSLSAppViewImageService_h */
