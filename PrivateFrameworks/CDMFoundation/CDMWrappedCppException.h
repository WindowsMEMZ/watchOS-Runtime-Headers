//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMWrappedCppException_h
#define CDMWrappedCppException_h
@import Foundation;

#include "NSException.h"

@interface CDMWrappedCppException : NSException
/* class methods */
+ (id)exceptionFromCppExceptionWithMessage:(id)message;
+ (id)exceptionFromUnknownCppException;
@end

#endif /* CDMWrappedCppException_h */
