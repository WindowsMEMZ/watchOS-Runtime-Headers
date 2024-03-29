//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKGreenfieldComplicationSharingOption_h
#define NTKGreenfieldComplicationSharingOption_h
@import Foundation;

@class NSString;

@interface NTKGreenfieldComplicationSharingOption : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) unsigned long long optionType;

/* class methods */
+ (id)optionWithName:(id)name uniqueIdentifier:(id)identifier optionType:(unsigned long long)type;

/* instance methods */
@end

#endif /* NTKGreenfieldComplicationSharingOption_h */
