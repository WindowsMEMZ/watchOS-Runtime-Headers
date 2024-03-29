//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 473.0.1.0.0
//
#ifndef PKServiceDefaults_h
#define PKServiceDefaults_h
@import Foundation;

#include "NSUserDefaults.h"
#include "PKServicePersonality.h"

@interface PKServiceDefaults : NSUserDefaults

@property (weak) PKServicePersonality *personality;

/* instance methods */
- (id)initWithPersonality:(id)personality;
- (id)objectForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
- (BOOL)synchronize;
@end

#endif /* PKServiceDefaults_h */
