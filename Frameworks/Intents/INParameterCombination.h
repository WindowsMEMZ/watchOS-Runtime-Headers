//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INParameterCombination_h
#define INParameterCombination_h
@import Foundation;

#include "INCodableCoding-Protocol.h"
#include "INCodableLocalizationTable.h"
#include "INWidgetPlistRepresentable-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface INParameterCombination : NSObject<INWidgetPlistRepresentable, NSSecureCoding, INCodableCoding> {
  /* instance variables */
  INCodableLocalizationTable *_localizationTable;
}

@property (copy, nonatomic) INCodableLocalizationTable *_localizationTable;
@property (nonatomic) BOOL primary;
@property (nonatomic) BOOL supportsBackgroundExecution;
@property (copy, nonatomic) NSString *titleFormatString;
@property (copy, nonatomic) NSString *titleFormatStringLocID;
@property (copy, nonatomic) NSString *subtitleFormatString;
@property (copy, nonatomic) NSString *subtitleFormatStringLocID;
@property (readonly, copy, nonatomic) NSString *localizedTitleFormatString;
@property (readonly, copy, nonatomic) NSString *localizedSubtitleFormatString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)makeFromWidgetPlistableRepresentation:(id)representation error:(id *)error;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)localizedTitleFormatStringWithLocalizer:(id)localizer;
- (id)localizedSubtitleFormatStringWithLocalizer:(id)localizer;
- (void)updateWithDictionary:(id)dictionary;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)localizer;
- (id)widgetPlistableRepresentationWithParameters:(id)parameters error:(id *)error;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)descriptionAtIndent:(unsigned long long)indent;
- (id)_dictionaryRepresentation;
- (void)_setLocalizationTable:(id)table;
- (BOOL)isPrimary;
@end

#endif /* INParameterCombination_h */
