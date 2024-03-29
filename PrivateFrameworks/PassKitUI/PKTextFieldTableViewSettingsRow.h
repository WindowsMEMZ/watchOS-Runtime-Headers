//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKTextFieldTableViewSettingsRow_h
#define PKTextFieldTableViewSettingsRow_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "PKTableViewSettingsRow-Protocol.h"
#include "PKTextFieldTableViewSettingsRowFormatter.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSString;

@interface PKTextFieldTableViewSettingsRow : NSObject<UITextFieldDelegate, PKTableViewSettingsRow> {
  /* instance variables */
  PKTextFieldTableViewSettingsRowFormatter *_formatter;
}

@property (nonatomic) long long keyboardType;
@property (copy, nonatomic) NSString *placeholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id value;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;

/* class methods */
+ (id)cellReuseIdentifier;

/* instance methods */
- (id)initWithIdentifier:(id)identifier title:(id)title value:(id)value formatter:(id)formatter changeHandler:(id /* block */)handler;
- (BOOL)isEqual:(id)equal;
- (id)tableViewCellForTableView:(id)view atIndexPath:(id)path;
- (BOOL)shouldHighlight;
- (void)textFieldDidEndEditing:(id)editing reason:(long long)reason;
- (void)_textFieldValueChanged:(id)changed;
- (BOOL)isEnabled;
@end

#endif /* PKTextFieldTableViewSettingsRow_h */
