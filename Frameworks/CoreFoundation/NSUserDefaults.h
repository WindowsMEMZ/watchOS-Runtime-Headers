//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSUserDefaults_h
#define NSUserDefaults_h
@import Foundation;

#include "NSArray.h"

@interface NSUserDefaults : NSObject {
  /* instance variables */
  id _kvo_;
  struct __CFString * _identifier_;
  struct __CFString * _container_;
}

@property (readonly, copy) NSArray *volatileDomainNames;

/* instance methods */
- (struct __CFString *)_identifier;
- (void)_setIdentifier:(struct __CFString *)identifier;
- (struct __CFString *)_container;
- (void)_setContainer:(struct __CFURL *)container;
- (BOOL)_observingCFPreferences;
- (id)_kvo;
- (void)_setKVO:(id)kvo;
@end

#endif /* NSUserDefaults_h */
