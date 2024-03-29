//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNContactVCardParsedResultBuilder_h
#define CNContactVCardParsedResultBuilder_h
@import Foundation;

#include "CNMutableContact.h"
#include "CNVCardParsedResultBuilder-Protocol.h"

@class NSString;

@interface CNContactVCardParsedResultBuilder : NSObject<CNVCardParsedResultBuilder> {
  /* instance variables */
  CNMutableContact *_contact;
  BOOL _empty;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)contactKeyForVCardKey:(id)key;
+ (id /* block */)contactValueTransformForVCardKey:(id)key;
+ (id)os_log;
+ (id)labeledValuesWithValues:(id)values transform:(id /* block */)transform labels:(id)labels isPrimaries:(id)primaries;

/* instance methods */
- (id)init;
- (id)build;
- (id)valueForProperty:(id)property;
- (BOOL)canSetValueForProperty:(id)property;
- (BOOL)setValue:(id)value forProperty:(id)property;
- (BOOL)setValues:(id)values labels:(id)labels isPrimaries:(id)primaries forProperty:(id)property;
- (BOOL)setImageData:(id)data forReference:(id)reference clipRects:(id)rects;
- (void)setUnknownProperties:(id)properties;
- (id)validCountryCodes;
- (long long)contactTypeFromPersonFlags:(long long)flags;
- (unsigned long long)personFlagsByAddingContactType:(long long)type toFlags:(unsigned long long)flags;
- (long long)sharedPhotoDisplayPreferenceFromPersonFlags:(long long)flags;
- (unsigned long long)personFlagsByAddingSharedPhotoDisplayPreference:(long long)preference toFlags:(unsigned long long)flags;
- (BOOL)setPersonFlags:(long long)flags;
- (long long)personFlags;
@end

#endif /* CNContactVCardParsedResultBuilder_h */
