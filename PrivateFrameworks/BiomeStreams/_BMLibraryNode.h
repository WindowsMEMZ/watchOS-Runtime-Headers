//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef _BMLibraryNode_h
#define _BMLibraryNode_h
@import Foundation;

@interface _BMLibraryNode : NSObject
/* class methods */
+ (id)identifier;
+ (id)streamNames;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)name;
+ (id)sublibraries;
+ (id)streams;
+ (id)allStreams;
+ (id)allStreamIdentifiers;
+ (id)allValidKeyPaths;
+ (id)allValidEventClasses;
+ (id)streamWithIdentifier:(id)identifier error:(id *)error;
@end

#endif /* _BMLibraryNode_h */
