//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INHelperServiceAccessSpecifier_h
#define INHelperServiceAccessSpecifier_h
@import Foundation;

@class NSString;

@interface INHelperServiceAccessSpecifier : NSObject

@property (readonly, nonatomic) unsigned long long accessLevel;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;

/* class methods */
+ (void)initialize;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)identifier;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierAppropriateForCurrentProcess;
+ (id)accessSpecifierAppropriateForXPCConnection:(id)xpcconnection;

/* instance methods */
- (id)initWithAccessLevel:(unsigned long long)level associatedAppBundleIdentifier:(id)identifier;
- (id)debugDescription;
@end

#endif /* INHelperServiceAccessSpecifier_h */
