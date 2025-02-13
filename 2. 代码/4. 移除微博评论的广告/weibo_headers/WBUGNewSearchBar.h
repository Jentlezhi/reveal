//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSearchBar.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString;

@interface WBUGNewSearchBar : WBSearchBar <UITextFieldDelegate>
{
    _Bool _isFirstCenter;
    double _placeholderWidth;
}

@property(nonatomic) _Bool isFirstCenter; // @synthesize isFirstCenter=_isFirstCenter;
@property(nonatomic) double placeholderWidth; // @synthesize placeholderWidth=_placeholderWidth;
- (id)textField;
- (void)cleanOtherSubViews;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)updateUI;
- (void)reloadUIElements;
- (void)layoutSubviews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

