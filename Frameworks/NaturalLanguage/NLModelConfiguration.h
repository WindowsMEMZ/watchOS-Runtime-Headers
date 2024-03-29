//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 129.0.0.0.0
//
#ifndef NLModelConfiguration_h
#define NLModelConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface NLModelConfiguration : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  NSDictionary *_options;
}

@property (readonly) long long type;
@property (readonly, copy) NSString *language;
@property (readonly) unsigned long long revision;

/* class methods */
+ (id)defaultModelConfigurationForType:(long long)type;
+ (id)defaultModelConfigurationForType:(long long)type options:(id)options error:(id *)error;
+ (BOOL)supportsSecureCoding;
+ (id)supportedRevisionsForType:(long long)type;
+ (unsigned long long)currentRevisionForType:(long long)type;

/* instance methods */
- (id)initWithModelType:(long long)type options:(id)options error:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)options;
- (id)embeddingURL;
- (id)embeddingModel;
- (id)embeddingData;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* NLModelConfiguration_h */
