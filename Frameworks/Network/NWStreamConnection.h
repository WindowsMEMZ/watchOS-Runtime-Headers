//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef NWStreamConnection_h
#define NWStreamConnection_h
@import Foundation;

#include "NWConnection.h"

@interface NWStreamConnection : NWConnection
/* class methods */
+ (id)connectionWithConnectedSocket:(int)socket;

/* instance methods */
- (BOOL)readDataWithMinimumLength:(unsigned long long)length maximumLength:(unsigned long long)length completionHandler:(id /* block */)handler;
- (BOOL)writeData:(id)data completionHandler:(id /* block */)handler;
- (BOOL)writeCloseWithCompletionHandler:(id /* block */)handler;
@end

#endif /* NWStreamConnection_h */
