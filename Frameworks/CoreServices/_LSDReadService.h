//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef _LSDReadService_h
#define _LSDReadService_h
@import Foundation;

#include "_LSDService.h"

@interface _LSDReadService : _LSDService
/* class methods */
+ (unsigned short)connectionType;
+ (Class)clientClass;
+ (id)XPCInterface;
+ (BOOL)isEnabled;
@end

#endif /* _LSDReadService_h */
