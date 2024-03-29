//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDSessionControl_h
#define HMDSessionControl_h
@import Foundation;

#include "HAPTLVBase.h"
#include "HAPTLVCreateParse-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSUUID;

@interface HMDSessionControl : HAPTLVBase<HAPTLVCreateParse, NSSecureCoding>

@property (readonly, nonatomic) unsigned long long controlCommand;
@property (readonly, copy, nonatomic) NSUUID *sessionID;
@property (readonly, copy) NSData *tlvData;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCommand:(unsigned long long)command sessionIdentifier:(id)identifier;
- (BOOL)_parseFromTLVData;
- (void)description:(id)description indent:(id)indent;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HMDSessionControl_h */
