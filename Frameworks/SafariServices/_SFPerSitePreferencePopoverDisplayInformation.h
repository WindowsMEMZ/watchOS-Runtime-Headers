//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFPerSitePreferencePopoverDisplayInformation_h
#define _SFPerSitePreferencePopoverDisplayInformation_h
@import Foundation;

@class NSString;

@interface _SFPerSitePreferencePopoverDisplayInformation : NSObject

@property (readonly, nonatomic) unsigned long long displayOption;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;

/* class methods */
+ (id)popoverDisplayInformationForPerSitePreference:(id)preference;
+ (void)_buildMapIfNeeded;

/* instance methods */
- (id)_initWithDisplayOption:(unsigned long long)option localizedDisplayName:(id)name;
@end

#endif /* _SFPerSitePreferencePopoverDisplayInformation_h */
