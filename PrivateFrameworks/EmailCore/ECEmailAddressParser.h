//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECEmailAddressParser_h
#define ECEmailAddressParser_h
@import Foundation;

@interface ECEmailAddressParser : NSObject
/* class methods */
+ (BOOL)parseEmailAddressString:(id)string displayName:(id *)name localPart:(id *)part domain:(id *)domain groupList:(id *)list;
+ (BOOL)parseString:(id)string emailAddressList:(id *)list;
+ (BOOL)_validateString:(id)string withFunction:(undefined *)function;
+ (BOOL)validateDisplayName:(id)name;
+ (BOOL)validateLocalPart:(id)part;
+ (BOOL)validateDomain:(id)domain;
@end

#endif /* ECEmailAddressParser_h */
