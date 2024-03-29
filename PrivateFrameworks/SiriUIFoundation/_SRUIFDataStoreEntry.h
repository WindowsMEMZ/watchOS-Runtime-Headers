//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.13.3.0.0
//
#ifndef _SRUIFDataStoreEntry_h
#define _SRUIFDataStoreEntry_h
@import Foundation;

@interface _SRUIFDataStoreEntry : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id value;

/* instance methods */
- (id)initWithType:(long long)type value:(id)value;
- (id)_propertyListStringForType;
- (long long)_typeForPropertyListString:(id)string;
- (id)_valuePropertyListRepresentation;
- (id)_valueForPropertyListRepresentation:(id)representation type:(long long)type;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)representation error:(id *)error;
@end

#endif /* _SRUIFDataStoreEntry_h */
