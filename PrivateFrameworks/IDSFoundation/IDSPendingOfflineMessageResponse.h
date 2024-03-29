//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSPendingOfflineMessageResponse_h
#define IDSPendingOfflineMessageResponse_h
@import Foundation;

#include "IDSMessage.h"
#include "NSCopying-Protocol.h"

@interface IDSPendingOfflineMessageResponse : IDSMessage<NSCopying>
/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (long long)command;
- (id)messageBody;
@end

#endif /* IDSPendingOfflineMessageResponse_h */
