//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef EDAMUserException_h
#define EDAMUserException_h
@import Foundation;

#include "FATException.h"

@class NSNumber, NSString;

@interface EDAMUserException : FATException

@property (retain, nonatomic) NSNumber *errorCode;
@property (retain, nonatomic) NSString *parameter;

/* class methods */
+ (id)structName;
+ (id)structFields;

/* instance methods */
@end

#endif /* EDAMUserException_h */
