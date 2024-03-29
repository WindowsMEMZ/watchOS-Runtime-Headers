//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSSpecifier_h
#define PSSpecifier_h
@import Foundation;

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface PSSpecifier : NSObject {
  /* instance variables */
  SEL getter;
  SEL setter;
  SEL action;
  SEL cancel;
  long long keyboardType;
  long long autoCapsType;
  long long autoCorrectionType;
  unsigned long long textFieldType;
  NSDictionary *_titleDict;
  NSDictionary *_shortTitleDict;
  NSMutableDictionary *_properties;
}

@property (retain, nonatomic) NSArray *values;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) id userInfo;
@property (weak, nonatomic) id weakUserInfo;
@property (retain, nonatomic) NSDictionary *titleDictionary;
@property (retain, nonatomic) NSDictionary *shortTitleDictionary;
@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) id target;
@property (nonatomic) Class detailControllerClass;
@property (nonatomic) long long cellType;
@property (nonatomic) Class editPaneClass;
@property (nonatomic) SEL confirmationAction;
@property (nonatomic) SEL confirmationAlternateAction;
@property (nonatomic) SEL confirmationCancelAction;
@property (nonatomic) SEL buttonAction;
@property (nonatomic) SEL controllerLoadAction;
@property (nonatomic) BOOL showContentString;

/* class methods */
+ (id)deleteButtonSpecifierWithName:(id)name target:(id)target action:(SEL)action;
+ (id)preferenceSpecifierNamed:(id)named target:(id)target set:(SEL)set get:(SEL)get detail:(Class)detail cell:(long long)cell edit:(Class)edit;
+ (id)groupSpecifierWithName:(id)name;
+ (id)emptyGroupSpecifier;
+ (id)groupSpecifierWithID:(id)id;
+ (id)groupSpecifierWithID:(id)id name:(id)name;
+ (id)specifierWithSpecifier:(id)specifier;
+ (long long)autoCorrectionTypeForNumber:(id)number;
+ (long long)autoCapsTypeForString:(id)string;
+ (long long)keyboardTypeForString:(id)string;

/* instance methods */
- (void)addFooterHyperlinkWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range url:(id)url;
- (void)addFooterHyperlinkWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range target:(id)target action:(SEL)action;
- (void)_addLinkSpec:(id)spec;
- (id)init;
- (id)initWithName:(id)name target:(id)target set:(SEL)set get:(SEL)get detail:(Class)detail cell:(long long)cell edit:(Class)edit;
- (id)propertyForKey:(id)key;
- (void)setProperty:(id)property forKey:(id)key;
- (void)removePropertyForKey:(id)key;
- (void)setProperties:(id)properties;
- (id)properties;
- (BOOL)hasValidSetter;
- (void)performSetterWithValue:(id)value;
- (BOOL)hasValidGetter;
- (id)performGetter;
- (void)performLegacyAction;
- (void)setLegacyAction:(SEL)action;
- (SEL)legacyAction;
- (void)setLegacyCancel:(SEL)cancel;
- (SEL)legacyCancel;
- (void)performControllerLoadAction;
- (void)performButtonAction;
- (void)performConfirmationAction;
- (void)performConfirmationAlternateAction;
- (void)performConfirmationCancelAction;
- (id)objectForKeyedSubscript:(id)subscript;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (void)loadValuesAndTitlesFromDataSource;
- (void)setValues:(id)values titles:(id)titles;
- (void)setValues:(id)values titles:(id)titles shortTitles:(id)titles;
- (void)setValues:(id)values titles:(id)titles shortTitles:(id)titles usingLocalizedTitleSorting:(BOOL)sorting;
- (void)setupIconImageWithBundle:(id)bundle;
- (void)setupIconImageWithPath:(id)path;
- (id)description;
- (void)setKeyboardType:(long long)type autoCaps:(long long)caps autoCorrection:(long long)correction;
- (long long)titleCompare:(id)compare;
- (BOOL)isEqualToSpecifier:(id)specifier;
@end

#endif /* PSSpecifier_h */
