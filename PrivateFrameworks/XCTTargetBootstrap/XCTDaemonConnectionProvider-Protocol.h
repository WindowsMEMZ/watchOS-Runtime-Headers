//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22515.0.0.0.0
//
#ifndef XCTDaemonConnectionProvider_Protocol_h
#define XCTDaemonConnectionProvider_Protocol_h
@import Foundation;

#include "XCTDaemonConnectionProvider-Protocol.h"

@class NSString;

@protocol XCTDaemonConnectionProvider <NSObject>
/* instance methods */
- (id)makeNewDaemonConnectionWithServiceName:(id)name;
@end

#endif /* XCTDaemonConnectionProvider_Protocol_h */
