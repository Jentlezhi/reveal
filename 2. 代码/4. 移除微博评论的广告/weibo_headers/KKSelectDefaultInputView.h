//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "KKSelectInputView-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSString, UIPickerView, UIResponder, UIToolbar;
@protocol KKSelectOption;

@interface KKSelectDefaultInputView : UIView <KKSelectInputView, UIPickerViewDelegate, UIPickerViewDataSource>
{
    NSArray<KKSelectOption> *_options;
    CDUnknownBlockType _confirm;
    UIPickerView *_pickerView;
    UIToolbar *_toolbar;
    unsigned long long _selectedIndex;
    UIResponder *_inputResponder;
}

@property(readonly, nonatomic) __weak UIResponder *inputResponder; // @synthesize inputResponder=_inputResponder;
- (void).cxx_destruct;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)setOptions:(id)arg1 confirm:(CDUnknownBlockType)arg2 inputResponder:(id)arg3;
- (void)doConfirmAction;
- (void)doCancelAction;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

