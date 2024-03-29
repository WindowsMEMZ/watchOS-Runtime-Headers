//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNApplicationConnection_h
#define LNApplicationConnection_h
@import Foundation;

#include "LNConnection.h"

@interface LNApplicationConnection : LNConnection
/* instance methods */
- (id)initWithBundleIdentifier:(id)identifier appBundleIdentifier:(id)identifier error:(id *)error;
- (id)appBundleIdentifier;
- (void)handleConnectionActionResponse:(id)response;
- (BOOL)shouldRefreshWithOptions:(id)options;
- (id)initWithBundleIdentifier:(id)identifier;
@end

#endif /* LNApplicationConnection_h */
