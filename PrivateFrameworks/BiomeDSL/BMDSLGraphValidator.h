//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMDSLGraphValidator_h
#define BMDSLGraphValidator_h
@import Foundation;

@class NSDictionary, NSSet;

@interface BMDSLGraphValidator : NSObject

@property (readonly, nonatomic) BOOL passthrough;
@property (readonly, copy, nonatomic) NSSet *validKeyPaths;
@property (readonly, copy, nonatomic) NSSet *allowedOperations;
@property (readonly, copy, nonatomic) NSSet *allowedStreamTypes;
@property (readonly, copy, nonatomic) NSDictionary *eventStreamClassMapping;

/* class methods */
+ (id)passthroughValidator;
+ (id)currentProcessValidator;
+ (void)setCurrentProcessValidator:(id)validator;
+ (id)genericValidKeyPaths;
+ (id)legacyValidKeyPaths;

/* instance methods */
- (id)init;
- (id)initWithValidKeyPaths:(id)paths allowedOperations:(id)operations allowedStreamTypes:(id)types eventStreamClassMapping:(id)mapping;
- (BOOL)isExecutionAllowedForGraph:(id)graph;
- (BOOL)isStreamTypeAllowed:(unsigned long long)allowed;
- (Class)eventClassForString:(id)string;
@end

#endif /* BMDSLGraphValidator_h */
