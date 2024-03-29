//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSServerBagValidator_h
#define IDSServerBagValidator_h
@import Foundation;

#include "IDSServerBagConfig.h"

@interface IDSServerBagValidator : NSObject

@property (retain, nonatomic) IDSServerBagConfig *config;

/* instance methods */
- (id)initWithConfig:(id)config;
- (id)trustedContentsFromRawContents:(id)contents shouldReport:(BOOL)report withError:(id *)error;
@end

#endif /* IDSServerBagValidator_h */
