//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55282.0.0.0.0
//
#ifndef _SFECDHOperation_h
#define _SFECDHOperation_h
@import Foundation;

#include "SFKeyDerivingOperation-Protocol.h"

@class NSString;

@interface _SFECDHOperation : NSObject<SFKeyDerivingOperation> {
  /* instance variables */
  id _ecdhOperationInternal;
}

@property (nonatomic) long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)keySource;
+ (long long)_defaultMode;
+ (id)_defaultOperation;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithMode:(long long)mode;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)deriveKeyWithSpecifier:(id)specifier fromKeySource:(id)source error:(id *)error;
@end

#endif /* _SFECDHOperation_h */
