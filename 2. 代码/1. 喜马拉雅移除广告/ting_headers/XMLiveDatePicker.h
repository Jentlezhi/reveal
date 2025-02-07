//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, UIPickerView;

@interface XMLiveDatePicker : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    NSDate *_minDate;
    NSDate *_selectDate;
    UIPickerView *_timePicker;
    NSMutableArray *_showDateArray;
    NSMutableDictionary *_timeNamesOfDayMap;
    NSDate *_selectedDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(retain, nonatomic) NSMutableDictionary *timeNamesOfDayMap; // @synthesize timeNamesOfDayMap=_timeNamesOfDayMap;
@property(retain, nonatomic) NSMutableArray *showDateArray; // @synthesize showDateArray=_showDateArray;
@property(retain, nonatomic) UIPickerView *timePicker; // @synthesize timePicker=_timePicker;
@property(retain, nonatomic) NSDate *selectDate; // @synthesize selectDate=_selectDate;
@property(retain, nonatomic) NSDate *minDate; // @synthesize minDate=_minDate;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)reloadDatePicker;
@property(readonly, nonatomic) NSDate *date;
- (void)layoutSubviews;
- (void)createDateShowArray;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

