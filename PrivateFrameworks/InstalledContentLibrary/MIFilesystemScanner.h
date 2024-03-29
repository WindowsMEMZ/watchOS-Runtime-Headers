//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1270.60.4.0.0
//
#ifndef MIFilesystemScanner_h
#define MIFilesystemScanner_h
@import Foundation;

#include "MIFilesystemScannerDelegate-Protocol.h"

@class NSString;

@interface MIFilesystemScanner : NSObject

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (weak, nonatomic) NSObject<MIFilesystemScannerDelegate> *delegate;

/* instance methods */
- (BOOL)_scanAppsDirectory:(id)directory withError:(id *)error;
- (BOOL)_scanFrameworkDirectory:(id)directory withError:(id *)error;
- (BOOL)_scanFrameworksLocationsWithError:(id *)error;
- (BOOL)_scanExtensionKitDirectory:(id)directory withError:(id *)error;
- (id)extensionKitExtensionsDirectories;
- (BOOL)_scanExtensionKitLocationsWithError:(id *)error;
- (BOOL)_scanBundleContainersWithClass:(unsigned long long)class withError:(id *)error ignoredErrorOccurredOnOneOrMoreItems:(BOOL *)items;
- (id)initWithScanOptions:(unsigned long long)options personaUniqueString:(id)string;
- (id)initWithScanOptions:(unsigned long long)options;
- (id)init;
- (BOOL)performScanWithError:(id *)error;
@end

#endif /* MIFilesystemScanner_h */
