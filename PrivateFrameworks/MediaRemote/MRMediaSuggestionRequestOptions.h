//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRMediaSuggestionRequestOptions_h
#define MRMediaSuggestionRequestOptions_h
@import Foundation;

#include "MRMediaSuggestionRequestOptionsConfigurable-Protocol.h"

@class NSArray, NSString;

@interface MRMediaSuggestionRequestOptions : NSObject<MRMediaSuggestionRequestOptionsConfigurable>

@property (copy, nonatomic) NSArray *bundleIdentifiers;
@property (copy, nonatomic) NSArray *contexts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultOptions;

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
@end

#endif /* MRMediaSuggestionRequestOptions_h */
