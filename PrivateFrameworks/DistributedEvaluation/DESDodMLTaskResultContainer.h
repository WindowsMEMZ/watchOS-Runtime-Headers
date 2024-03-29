//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.4.0.0.0
//
#ifndef DESDodMLTaskResultContainer_h
#define DESDodMLTaskResultContainer_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface DESDodMLTaskResultContainer : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSDictionary *JSONResult;
@property (readonly, nonatomic) NSURL *binaryResultURL;
@property (readonly, nonatomic) NSString *sandboxExtension;
@property (readonly, nonatomic) double duration;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithJSONResult:(id)jsonresult binaryResultURL:(id)url sandboxExtension:(id)extension duration:(double)duration;
- (id)taskResultWithError:(id *)error;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* DESDodMLTaskResultContainer_h */
