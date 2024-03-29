//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKGreenfieldServiceDelegate_h
#define NTKGreenfieldServiceDelegate_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"

@class NSString;

@interface NTKGreenfieldServiceDelegate : NSObject<NSXPCListenerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
@end

#endif /* NTKGreenfieldServiceDelegate_h */
