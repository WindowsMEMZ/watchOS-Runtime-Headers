//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISystemNavigationActionDestinationContext_h
#define UISystemNavigationActionDestinationContext_h
@import Foundation;

#include "BSXPCCoding-Protocol.h"

@class NSString, NSURL;

@interface UISystemNavigationActionDestinationContext : NSObject<BSXPCCoding>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)systemNavigationActionContextWithTitle:(id)title andURL:(id)url;
+ (id)systemNavigationActionContextWithTitle:(id)title bundleId:(id)id;
+ (id)systemNavigationActionContextWithTitle:(id)title sceneIdentifier:(id)identifier;
+ (id)systemNavigationActionContextWithURL:(id)url;

/* instance methods */
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (void)encodeWithXPCDictionary:(id)xpcdictionary;
@end

#endif /* UISystemNavigationActionDestinationContext_h */
