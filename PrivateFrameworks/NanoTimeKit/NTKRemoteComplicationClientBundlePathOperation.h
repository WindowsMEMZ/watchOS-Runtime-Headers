//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKRemoteComplicationClientBundlePathOperation_h
#define NTKRemoteComplicationClientBundlePathOperation_h
@import Foundation;

#include "NTKRemoteComplicationOperation.h"

@interface NTKRemoteComplicationClientBundlePathOperation : NTKRemoteComplicationOperation

@property (copy, nonatomic) id /* block */ bundlePathHandler;

/* instance methods */
- (BOOL)canCoalesceWithOperation:(id)operation;
- (void)activateWithClient:(id)client completion:(id /* block */)completion;
@end

#endif /* NTKRemoteComplicationClientBundlePathOperation_h */
