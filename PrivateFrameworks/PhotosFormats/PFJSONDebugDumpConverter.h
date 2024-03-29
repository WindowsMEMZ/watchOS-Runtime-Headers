//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFJSONDebugDumpConverter_h
#define PFJSONDebugDumpConverter_h
@import Foundation;

@interface PFJSONDebugDumpConverter : NSObject

@property (copy) id /* block */ unknownTypeHandler;

/* instance methods */
- (id)initWithUnknownTypeHandler:(id /* block */)handler;
- (id)JSONForObject:(id)object error:(id *)error;
- (id)JSONCompatibleObjectForObject:(id)object;
- (id)unknownObjectTypePlaceholderForObject:(id)object;
@end

#endif /* PFJSONDebugDumpConverter_h */
